/*
 * No guarantuees that the comments are 100% accurate; I may have
 * missed a type error or have false positives.
 * --KM
 */
char* strfunc(int a, char b, ...);

int func(int a, int b) {
    int* z;
    void *c;
    char **d;
    void **e;
    *a; /* error: cannot dereference an integer */
    *z;
    *c; /* error: cannot dereference void*  */
    *d;
    *e; 
    3[3][4]; /* error: can't array-reference an int literal */
    d[1][2];
    return 1;
}
void func2(void) {
    int a, b, c;
    char d;
    void* vp;
    strfunc(a, d);
    strfunc(a, d, vp);
    strfunc(a, d, a, a);
    strfunc(d, d);
    strfunc(a, a);
    strfunc(a);  /* error: too few parameters */
    return 3;   /* error: invalid return type */
}
int main(int argc, char** argv) {
    int x, y, f[10];
    char z, w;
    int* a, *lul;
    char* yolo, *_b;
    void* _a;

    x - a; /* error, can't subtract ptr from int */
    a + lul; /* error, can't add 2 pointers */

    w && func2(); /* error, can't AND with void */ 

    w && func(x, y);
    w && z || w && x && y && *a;
    x(); /* error, called obj not a function */

    y * x;

    z || y && x ||  y;

    x && y;
    x || y;

    x == y;
    x != y;
    w == z;
    w == x;

    y / x;
    y % x;
    y < x;
    y > x;
    w <= z;
    w >= x;

    w % x / z;
    
    _a != _b;
    x == _a; /* error, cannot compare int and void ptr */
    _a == x; /* error, cannot compare void ptr and int */

    _a < _b; /* error, cannot compare void ptr and char ptr */
    yolo < _b > yolo; /* error, cannot compare int [result of char* < char*] and char* */
    _a < x; /* error, cannot compare void ptr and int */
    x < z; 

    _a >= _b; /* error, cannot compare void ptr with char ptr  */
    _a <= x; /* error, cannot compare void ptr with int */
    x > z;
    _a > x; /* error, cannot compare void ptr with int */

    x - 3;
    y + 1;
    yolo == "asdf";
    f[13];
    f[x];
    f[*a];
    f[z];
    f[argv[1][1]];

    -y;
    !y;
    !_a;
    !_b;
    !a;
    !w;
    !f;
    sizeof y;
    *a;
    &y;
    &10; /* error, lvalue required */

    func(x, y);
    f && z;
    -yolo; /* error: can't negate a char ptr */
    -w;
    -x;
    -_a; /* error: can't negate a void ptr */
    
    while(x) {
        if (1) {
            break;
        }
        if (main) { /* error: main not a valid test expr */
            break;
        }
        {
            break;
        }
    }
    break; /* error: break not in loop */ 
    for (x = 1 ; x < 1 ; x = x + 1 )
    {
        while (1) {
            break;
        }
        break;
    }
}
