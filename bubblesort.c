int printf(char* x, ...);

void bubble_sort (int *a, int n) {
    int i, t, s;
    s = 1;
    while (s) {
        s = 0;
        for (i = 1; i < n; i = i + 1) {
            if (a[i] < a[i - 1]) {
                t = a[i];
                a[i] = a[i - 1];
                a[i - 1] = t;
                s = 1;
            }
        }
    }
}
 
int main(void) {
    int i, n, a[10]; 
    a[0] = 4;
    a[1] = 65;
    a[2] = 2;
    a[3] = -31;
    a[4] = 0;
    a[5] = 99;
    a[6] = 2;
    a[7] = 83;
    a[8] = 782;
    a[9] = 1;

    n = sizeof a / sizeof a[0];

    for (i = 0; i < n; i = i + 1) {
        printf("%d ", a[i]);
    }

    printf("\n");

    bubble_sort(a, n);
    
    for (i = 0; i < n; i = i + 1) {
        printf("%d ", a[i]);
    }

    printf("\n");
    
    return 0;
}