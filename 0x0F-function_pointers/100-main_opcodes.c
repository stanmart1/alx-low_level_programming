#include <stdio.h>
#include <stdlib.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    int num_bytes = atoi(argv[1]);
    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }
    int i;
    for (i = 0; i < num_bytes; i++) {
        printf("%02x", *((unsigned char*)main + i));
    }
    printf("\n");
    return 0;
}
