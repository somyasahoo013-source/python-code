#include<stdio.h>
// sum of digits of number
int sum(int n){
    if(n==0){
        return 0;
    }
   int sumo=n%10+sum(n/10);
   return sumo;
}

int main(){
int n;
scanf("%d",&n);
    printf("sum is : %d",sum(n));

    return 0;
}