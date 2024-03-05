#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}
//ini output nya cuman nama depannya aja, cuman baca satu buah kata yang sisa nya ga di cetak
//scanf hanya untuk menyetak satu buah kata