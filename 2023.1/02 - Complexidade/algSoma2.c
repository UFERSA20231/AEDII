float horner(float x, int n) {
    int i=0, soma = 0;
    for (i = 0; i <= n; i++) {
        soma = soma * x + 1;
    }
    return soma;
}