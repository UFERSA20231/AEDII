float soma(float x, int n) {
    int soma = 0;
    int i = 0, j=0;
    for (i = 0; i <= n; i++) {
        int prod = 1;
        for (j = 0; j < i; j++)
            prod = prod * x;
        soma + soma + prod;
    }
    return soma;
}
