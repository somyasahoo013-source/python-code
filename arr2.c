#include<stdio.h>
int main(){
    // check of two number as sum 
printf("enter the number of array \n");
int b;
scanf("%d",&b);
int ar[b];
int a,c,d,e,f;
a=0;
while(a<b){
    printf("enter the %d number =",a);
scanf("%d",&ar[a]);
a++;
}
f=0;
printf("enter the target");
scanf("%d",&c);
for(int i=0;i<b;i++){
    
    for(int j=0;j<b;j++){
        if(i==j){
            continue;
        }
        if(ar[i]+ar[j]==c){
            printf("target is found %d + %d = %d ",ar[i],ar[j],c);
            f=1;

            break;
        }
        
    }
    if(f==1){
            break;
        }
}
if(f==0){
    printf("nahi mila madarchod tu gand mara");
}


return 0;
}