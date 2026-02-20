#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 5

void multiplyNumbers(int x, int y) {
    int product = x * y;
}

int main(void) {
    int a= 2, b = 5; //uninitvar, legacyUninitvar
    multiplyNumbers(a, b);

    int arr[NUM_ELEMENTS];
    for(int i = 0; i < NUM_ELEMENTS; i++) { //arrayIndexOutOfBounds
        arr[i] = i;
    }

    return 0;
}
