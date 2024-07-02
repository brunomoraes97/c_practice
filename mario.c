#include <stdio.h>
#include <cs50.h>

int main(void) {

    int j;

    do {
        j = get_int("Size: ");
    } while (j < 1);

    for (int n = 0; n < j; n++) {
        for (int i = 0; i < j; i++) {
            printf("#");
        }
        printf("\n");
    }
}