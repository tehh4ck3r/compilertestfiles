int func(int a, int b) {
    int* z;
    void *c;
    char **d;
    *a;
    *z;
    *c;
    *d;
    3[3][4];
    d[1][2];
    return 1;
}

int main(int argc, char** argv) {
    int x;
    int y;
    char z;
    char w;
    int* a;
    int* lul;
    int f[10];
    char* yolo;
    void* _a;
    char* _b;

    x - a; /* should be error */
    a + lul; /* should be error */

    w && func;

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
    _a == x;
    x == _a;

    _a < _b;
    _a < x;
    x < z;

    _a >= _b;
    _a <= x;
    x > z;
    _a > x;

    x - 3;
    y + 1;
    yolo == "asdf";
    f[13];
    f[x];

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
    &10;

    func(x, y);
    f && z;
    -yolo;
    -w;
    -x;
    -_a;
}
