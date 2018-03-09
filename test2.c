int putchar(int c);
int printf(char* x,...);

int z;
void main(void) {
    int a, b;
    a = 2 + 3;
    b = a;
    z = 48;
    putchar(b+z);

    a = 400 - 392;
    b = a;
    putchar(b+z);

    b = 0;

    putchar(10);

    while(b <= a) {
        printf("%d\n", b);
        b = b + 1; 
        break;
    }

    for(b = 13; b >= 0; b = b -1) {
        printf("%d\n", b);
        printf("for loop\n");
    }
}
