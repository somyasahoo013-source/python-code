#include <stdio.h>

 
void special();

int main() {  
    //special();
    int a;
    printf("%d",&a);
    return 0;
}




 
void special() {
    int a = 1, original, b, c, sum, i, s;

    printf("Special numbers between 1 and 1000 are:\n");

    while (a <= 1000) {
        original = a;
        s = a;
        sum = 0;

         
        while (s != 0) {
            b = s % 10;
            c = 1;

            
            for (i = b; i > 0; i--) {
                c = c * i;
            }

            sum = sum + c;
            s = s / 10;
        }

        if (sum == original) {
            printf("%d\n", original);
        }

        a++;  
    }
}
