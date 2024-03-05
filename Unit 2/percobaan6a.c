#include <stdio.h>

int i = 1;

int main() {

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}

//do/while yang merupakan varian dari perulangan while. Perulangan ini akan mengeksekusi blok kode satu kali, 
//sebelum memeriksa apakah kondisinya benar, kemudian akan mengulangi perulangan selama kondisinya benar.