#include <stdio.h>

int main() {
    int jumlah_transaksi, i, nominal, total_pengeluaran = 0;

    printf("Jumlah transaksi: ");
    scanf("%d", &jumlah_transaksi);

    if(jumlah_transaksi <= 0){
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }

    printf("Masukkan nominal transaksi:\n");
    for (i = 1; i <= jumlah_transaksi; i++){
        printf("Transaksi %d: ", i);
        scanf("%d", &nominal);
        total_pengeluaran += nominal;
    }
    printf("Total pengeluaran hari ini: %d\n", total_pengeluaran);

    return 0;
    
}
