#include<stdio.h>

int mult(int a,int b);
void display(int out);

int main(){
    int a,b;
printf("enter the first number :");
scanf("%d",&a);
printf("enter second number :");
scanf("%d",&b);
int c = mult(a,b);
display(c);
    return 0;
}

int mult(int a,int b){
    return a*b;
}

void display( int out){
    printf("the output is : %d",out);
}