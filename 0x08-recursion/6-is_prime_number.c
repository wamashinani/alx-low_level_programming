#include "main.h"
/**
 * is_prime_number -return the 1 if n is prime
 * @n:number to be checked
 *
 */
int is_prime_number(int n)
{
        int start = n/2;
	if (n <= 1)
		reurn(0);
	return(is_prime(n, start));

}
/**
 * is_prime - returns the 1 if n is prime
 * @n: number to be checked
 * @start: number to start checking
 */
int is_prime(int n, int start)
{
	if (start <= 1)
	        return (1)
	else if (n % start == 0)
	        return (0)
	return (is_prime(n, stary -1));
}
