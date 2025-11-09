#include <stdio.h>
#include <stdlib.h>

// Struktur untuk menyimpan titik (x, y)
typedef struct {
    double x, y;
} Point;

// Fungsi untuk membandingkan dua titik (untuk sorting)
int compare(const void *a, const void *b) {
    Point *p1 = (Point *)a;
    Point *p2 = (Point *)b;
    if (p1->x < p2->x) return -1;
    if (p1->x > p2->x) return 1;
    if (p1->y < p2->y) return -1;
    if (p1->y > p2->y) return 1;
    return 0;
}

// Fungsi cross product: menentukan arah rotasi dari tiga titik
double cross(Point O, Point A, Point B) {
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

// Fungsi ccw (counter-clockwise): true jika OAB berputar ke kiri
int ccw(Point p, Point q, Point r) {
    return cross(p, q, r) > 0;
}

// Fungsi utama convex hull (Andrew’s monotone chain)
Point* convex_hull(Point *P, int n, int *hull_size) {
    if (n <= 1) {
        *hull_size = n;
        return P;
    }

    // Urutkan titik berdasarkan x (dan y jika sama)
    qsort(P, n, sizeof(Point), compare);

    Point *H = (Point *)malloc(sizeof(Point) * (2 * n));
    int k = 0;

    // Bangun lower hull
    for (int i = 0; i < n; i++) {
        while (k >= 2 && !ccw(H[k - 2], H[k - 1], P[i]))
            k--;
        H[k++] = P[i];
    }

    // Bangun upper hull
    for (int i = n - 2, t = k + 1; i >= 0; i--) {
        while (k >= t && !ccw(H[k - 2], H[k - 1], P[i]))
            k--;
        H[k++] = P[i];
    }

    // Hilangkan duplikat titik terakhir
    if (k > 1) k--;

    *hull_size = k;
    return H;
}

int main() {
    Point points[10] = {
        {10, 1}, {2, 2}, {2, 3}, {3, 4}, {9, 5},
        {9, 6}, {6, 7}, {6, 8}, {5, 9}, {8, 10}
    };

    int n = 10;
    int hull_size;
    Point *hull = convex_hull(points, n, &hull_size);

    printf("Titik-titik pembentuk convex hull:\n");
    for (int i = 0; i < hull_size; i++) {
        printf("(%.2f, %.2f)\n", hull[i].x, hull[i].y);
    }

    free(hull);
    return 0;
}
