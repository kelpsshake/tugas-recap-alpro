#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n"); //slash t itu untuk spasi
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) { //manggil array nya dari 0 sampe 2
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

//jadi disini kita bikin definisi untuk max person 3 dan name length 20
//kita bikin array berupa char dgn max person dan name length
//membuat int untuk umur setiap nama