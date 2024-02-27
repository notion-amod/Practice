#include <stdio.h>
int main() {    

    int number1, number2, substraction;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    substraction = number1 - number2;      
    
    printf("%d + %d = %d", number1, number2, substraction);
    return 0;
}

