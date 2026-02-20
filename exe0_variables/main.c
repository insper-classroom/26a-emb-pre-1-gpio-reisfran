#include "stdio.h"

static void foo(int *p) {
    *p = *p + 1; 
}

int main(void) {
    while (1) {
        int a = 5;
        
        int b = 0;
        foo(&a);
        
        if (a > 5) {
            b = 1;
        }
        
        printf("%d",b);
    }


    return 0;
}
