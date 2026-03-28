#include<stdio.h>
//hello world 5 times


void printHW(int a);
int main(){
printHW(5);
    return 0;
}

void printHW(int a){
    if(a==0){
        return;
    }
    printf("hello world %d\n",a);
    printHW(a-1);

}