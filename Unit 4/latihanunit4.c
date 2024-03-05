#include <stdio.h>

int s, hasil; 

void kelilingpersegi() {
        hasil = 4 * s;
        printf("Keliling persegi adalah %d\n", hasil);
    }

void luaspersegi() {
        hasil = s * s;
        printf("Luas persegi adalah %d\n", hasil);
    }

void volumekubus() {
        hasil = s * s * s;
        printf("Volume kubus adalah %d", hasil);
}

int main (){
    printf("Masukkan sisi: ");
    scanf("%d", &s);

    kelilingpersegi();
    luaspersegi();
    volumekubus();

    return 0;
}