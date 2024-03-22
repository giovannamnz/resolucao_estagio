#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || 
           isPerfectSquare(5 * n * n - 4);
}

int main() {
    int num = 1597; //pode ser mudado

    if (isFibonacci(num))
        printf("%d pertence a sequencia de Fibonacci.\n", num);
    else
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);

    return 0;
}