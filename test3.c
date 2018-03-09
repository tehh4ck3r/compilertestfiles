int printf(char* x, ...);

int main(void) {
    int x;
    x = -1;

    printf("%d\n", x);

    for (x = 0; x < 10; x = x + 1) {
        if (x == 4)
            printf("%d\n", x);
        else if (x == 5) {
            printf("%d\n", x);
            break;
        }
    }

    printf("%d\n", x);
}
