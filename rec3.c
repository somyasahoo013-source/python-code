 #include<stdio.h>
 //sum of natural numbers till n
int sum(int n){
    if(n==1){
        return 1;
    }
    int Nm1=sum(n-1);
    int N=Nm1+n;
    return N;
}
  
int main(){
 printf("sum is : %d",sum(4));
}

   