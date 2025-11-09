#include <stdio.h>
// menghitung tunjagan dan potongan dengan refrensi anak jika anak itu sama dengan 1 mendapatkan diskon 10 
int main()
{
    int gaji_kotor, jumlah_anak;
    float tunjangan, potongan;
    printf("Masukan Gaji anda: ");
    scanf_s("%i", &gaji_kotor);

    printf("Masukan Nilai Tunjangan anda: ");
    scanf_s("%i", &jumlah_anak);

    if (jumlah_anak == 1){
        printf("Mendapatkan diskon 10%%\n");
        tunjangan = gaji_kotor - (gaji_kotor * 10) / 100;
        printf("Anda Mendapatkan tujangan: %.2f\n", tunjangan);
        potongan = gaji_kotor + tunjangan;
        printf("Anda Mendapatkan Gaji Bersih sekitar  %.2f", potongan);
    }else if (jumlah_anak == 2) {
        tunjangan = gaji_kotor - (gaji_kotor * 20) / 100;
        printf("Anda Mendapatkan tujangan: %.2f\n", tunjangan);
        potongan = gaji_kotor + tunjangan;
        printf("Anda Mendapatkan Gaji Bersih sekitar  %.2f", potongan);
    }else if (jumlah_anak == 3) {
        tunjangan = gaji_kotor - (gaji_kotor * 30) / 100;
        printf("Anda Mendapatkan tujangan: %.2f\n", tunjangan);
        potongan = gaji_kotor + tunjangan;
        printf("Anda Mendapatkan Gaji Bersih sekitar  %.2f", potongan);
        
    }
    else{
        printf("Mohon Maaf anda Tidak mendaptkan potongan :");
    }
}