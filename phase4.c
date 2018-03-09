void func1(int x, char y, ...) {
    x = y + 1;
    return y; /* invalid return type */
}

char** func2(int x, char y) {
    char* argv[10];
    return argv;
}

void** func3(void) {
    void **z;
    return z;
}

int main(int argc, char** argv) {
    int a, b, *c, *d, e[10], f[5], **g, **h;
    char i, j, *k, *l, m[10], n[5], **o, **p;
    void *q, *r, *s[10], *t[5], **u, **v;

    a = b + c; /* invalid operands to binary = */
    a = c + b; /* invalid operands to binary = */
    a = c + d; /* invalid operands to binary + */
    a = a + b + c; /* invalid operands to binary = */
    d = a + b + c;
    a = a + b;
    a = *c + b;
    a = *d + *c * a;
    a = **g + *c;
    d = *c + *g;
    a = e[10] + f[1] || **g + *g[1];
    a = m[10] + n[1] || **o + *p[1];
    j = m[10] + n[1] || **o + *p[1];
    
    p = func2(a, b);
    p = func2(a, j);

    i = **p;
    a = **p;

    i = **(func2(a, b));


    for (a = 0; a < 13; a = a + 1) {
        if (a > 3) {
            break;
        } else if (a < 2) {
            {
                break;
            }
        } else while (a > 15) {
            func1(1, 'a');
        }
    }

    {
        break;  /* break statement not within loop */
    }

    q + r + s[10]; /* invalid operands to binary + */

    v = func3();
    t = u;
    f = g;
    return 1;
}
