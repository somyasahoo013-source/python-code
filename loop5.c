#include<stdio.h>

int main(){
    int a=9875;
    while(a>9){
        int sum=0;
        while(a!=0){
            sum=sum+a%10;
            a=a/10;
       
        }
        a=sum;
    }
    printf("%d",a);
    return 0;
}