int printf(char* fmt, ...);
void* malloc(int size);
void free(void* ptr);

void testAdd(void)
{
    int x, y;
    x = 1;
    y = 2;
    printf("%d\n", x + y);
}

void testSubtract(void)
{
    int x, y;
    x = 2;
    y = 1;
    printf("%d\n", x - y);
}

void testMultiply(void)
{
    int x, y;
    x = 2;
    y = 3;
    printf("%d\n", x * y);
}

void testDivide(void)
{
    int x, y;
    x = 3;
    y = 2;
    printf("%d\n", x / y);
}

void testRemainder(void)
{
    int x, y;
    x = 3;
    y = 2;
    printf("%d\n", x % y);
}

void testLessThan(void)
{
    printf("%d\n", 1 < 2);
}

void testGreaterThan(void)
{
    printf("%d\n", 1 > 2);
}

void testLessEqual(void)
{
    printf("%d%d\n", 1 <= 1, 1 <= 2);
}

void testGreaterEqual(void)
{
    printf("%d%d\n", 1 >= 1, 1 >= 2);
}

void testEqual(void)
{
    printf("%d%d\n", 1 == 1, 1 == 2);
}

void testNotEqual(void)
{
    printf("%d%d\n", 1 != 1, 1 != 2);
}

void testNegate(void)
{
    printf("%d%d\n", -1, -(1 - 2));
}

void testNot(void)
{
    printf("%d%d\n", !0, !1);
}

void testLogicalAnd(void)
{
    printf("%d%d%d%d\n", 0 && 0, 0 && 1, 1 && 0, 1 && 1);
}

void testLogicalOr(void)
{
    printf("%d%d%d%d\n", 0 || 0, 0 || 1, 1 || 0, 1 || 1);
}

void testIf(void)
{
    /* test then statement */
    if (1)
    {
        printf("good ");
    }
    else
    {
        printf("bad ");
    }

    /* test else statement */
    if (0)
    {
        printf("bad\n");
    }
    else
    {
        printf("good\n");
    }

    /* test nesting */
    if (1)
    {
        if (0)
        {
            printf("bad\n");
        }
        else
        {
            printf("good\n");
        }
    }
}

void testWhile(void)
{
    int x;
    x = 1;
    while (x > 0)
    {
        printf("%d\n", x);
        x = x - 1;
    }

    printf("this should not loop infinitely...");
    while (1)
    {
        break;
    }
    printf("OK\n");

    printf("neither should this...");
    while (1)
    {
        while (1)
        {
            break;
        }
        break;
    }
    printf("OK\n");
}

void testFor(void)
{
    int i;
    for (i = 0; i < 1; i = i + 1)
    {
        printf("%d\n", i);
    }

    printf("this should not loop infinitely...");
    for (i = 0; 1; i = i + 1)
    {
        break;
    }
    printf("OK\n");

    printf("neither should this...");
    for (i = 0; 1; i = i + 1)
    {
        for (i = 0; 1; i = i + 1)
        {
            break;
        }
        break;
    }
    printf("OK\n");
}

int testReturn0(void)
{
    return 0;
}

char testReturn1(void)
{
    return 'a';
}

int testReturn2(void)
{
    int x;
    x = 0;
    return x;
}

int testReturn3(void)
{
    if (1)
    {
        return 0;
    }

    return 1;
}

int testReturn4(void)
{
    while (1)
    {
        return 0;
    }

    return 1;
}

int testReturn5(void)
{
    while (1)
    {
        while (1)
        {
            return 0;
        }
        return 1;
    }
    return 2;
}

int testReturn6(void)
{
    int i;
    for (i = 0; i < 1; i = i + 1)
    {
        return i;
    }
}

void testMalloc(void)
{
    int i;
    int* arr;

    arr = malloc(10 * sizeof(*arr));
    
    for (i = 0; i < 10; i = i + 1)
    {
        arr[i] = i;
    }

    for (i = 0; i < 10; i = i + 1)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void testParams0(int x)
{
    printf("%d\n", x);
}

void testParams1(char c)
{
    printf("%c\n", c);
}

void testParams2(int x, int y)
{
    printf("%d %d\n", x, y);
    printf("%d\n", testReturn0());
}

void testParams3(char c, int x)
{
    printf("%c %d\n", c, x);
}

void testParams4(int* pi, char* pc, void* vp)
{
    int* pitemp;
    pitemp = vp;
    printf("%d %c %d\n", *pi, *pc, *pitemp);
}

int main(void)
{
    int x, y, z;
    char c;
    char* str;
    str = "Hello world!\n";
    printf("%s", str);
   
    testAdd();
    testSubtract();
    testMultiply();
    testDivide();
    testRemainder();
    testLessThan();
    testGreaterThan();
    testLessEqual();
    testGreaterEqual();
    testEqual();
    testNotEqual();
    testNegate();
    testNot();
    testLogicalAnd();
    testLogicalOr();

    testIf();
    testWhile();
    testFor();

    printf("%d\n", testReturn0());
    printf("%c\n", testReturn1());
    printf("%d\n", testReturn2());
    printf("%d\n", testReturn3());
    printf("%d\n", testReturn4());
    printf("%d\n", testReturn5());
    printf("%d\n", testReturn6());
   
    testMalloc();

    x = 0;
    c = 'a';

    testParams0(0);
    testParams1('a');
    testParams2(0, 1);
    testParams3('a', 1);
    testParams4(&x, &c, &x);

    x = 3;
    y = 19;
    z = 42;

    x = y + z * x % z * (x + x + x + x + y - -z) / -(13 % x);
    
    printf("%d\n", x);

    return 0;
}
