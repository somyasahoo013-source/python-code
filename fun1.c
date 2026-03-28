#include<stdio.h>
#include<math.h>
int max(int a,int b);

int main(){
int a,b;
printf("enter first number");
scanf("%d",&a);
printf("\n enter second number");
scanf("%d",&b);
int c=max(a,b);
printf("\n larger number is :  %d",c);
double d = pow(c,2);
printf("\n square of larger number is :  %0.1f",d);


return 0;
}

int max(int a, int b){
    int c;
    if(a>b){
     c=a;
    }else{
        c=b;
    }
   return c;   
}
