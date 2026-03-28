#include<stdio.h>
//factorial
int fac(int a);

int main(){
printf("factorial is : %d",fac(4));
    return 0;
}

int fac(int a){
    if(a==0){
        return 1;
    }
int Nm1=fac(a-1);
int N=fac(a-1)*a;
return N;
}