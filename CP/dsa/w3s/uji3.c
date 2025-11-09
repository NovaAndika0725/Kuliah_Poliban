#include <stdio.h>

int main() {
    float accumulator = 0;
    float bilangan;
    char operator;

    printf("Mulai perhitungan\n");

    while (1) {
        printf("Masukkan ekspresi (Bilangan Operator): ");
        scanf("%f %c", &bilangan, &operator);

        switch (operator) {
            case 'S':
                accumulator = bilangan;
                printf("=> men-set accumulator\n= %f\n", accumulator);
                break;
            case '+':
                accumulator += bilangan;
                printf("=> menjumlah accumulator\n= %f\n", accumulator);
                break;
            case '-':
                accumulator -= bilangan;
                printf("=> mengurangi accumulator\n= %f\n", accumulator);
                break;
            case '*':
                accumulator *= bilangan;
                printf("=> mengalikan accumulator\n= %f\n", accumulator);
                break;
            case '/':
                if (bilangan != 0) {
                    accumulator /= bilangan;
                    printf("=> membagi accumulator\n= %f\n", accumulator);
                } else {
                    printf("=> ERROR: Pembagian dengan nol tidak diperbolehkan!\n");
                }
                break;
            case '%':
                accumulator = (int)accumulator % (int)bilangan;
                printf("=> modulus accumulator\n= %f\n", accumulator);
                break;
            case '&':
                accumulator = (int)accumulator & (int)bilangan;
                printf("=> operasi AND\n= %f\n", accumulator);
                break;
            case '|':
                accumulator = (int)accumulator | (int)bilangan;
                printf("=> operasi OR\n= %f\n", accumulator);
                break;
            case 'E':
                printf("=> selesai\nAkhir perhitungan\n");
                return 0;
            default:
                printf("Operator tidak dikenali. Gunakan S, +, -, *, /, %%, &, |, atau E.\n");
        }
    }

    return 0;
}
