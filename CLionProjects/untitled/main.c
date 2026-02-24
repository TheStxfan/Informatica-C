#include <stdio.h>

int fatt(int n) {
    int i, f=1;
    for (i=2; i <= n; i++) {
        f *= i;
        return f;
    }
}

int fattRic(int n) {
    printf("fatt ric (%d)\n", n);
    return n == 0 ? 1 : (n * fattRic(n-1));
}

int fibo(int n) {
    int i, a=1, b=1, t;
    for (i=0; i<n; i++) {
        t=a+b;
        a=b;
        b=t;
    }
    return a;
}

int fiboRic(int n) {
    printf("fiboRic(%d)\n", n);
    if (n<=1)
        return 1;
    return fiboRic(n-1) + fiboRic(n-2);
}

void main() {
    int x;
    scanf("%d", &x);
    printf("fibo(%d), x");
    printf("fibo(%d)=%d\n", x, fiboRic(x));
}