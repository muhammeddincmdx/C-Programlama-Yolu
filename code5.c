#include<stdio.h>

int main(void){
    long int a,b;
    long int x,y,kalan;
    printf("Ortak en buyuk bolen bulma\n");
    printf(" iki adet sayi giriniz: \n");
    scanf("%ld%ld",&a,&b);
    if(a<b){
        x= a;
        y = b;
    }else{
        x=b;
        y=a;
    }
    kalan= x;
    while(kalan!=0){
        kalan = y%x;
        y=x;
        x=kalan;
    }
    printf("EBOB(%ld,%ld)=%ld\n",a,b,y);
    return 0;
}
/*
OUTPUT:
Ortak en buyuk bolen bulma
 iki adet sayi giriniz: 
45465456
45
EBOB(45465456,45)=3
*/
