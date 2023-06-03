int mdc(int a, int b) {
    int r = a;
    if (a < b) {
        r = mdc(a, b - a);
    } else if (a > b) {
        r =  mdc(a - b, a);
    }
    return r;
}
