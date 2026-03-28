 #include<stdio.h>
int main(){
    printf("enter the number");
    int n,count=0;
    scanf("%d",&n);
    int x;
    for(x=1;x<=n;x++){
    int sum=0,sum2=0;

    for(int i=1;i<=x;i++){
        sum=sum+i;
    }
    for(int i=x;i<=n;i++){
        sum2=sum2+i;
    }
    
    if(sum==sum2){
        count=count+1;
        break;
    }
    }
 if(count == 1){
    printf("%d",x);
 }else{
    printf("wrong");
 }


    return 0;
}