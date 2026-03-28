#include<stdio.h>

int main(){
    int n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Pattern 1: Right-angled triangle (left aligned)
    printf("\nPattern 1: Left-aligned\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}