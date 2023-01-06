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
  // Check number of arguments
  if (argc != 2) {
    printf("Error\n");
    return 1;
  }

  // Parse argument as integer
  int cents = atoi(argv[1]);

  // Check if argument is negative
  if (cents < 0) {
    printf("0\n");
    return 0;
  }

  // Initialize counter for number of coins
  int numCoins = 0;

  // Use as many 25 cent coins as possible
  numCoins += cents / 25;
  cents %= 25;

  // Use as many 10 cent coins as possible
  numCoins += cents / 10;
  cents %= 10;

  // Use as many 5 cent coins as possible
  numCoins += cents / 5;
  cents %= 5;

  // Use as many 2 cent coins as possible
  numCoins += cents / 2;
  cents %= 2;

  // Use as many 1 cent coins as possible
  numCoins += cents;

  // Print number of coins
  printf("%d\n", numCoins);
  return 0;
}
