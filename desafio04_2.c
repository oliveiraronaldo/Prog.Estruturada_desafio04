#include <stdio.h>

int main() {
    int sum = 0;
   
    for (int i = 1; i < 1000; i++) {
        
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i; 
        }
    }
    
    printf("A soma de todos os múltiplos de 3 ou 5 abaixo de 1000 é: %d\n", sum);
    
    return 0;
}
