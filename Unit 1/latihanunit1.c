#include <stdio.h>

int s1, t1;
int v1, t2;
int s2, v2;

int main(){
    printf("masukkan jarak dan waktu: \n");
    scanf("%d%d", &s1, &t1);

    printf("masukkan kecepatan dan waktu: \n");
    scanf("%d%d", &v1, &t2);

    printf("masukkan jarak dan kecepatan: \n");
    scanf("%d%d", &s2, &v2);

    float V = (float) s1/t1;
    float S = (float) v1*t2;
    float T = (float) s2/v2;

    printf("kecepatannya adalah %.2f\n", V);
    printf("jaraknya adalah %.2f\n", S);
    printf("waktunya adalah %.2f\n", T);
}