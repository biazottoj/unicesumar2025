#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptr = malloc(100); // Allocates 100 bytes of memory

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // The allocated memory is generic; you must cast it before dereferencing
    int *intPtr = (int *)ptr;
    *intPtr = 42; // Now it's treated as an int

    printf("Value: %d\n", *intPtr);

    free(ptr); // Free the allocated memory

    return 0;
}
