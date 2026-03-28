/*#include<stdio.h>
//pallindrum
int palli(int n,int rev){
    if(n==0){
        return rev;
    }
    int digit=n%10;
    rev=rev*10+digit;
    return palli(n/10,rev);
}
void ispallimdrum(int n){
    if(n==palli(n,0)){
        printf("pallindrum");
    }else{
        printf("not");
    }
}

int main(){
    int a=101;
     ispallimdrum(1271);
}
     */

     /*

#include<stdio.h>

void num(int a, int b);

int main(){
    int x=5;int y=1;
num(x,y);
}

void num(int a, int b){
    if(b>a){
        return;
    }
    printf("%d",b);
    num(a,b+1);
}
    */

    /*
#include<stdio.h>

void num(int a);

int main(){
num(5);
    return 0;
}

void num(int a){
    if(a==0){
        return;
    }
    printf("%d\n",a);
    num(a-1);
}
    */

    /*
#include<stdio.h>

int count(int a);

int main(){
printf("%d",count(876));
    return 0;
}

int count(int a){
    if(a==0){
        return 0;
    }
    return 1+count(a/10);
}
    */

/* #include<stdio.h>

void count(int a);

int main(){

count(7);

    return 0;
}

void count(int a){
    if(a==0){
        printf("even");
        return;
    }
    if(a==1){
        printf("odd");
        return;
    }
     count(a-2);
} */

/*
//print number between a to b
#include<stdio.h>

void power(int a, int b);
int main(){

power(3,8);

    return 0;
}

void power(int a,int b){
    if(a>b){
        return;
    }
     printf("%d",a);
     power(a+1,b);
}




 */

/* #include<stdio.h>

int count(int a);
int ans(int a);

int main(){
    printf("%d",ans(9875));

    return 0;
}

int ans(int a) {
    if (a < 10){
         return a;        // already single digit
    }
    int sum = count(a);          // sum of digits once
    return ans(sum);             // reduce again until single digit
}



int count(int a){
    if(a==0){
        return 0;
    }
    int sum;
    sum = a%10+count(a/10);
    return sum;
}

  */

/*

// reverse number

#include<stdio.h>

int pali(int a,int rev);

int main(){

    return 0;
}

int pali(int a,int rev){
    if(a==0){
        return rev;
    }

     return (a/10, rev*10+a%10);
    
} */

/*
// all factors divisible by the input
 #include<stdio.h>

void fact(int a, int b);

int main(){

    fact(12,1);

    return 0;
}

void fact(int a, int b){
    if(b>a){
        return;
    }
    if(a%b==0){
        printf("%d\n",b);
    }
    return fact(a,b+1);
} */