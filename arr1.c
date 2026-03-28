#include<stdio.h>
//reverse an array
int main(){
    int num[10];
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
   for(int i=0;i<10;i++){
        printf("%d\t",num[i]);
    }
    printf("\n");
    int num2[10];
    for(int i=0;i<10;i++){
        num2[i]=num[9-i];
         
        }
        for(int i=0;i<10;i++){
        printf("%d\t",num2[i]);
    }

    
    return 0;
}