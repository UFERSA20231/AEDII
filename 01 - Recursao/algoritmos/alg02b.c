void nonTail(int i) {
    if (i > 0) {
        nonTail(i - 1);
        printf("%d", i);
    }
}