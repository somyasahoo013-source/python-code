/*
// sum of n number
#include<stdio.h>
int sum(int n);
int main(){
    int n=4;
    printf("%d",sum(n));

    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
 return n+sum(n-1);
}
 */

 /*
 // hello world
#include<stdio.h>
 
void print(int n);

int main(){
print(5);
    return 0;
}

void print(int n){
if(n==-2){
    return;
}
    printf("hello world \n");
    print(n-1);
}

*/

/*
//factorial
#include<stdio.h>
int fact(int n);

int main(){


    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
    */

 /*
    //coun digits of number

    #include<stdio.h>
int count(int n);
int main(){
 printf("%d",count(1534));
 return 0;

}

int count(int n){
    if(n==0){
        return 0;
    }
    return 1+count(n/10);
}
*/


/*

//sum of digits
#include<stdio.h>

int sum(int n);

int main(){
printf("%d",sum(342));
    return 0;
}

int sum(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum(n/10);
}
    */

#include<stdio.h>

void print(int arr[],int n);

int main(){
    int n;
    printf("enter the array size");
    scanf("%d",&n);
    int arr[n];
    print(arr,n);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

     
    return 0;
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("enter %d th element",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
}
printf("\n");
}