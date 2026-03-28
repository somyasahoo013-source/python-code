/* #include<stdio.h>

void work(int a,int b,int *sum, int *mul);

int main(){
int sum;
int mul;
work(2,3,&sum,&mul);
 printf("%d\n",sum);
    printf("%d",mul);
    return 0;
}

void work(int a,int b,int *sum, int *mul){
    *sum=a+b;
    *mul=a*b;
    printf("%d\n",*sum);
    printf("%d",*mul);
} */

#include<stdio.h>

void print(int arr[],int *n);

int main(){
    int n;
    printf("enter the array size");
    scanf("%d",&n);
    int arr[n];
    print(arr,&n);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

     
    return 0;
}

void print(int arr[],int *n){
    for(int i=0;i<*n;i++){
        printf("enter %d th element",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<*n;i++){
        printf("%d\t",arr[i]);
}
printf("\n");
}