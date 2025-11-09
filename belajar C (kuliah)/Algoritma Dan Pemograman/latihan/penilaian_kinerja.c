#include <stdio.h>

int main() {
  int pin, pilihan, n;
  printf("Masukan PIN keamanan: ");
  scanf("%i", &pin);

  if (pin == 12345) {
    printf("PIN anda benar, Akses diterima\n");
    printf("Pilih menu menilai kinerja karyawan\n");
    printf("1, Kehadiran\n");
    printf("2, Kedisiplinan\n");
    printf("3, Hasil kerja]n");
    printf("Pilih katefoori (1-3): ");
    scanf_s("%i", &pilihan);
    switch (pilihan) {  
    case 1:
      printf("Masukan Nilai kehadiran: ");
      scanf_s("%i", &n);
      if (n >= 0 && n <= 100) {
        if (n >= 80) {
          printf("Kinerja Anda sangat baik\n");
        } else if (n >= 70) {
          printf("Kinerja Anda Baik");
        } else if (n >= 60) {
          printf("Kinerja Anda cukup");

        } else {
          printf("Kinerja Anda kurang \n");
          if (n <= 59) {
            printf("Anda perlu Samgat lagi!\n");
          }
        }
      } else {
        printf("Nilai Anda Tidak valid! harus antara 0 -- 100.\n ");
      }
      break;
    case 2:
      printf("Masukan Nilai disiplin: ");
      scanf_s("%i", &n);
      if (n >= 0 && n <= 100) {
        if (n >= 80) {
          printf("Anda sangat disiplin\n");
        } else if (n >= 70) {
          printf("Disiplin Anda Baik");
        } else if (n >= 60) {
          printf("Disiplin Anda cukup");

        } else {
          printf("Diplin Anda kurang \n");
          if (n <= 59) {
            printf("Anda perlu Samgat lagi!\n");
          }
        }
      } else {
        printf("Nilai Anda Tidak valid! harus antara 0 -- 100.\n ");
      }
      break;

    case 3:
      printf("Masukan Nilai hasil kerja: ");
      scanf_s("%i", &n);
      if (n >= 0 && n <= 100) {
        if (n >= 80) {
          printf("Hasil kerja Anda sangat baik\n");
        } else if (n >= 70) {
          printf("Hasil kerja Anda Baik");
        } else if (n >= 60) {
          printf("Hasil kerja Anda cukup");

        } else {
          printf("Hasil kerja Anda kurang \n");
          if (n <= 59) {
            printf("Anda perlu Samgat lagi!\n");
          }
        }
      } else {
        printf("Nilai Anda Tidak valid! harus antara 0 -- 100.\n ");
      }
      break;
    }
  }else {
    printf("PIN anda salah!");
  }
}