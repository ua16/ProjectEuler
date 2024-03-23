#include <stdio.h>

int main(void) { 
    int current_fibonacci_number = 2; 
    int last_fibonacci_number = 1;
    int sum = 0;

    while (current_fibonacci_number < 4000000){
        if (current_fibonacci_number % 2 == 0) { 

            sum += current_fibonacci_number;


        };
        current_fibonacci_number = current_fibonacci_number + last_fibonacci_number;
        /* Move the value down */
        last_fibonacci_number = current_fibonacci_number - last_fibonacci_number;

    };

    printf("%d \n", sum);
}
