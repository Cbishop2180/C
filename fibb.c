#include <stdio.h>
#include <time.h>

int main(void) {
    float fib_n = 1;
    float fib_n1 = 2;
    float hold;
    float time = 0;
    float fib_list[3] = {fib_n, fib_n1, hold};
    time = start();
    do {
    hold = fib_n1;
    fib_n1 += fib_n;
    fib_n = hold;
    }
    while (time < 1);
    printf("After one second: %f", fib_n1);
    }
    