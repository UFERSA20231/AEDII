int fib2(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int x2 = 1, x1 = 0;
    int i = n, x = 1;
    while (i > 1) {
        x = x1 + x2;
        x1 = x2;
        x2 = x;
        i = i - 1;
    }
    return x;
}