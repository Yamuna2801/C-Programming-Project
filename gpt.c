#include <stdio.h>

int main() {
    int i, limit = 5;

    for (i = 0; i < limit * limit; i++) {
        // New line after every 'limit' characters
        if (i % limit == 0) {
            if ((i / limit) % 2 == 1)  // for odd rows, print initial spaces
                printf("   ");
        }

        printf("*");

        if ((i + 1) % limit == 0)
            printf("\n");
        else
            printf("     ");
    }
    getchar();
    return 0;
}
