#include <stdio.h>

int main (){
    int jumlah_elemen, i, penjumlahan = 0;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &jumlah_elemen);

    int array[jumlah_elemen];

    printf("Masukkan nilai setiap elemen:\n");
    for(i=0; i<jumlah_elemen; i++){
        scanf("%d", &array[i]);
        penjumlahan += array[i];
    }

    printf("Penjumlahan seluruh elemen pada array: %d", penjumlahan);

    return 0;
}