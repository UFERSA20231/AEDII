void tail(int i) {
    if (i > 0) {
        printf("%d", i);
        tail(i - 1);
    }
}