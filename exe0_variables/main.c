#include "stdio.h"

void foo(int x) {
    x = x + 1; // acessa variavel global
}

void main(void) {
    while (1) {
        int a = 5;
        
        int b = 0;
        foo(a);
        
        if (a > 5) {
            b = 1;
        }
    }
}
