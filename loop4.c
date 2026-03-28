#include<stdio.h>

int main(){
 /*Print all numbers between 1 and 1000 that are special numbers.
A special number is a number whose sum of the factorials of its digits is equal to the number itself.*/
int a=1,orginal,b,c=1,sum=0;
        
 while(a<=1000){
    orginal=a;
    int s=a;
    sum=0;
while(s!=0){
    b=s%10;
    c=1;
    for(int i=b;i>0;i--){
 c=c*i;
    }
    sum=sum+c;
    s=s/10;

if(sum==orginal){
    printf("%d\n",orginal);
}
a++;
}
}
    return 0;
}