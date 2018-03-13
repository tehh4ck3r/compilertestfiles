int printf(char* x, ...);

void selection_sort (int *a, int n) {
    int i, j, m, t;

    for (i = 0; i < n; i = i + 1) {
        m = i;
        for (j = i; j < n; j = j + 1) {
            if (a[j] < a[m]) {
                m = j;
            }
        }
        t = a[i];
        a[i] = a[m];
        a[m] = t;
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

    selection_sort(a, n);
    
    for (i = 0; i < n; i = i + 1) {
        printf("%d ", a[i]);
    }

    printf("\n");
    
    return 0;
}