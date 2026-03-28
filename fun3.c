#include<stdio.h>

int maxofthree(int a,int b,int c);
void display(int output);
int main(){
    int a,b,c,d;
    printf("enter the three numbers :");
    scanf("%d",&a);
     scanf("%d",&b);
      scanf("%d",&c);

      d = maxofthree(a,b,c);
      display(d);

    return 0;
}
int maxofthree(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }else if(b>c && b>a){
         return b;
    }else{
        return c;
    }
}

void display(int output){
    printf("the largest number is : %d",output);
}