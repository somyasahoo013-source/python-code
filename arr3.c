/* #include<stdio.h>
// count the enter no. is how many times present in the array
int main(){
    int arr[5],x,count=0;
    printf("enter the number :");
    scanf("%d",&x);
    for(int i=0;i<5;i++){
        printf("enter the %d th number :",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("%d apper in array = %d",x,count);


    return 0;
} */

/* #include<stdio.h>
//copy one array to another
int main(){
    int arr[5],arr2[5];
    for(int i=0;i<5;i++){
        printf("enter %d th element",i);
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<5;i++){
         arr2[i]=arr[i];
    }
    for(int i=0;i<5;i++){
        printf("%d\t",arr2[i]);
    }



    return 0;
} */


/* 
//reverse an array without reverse array
#include<stdio.h>

int main(){
    int arr[5]={2,5,6,8,9};
    for(int i=0;i<(5/2);i++){
        int t=arr[5-i-1];
        arr[5-i-1]=arr[i];
        arr[i]=t;

    }
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
} */

/* #include<stdio.h>
//find maximun and minimum value of array
int main(){
     int arr[5]={2,3,6,8,9};
     int max,min;
     max=arr[0];
     min=arr[0];
     for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

       
     }
      printf("max is : %d min is : %d",max,min);
    return 0;
} */

/* #include<stdio.h>
//second largest no of array
int main(){
    int arr[5]={2,3,6,8,9};
     int max,min;
     max=arr[0];
     int second=-999999;
     for(int i=0;i<5;i++){
         if(arr[i]>max){
            second=max;
            max=arr[i];
         }
     }
     printf("second largest is : %d",second);

    return 0;
} */

/* #include<stdio.h>
//print the unique numbers also include the repeated no
int main(){
    int n;
    
    printf("enter array size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d th number :",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++;

            } 
        }
        if(count==0){
            printf("%d\t",arr[i]);
        }
    }

    return 0;
} */


 /* #include<stdio.h>
//print the unique numbers who haven't occur more then once
int main(){
    int n;
    
    printf("enter array size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d th number :",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;

            } 
        }
        if(count==1){
            printf("%d\t",arr[i]);
        }
    }

    return 0;
}  */

/* #include<stdio.h>
#include<math.h>
//subhankar acendind order
int main(){
  int a[5]= {5,4,3,43,89};
  int d;
  int b = 0;
  while(b<5){
    int c = 0;
    while(c<5){
        if(a[c]>a[b]){
            d=a[c];
            a[c]=a[b];
            a[b]=d;
            
        }
        c++;
    }
    b++;
  }
  printf("array after sorting");
  int e =0;
  while(e<5){
    printf("  %d,",a[e]);
    e++;
  }
} */

/* #include<stdio.h>
// arrange in ascending order in for loop
int main(){
    int arr[5]={7,9,3,5,6},t;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[j]>arr[i]){
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    
    }

    return 0;
} */

/* #include<stdio.h>
//merege two array in third array
int main(){
    int x,y;
    printf("enter the size of first array");
    scanf("%d",&x);
    int arr1[x];
    for(int i=0;i<x;i++){
        printf("enter %d th element",i);
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of second array");
    scanf("%d",&y);
    int arr2[y];
    for(int i=0;i<y;i++){
        printf("enter %d th element",i);
        scanf("%d",&arr2[i]);
    }
    int arr3[x+y];
    for(int i=0;i<x;i++){
        arr3[i]=arr1[i];
    }
    for(int i=x;i<(x+y);i++){
        arr3[i]=arr2[i-x];
    }
    for(int i=0;i<(x+y);i++){
        printf("%d\t",arr3[i]);
    }

    return 0;
} */

/* #include<stdio.h>
//Insert Element at Given Position
int main(){
    int x,pos,n;
    printf("enter the array size");
    scanf("%d",&n);
    int arr[1999];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the index number of element");
    scanf("%d",&pos);
    printf("enter the element");
    scanf("%d",&x);
    for(int i=n;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=x;
    n++;
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
} */

/* #include<stdio.h>
//delete an element from a given index
int main(){
    int x,pos,n;
    printf("enter the array size");
    scanf("%d",&n);
    int arr[1999];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the index number of element");
    scanf("%d",&pos);
    printf("enter the element");
    scanf("%d",&x);
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
} 

 */

/* #include<stdio.h>
// print frequency of number

int main(){
    int x;
    printf("enter array size : ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<5;i++){
        printf("enter %d th element :");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        int count=0;
        int count2=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==0){
         for(int k=0;k<5;k++){
            if(arr[i]==arr[k]){
                count2++;
            }

         }
        }
        if(count==0){
        printf("%d frequency = %d \n",arr[i],count2);
        }
    }

    return 0;
} */