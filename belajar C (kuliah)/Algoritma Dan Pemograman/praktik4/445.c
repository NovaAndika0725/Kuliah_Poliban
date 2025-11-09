#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, D, x1, x2;

    printf("Masukkan nilai A: ");
    scanf("%f", &A);
    printf("Masukkan nilai B: ");
    scanf("%f", &B);
    printf("Masukkan nilai C: ");
    scanf("%f", &C);

    D = B * B - 4 * A * C;
    printf("Determinan (D) = %.2f\n", D);

    if (D == 0) {
        x1 = -B / (2 * A);
        printf("Akar-akarnya kembar: x1 = x2 = %.2f\n", x1);
    } else if (D > 0) {
        x1 = (-B + sqrt(D)) / (2 * A);
        x2 = (-B - sqrt(D)) / (2 * A);
        printf("Akar-akarnya berbeda:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else {
        float realPart = -B / (2 * A);
        float imagPart = sqrt(-D) / (2 * A);
        printf("Akar-akarnya imaginer:\n");
        printf("x1 = %.2f + %.2fj\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fj\n", realPart, imagPart);
    }

    return 0;
}
