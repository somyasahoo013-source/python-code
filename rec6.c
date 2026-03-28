#include<stdio.h>
//reverse a number

int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
int digit=n%10;
rev=rev*10+digit;
    return reverse(n/10,rev);
}

int main(){
printf("%d",reverse(345,0));
    return 0;
}