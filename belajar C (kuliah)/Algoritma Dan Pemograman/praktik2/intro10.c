#include <stdio.h> // Header standar untuk fungsi input-output printf, scanf, dll

int main() {
    float celsius, fahrenheit; // membuat 2 variable degan tipe data float.

    printf("Masukkan suhu dalam Celcius: "); // menampilkan ke layar "Masukkan suhu dalam Celcius: "
    scanf("%f", &celsius);// menginputkan nilai berupa pecahan 

    fahrenheit = (9.0 / 5.0) * celsius + 32; // rummus untuk menghitung celsius ke fahrenheit

    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit); // menampilkan ke layar dan %.2f adalah untuk menampilkan 
    // dua dikit desmial setelah titik dan \n untuk baris baru.

    return 0; // mengahiri program tanpa ada error
}
