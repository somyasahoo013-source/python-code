 #include<stdio.h>

int main(){
    int n;
    int sum = 0;
    
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    // Check each number from 2 to n
    for(int i = 2; i <= n; i++){
        int isPrime = 1; // Assume i is prime
        
        // Check if i has any divisors other than 1 and itself
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = 0; // Not prime
                break;
            }
        }
        
        // If prime, add to sum
        if(isPrime){
            sum += i;
        }
    }
    
    printf("Sum of prime numbers from 1 to %d is: %d\n", n, sum);
    
    return 0;
}