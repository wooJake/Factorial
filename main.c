#include <stdio.h>

unsigned long long Factorial(int n){
    
    if(n == 1){
        
        return n;
    }
    return n * Factorial(n - 1);
}
int main(){
    
    unsigned long long fact = 0;
    fact = Factorial(20);
    
    printf("%llu", fact);

    return 0;
}
