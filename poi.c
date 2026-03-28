#include<stdio.h>

int main(){
    int a=5,b=6;
    int *pon=&a;
    int *pon2=&b;
    int t=*pon;
    *pon=*pon2;
    *pon2=t;
    int sum=*pon+(*pon2);
    printf("%d",sum);
     
return 0;
}