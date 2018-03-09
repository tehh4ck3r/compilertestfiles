int printf(char* x, ...);

int foo(int bar) {
    int y;
    y = bar;
    return y;
}

char x;

int main(void) {
    char y;
    char* z;
    char a, b, c;

    x = 18;
    y = 9;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    x = y;
    y = x;
    
    z = "Hello World";

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    y = foo(42);

    printf("y = %d\n", y); 

    printf("z = %s\n", z);

    a = 3;
    b = 6;
    printf("mul %d\n", b*a);
    printf("div %d\n", b/a);
    printf("mod %d\n", b%a);

    printf("neg %d\n", -a);

    printf("not %d\n", !a);
    printf("not not %d\n", !!a);

    a = a * b + x / 9;
    printf("should be 19 %d\n", a);

    printf("should be 0 %d\n", a < -2);
    printf("should be 1 %d\n", a > 4);
    printf("should be 1 %d\n", a == 19);
    printf("should be 0 %d\n", a != 19);
    printf("should be 1 %d\n", a <= 19);
    printf("should be 0 %d\n", a >= 20);

    printf("should be 1 %d\n", a && b && y && *z);
    c = 0;
    printf("should be 0 %d\n", a && b && c && *z);
    
    printf("should be 1 %d\n", a && b || y && *z);
    printf("should be 0 %d\n", c || !a);
}
