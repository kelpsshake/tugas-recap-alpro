#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

//program ini bekerja untuk for yang pertama dimana i dimulai dari 2 lalu di simpan di dalam bilangan utama
//bertipe i, lalu masuk ke for yang kedua dimana j sebagai bilangan pengali nya, dimulai dari 1 lalu di simpann
//dalam j, lalu terakhir hasil perkalian j dan i
//i dan j akan terus berulang sampe angka yang ingin di capai nya