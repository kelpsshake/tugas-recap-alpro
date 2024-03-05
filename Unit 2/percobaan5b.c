#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}
//while untuk yang pertama itu dia akan berhenti kalau i nya sudah lebih kecil sama dengan dari 3 dan akan di 
//simpan di i, lalu while yang kedua juga sama dia akan berhenti apabila nilai j lebih kecil sama dengan 2
//lalu akan di simpang dalam j, setelah itu akan ada hasil perkalian antara j dan i