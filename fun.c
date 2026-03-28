#include<stdio.h>
#include<conio.h>
int sqarea(int a);
int  ciarea(int r);
int main(){
    printf("enter the square side ");
    int a,r;
    scanf("%d",&a);
    printf("\narea is : %d",sqarea(a));
    printf("\nenter the circle radius");
    scanf("%d",&r);
    printf("\narea of the circle is: %d ",ciarea(r));
return 0;
}
int sqarea(int a){
   return a*a;
}
int ciarea(int r)
{
    return 3.14 * r * r;
}