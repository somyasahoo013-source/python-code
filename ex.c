#include<stdio.h>
int main(){
    
    printf("enter the number of array \n");
int b;
scanf("%d",&b);
int ar[b];
int a,c,d,e,f;
int x=0;
a=0;
while(a<b){
    printf("enter the %d number =",a);
scanf("%d",&ar[a]);
a++;
}
printf("enter the target");
scanf("%d",&c);
d=0;
while(d<b){
    for(x=0;x<b;x++){

    
     if(ar[x]*2==c){
        e=1;
        break;
     }else{
        e=0;
        break;
     }
    }
     f=0;
     while(e<b){
        if(ar[d]+ar[e]==c){
            printf("The target is found %d + %d ",ar[d],ar[e]);
            f++;
            break;
        }
        e++;
     }
     if(f==1){
     break;
    }
     d++;
}
if(f==0){
    printf("the combination is not found ");
}

return 0;
}