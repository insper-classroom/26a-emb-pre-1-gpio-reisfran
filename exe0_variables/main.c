#include "stdio.h"

int a; // var global

void foo(void) {
    a = a + 1; // acessa variavel global
}

void main(void) {
    while (1) {
        a = 5;
        
        int b = 0;
        foo();
        
        if (a > 5) {
            b = 1;
        }
    }
}
