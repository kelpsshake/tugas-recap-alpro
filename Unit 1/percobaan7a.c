#include <stdio.h>

char iniChar = 'Romi';

int main(){
    printf("%c", iniChar);
    return 0;
}

//ini ouput nya cuman huruf terakhir nya aja 'i'
//Itu karena jika kita mencoba untuk menyimpan lebih dari satu karakter menggunakan 
//char maka hanya huruf terakhirnya saja yang tersimpan.