#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    a=b=c=0;
    printf("İlk değişkeni giriniz...\n");
    scanf("%d", &a);
    printf("İkinci değişkeni giriniz...\n");
    scanf("%d", &b);
    printf("***************\n");
    printf("Toplamın değeri:  %d \n", a+b);
    c=a+b;
    printf("Toplamın değeri: %d \n", c);//toplamın başka bir ifade şekli
    c=c/2;
    printf("a ile b'nin tam sayı cinsinden aritmetik ortalaması:  %d \n", c);// iki sayının aritmetik ortalaması.
    return 0;
}
