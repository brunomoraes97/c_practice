#include <stdio.h>

// Prototype
void meow(int n);

// Entrypoint
int main(void) {
    meow(50);
}

// Function we're going to call
void meow(int n) {
    for (int i = 0; i < n; i++) {
        printf("Meow\n");
    }
}