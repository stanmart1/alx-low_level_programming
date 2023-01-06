#include <stdio.h>
#include <stdlib.h>

/**
  * main -  prints the minimum number of coins to make change
  * for an amount of money
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[]) {
// Check the number of arguments passed
if (argc != 2) {
printf("Error\n");
return 1;
}

// Convert the string argument to an integer
int cents = atoi(argv[1]);

// Check if the amount is negative
if (cents < 0) {
printf("0\n");
return 0;
}

// Initialize the count of coins to 0
int coin_count = 0;

// While there are still cents to be returned,
// use the largest coin possible
while (cents > 0) {
if (cents >= 25) {
cents -= 25;
coin_count++;
} else if (cents >= 10) {
cents -= 10;
coin_count++;
} else if (cents >= 5) {
cents -= 5;
coin_count++;
} else if (cents >= 2) {
cents -= 2;
coin_count++;
} else {
cents -= 1;
coin_count++;
}
}

// Print the minimum number of coins
printf("%d\n", coin_count);

return 0;
}
