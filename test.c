/* #include<stdio.h>

// intersection of two aray

int main(){
    int arr1[]={3,8,55,6,3,2,6};
    int arr2[]={8,3,77,99,6};
    int arr3[100];
    int k=0;
    for(int i=0;i<7;i++){
        int count=0;
        for(int j=0;j<5;j++){
            if(arr1[i] == arr2[j]){
                arr3[k]=arr1[i];
                k++;
                count++;
            }
            if(count==1){
                break;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\t",arr3[i]);
    }

     
    return 0;
}

 */


#include<stdio.h>
#include<string.h>

int mul (int a);
int main(){
  int a ;
  printf("enter the number");
  scanf("%d",&a);
  printf(" fac = %d", mul(a));
  return 0 ;
}
int mul(int a ){
  int fac = 1;
  if(a==1){
    return 1;
  }
   fac = a * mul(a-1);
   return fac ;
}



 