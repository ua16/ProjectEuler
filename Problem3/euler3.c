#include <stdio.h>
#include <math.h>

int checkPrime(double x) { 
    /* Check if x is a prime */
    double root = sqrt(x); 

    for (double n = 2; n <= root; n += 1) {
        if (fmod(x, n) == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    double number = 600851475143;  
    double stop_point = number/2;
    double largest_prime_factor = 0;

    double i; 
    printf("%f \n", number);

    for (i = 3; i <= number; i += 2) {
        /* printf("%f ", i); */
        /* printf("%f \n", fmod(number, i)); */
        if (fmod(number, i) == 0 && checkPrime(i) == 1) { 
            largest_prime_factor = i;

            /* You can do this next step because of how numbers work
             * see the fundamental theory of arithmethic */
            number = number / largest_prime_factor;

            printf("Found factor %f \n", i);
        }

        /* if (fmod(number, 10000) == 0) { */ 
        
    }

    printf("%f \n", largest_prime_factor);

    return 0;
}

/* 600851475143 */
