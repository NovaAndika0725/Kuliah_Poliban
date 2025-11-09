#include <stdio.h>

int main() {
    float accumulator = 0;
    float bilangan;
    char operator;

    printf("Mulai Perhitungan: ");
    scanf("%f %c", &bilangan, &operator);

    if (operator == 's') {
        accumulator = bilangan;
        printf("=> men-set accumulator\n= %f", accumulator);
    // } else if (operator == '+') {
    //     accumulator += bilangan;
    //     printf("=> menjumlah accumulator\n= %f\n", accumulator);
    // } else if (operator == '-') {
    //     accumulator -= bilangan;
    //     printf("=> mengurangi accumulator\n= %f\n", accumulator);
    // } else if (operator == '*') {
    //     accumulator *= bilangan;
    //     printf("=> mengalikan accumulator\n= %f\n", accumulator);
    // } else if (operator == '/') {
    //     if (bilangan != 0) {
    //         accumulator /= bilangan;
    //         printf("=> membagi accumulator\n= %f\n", accumulator);
    //     } else {
    //         printf("=> ERROR: Pembagian dengan nol tidak diperbolehkan!\n");
    //     }
    // } else if (operator == '%') {
    //     accumulator = (int)accumulator % (int)bilangan;
    //     printf("=> modulus accumulator\n= %f\n", accumulator);
    // } else if (operator == '&') {
    //     accumulator = (int)accumulator & (int)bilangan;
    //     printf("=> operasi AND\n= %f\n", accumulator);
    // } else if (operator == '|') {
    //     accumulator = (int)accumulator | (int)bilangan;
    //     printf("=> operasi OR\n= %f\n", accumulator);
    // } else if (operator == 'E') {
    //     printf("=> selesai\nAkhir perhitungan\n");
    // } else {
    //     printf("Operator tidak dikenali.\n");
    }
    switch (operator) {

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
            default:
                printf("Operator tidak dikenali. Gunakan S, +, -, *, /, %%, &, |, atau E.\n");
    }
    return 0;
}
