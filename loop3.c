#include<stdio.h>
/*special number is a number whose sum of the factorials of its digits is equal to the number itself.

✅ Example:
145 → 1! + 4! + 5! = 1 + 24 + 120 = 145 → ✅ Special number
*/int main(){
printf("enter the number");
int a,orginal,b,c=1,sum=0;
scanf("%d",&a);
orginal=a;
while(a!=0){
    b=a%10;
    c=1;
    for(int i=b;i>0;i--){
 c=c*i;
    }
    sum=sum+c;
    a=a/10;
}
if(sum==orginal){
    printf("special number");
}else{
    printf("not");
}
    return 0;
}