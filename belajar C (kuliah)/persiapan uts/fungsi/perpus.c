#include <stdio.h>
#include <string.h>

#define MAX 100
struct  Buku
{
    char judul[50];
    char pengarang[50];
    int tahun;
};
int jumlahBuku = 0;
struct Buku daftarBuku[MAX];
void tampilBuku();
void tambahBuku();
void cariBuku();
int editDistance(int *s1, int *s2);
int main(){
    int pilihan;
    do
    {
        printf("Menu Perpustakaan\n");
        printf("1. Tampilkan Buku\n");
        printf("2. Tambah Buku\n");
        printf("3. Cari Buku\n");
        printf("4. Keluar\n");
        printf("Pilihan Anda: ");
        scanf_s("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            tampilBuku();
            break;
        case 2:
            tambahBuku();
            break;
        case 3:
            cariBuku();
            break;
        case 4:
            printf("Keluar dari program.\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 4);
    return 0;
}
void tambahBuku(){
    if(jumlahBuku >= MAX){
        printf("Daftar buku penuh.\n");
        return;
    }

    printf("Masukan Judul Buku: ");
    fgets(daftarBuku[jumlahBuku].judul, 100, stdin);
    daftarBuku[jumlahBuku].judul[strcspn(daftarBuku[jumlahBuku].judul, "\n")] = '\0';

    printf("Masukan Nama penulis Buku: ");
    fgets(daftarBuku[jumlahBuku].pengarang, 100, stdin);
    daftarBuku[jumlahBuku].pengarang[strcspn(daftarBuku[jumlahBuku].pengarang, "\n")] = '\0';

    printf("Masukan Tahun terbit");
    scanf("%i", &daftarBuku[jumlahBuku].tahun);

    jumlahBuku++;
    printf("Buku berhasik ditambahkan!\n");
}
void tampilBuku(){
    if(jumlahBuku == 0){
        printf("Belum ada buku. \n");
        return;
    }

    printf("\nDaftar Buku. \n");
    for (int i = 0; i < jumlahBuku; i++)
    {
        printf("%d. %s - %s (%d)\n", i+1,daftarBuku[i].judul,daftarBuku[i].pengarang,
        daftarBuku[i].tahun);
    }
    
}
void cariBuku(){
    if(jumlahBuku == 0){
        printf("Buku tidak tersedia");
        return;
    }
    char kata[100];
    fgets(kata, 100, stdin);
    kata[strcspn(kata, "\n")] = '\0';
    printf("\nHasil pencarian mirip dengan \"%s\": \n", kata);
    for(int i = 0l i < jumlahBuku; i++){
        int jarak = editDistance(kata, daftarBuku[i].judul);
        if(jarak <= 3){
            printf("- %s (%s, %d) [jarak=%d]\n",daftarBuku[i].judul,daftarBuku[i].pengarang,
        daftarBuku[i].tahun);
        }
    }
}
int editDistance(char *s1, char *s2){
    int len1 = strlen(s1), len2 =strlen(s2);
}