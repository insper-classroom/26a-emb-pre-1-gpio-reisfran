
    #include <stdlib.h>

    #include <stdio.h>

    #define NUM_ELEMENTS 5

    int multiplyNumbers(int x, int y) {
        return x * y;
    }

    int main(void) {
        int a = 2, b = 5;
        int result = multiplyNumbers(a, b);

        int arr[NUM_ELEMENTS];
        for (int i = 0; i < NUM_ELEMENTS; i++) {
            arr[i] = i;
        }

        printf("Resultado: %d\n", result);

        for (int i = 0; i < NUM_ELEMENTS; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
    }