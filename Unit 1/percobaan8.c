#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

//fungsi dari titik yang diikuti angka itu menentukan jumlah bilangan di belakang koma yang tampil
//contoh .2 itu artinya jumlah bilangan di belakang koma itu 2 jadi 3.14