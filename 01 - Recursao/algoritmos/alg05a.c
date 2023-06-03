int fat2(int n) {
    int i = n, res = 1;
    while (i > 1) {
        res = res * i--;
    }
    return res;
}