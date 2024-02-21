#include<stdio.h>

int main(void){
    int a,b,sum,difference;
    printf("Enter two integer: \n");
    scanf("%d%d",&a,&b);
    sum = a+b;
    difference = a-b;
    printf("a = %d\nb=%d\nsum =%d\ndifference=%d",a,b,sum,difference);
    return 0;
}
/*
OUTPUT:
Enter two integer: 
10
20
a = 10
b=20
sum =30
difference=-10
*/
