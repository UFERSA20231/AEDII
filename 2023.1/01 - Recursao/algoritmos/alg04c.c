int soma(int n) {
    if (n < 2) {
        return n;
    } else {
        return n +
        soma(n - 1);
    }
}