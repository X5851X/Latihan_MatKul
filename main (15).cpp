#include <stdio.h>

int main()
{
    int pertama, kedua, *p, *q, sum;
    printf("Masukkan angka untuk di kurangkan\n");
    scanf("%d%d", &pertama, &kedua);
    p=&pertama;
    q=&kedua;
    sum=*p+*q;
    printf("Hasil pengurangan: %d", sum);
    return 0;
}