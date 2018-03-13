void* malloc(int x);

int printf(char* x, ...);

void insertion_sort(int *a, int n) {
	int i;

	for(i = 1; i < n; i = i + 1) {
		int tmp, j;

		tmp = a[i];
		j = i;

		while(j > 0 && tmp < a[j - 1]) {
			a[j] = a[j - 1];
			j = j - 1;
		}

		a[j] = tmp;
	}
}

int main(void) {
    int a[11], n, i;
    char* x;
    
    x = malloc(sizeof i * 8);
    
    x[1] = 'a';

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
    a[10] = '&';
    
    n = sizeof a / sizeof a[0];

    for (i = 0; i < n; i = i + 1) {
        printf("%d ", a[i]);
    }

    printf("\n");
    
    insertion_sort(a, n);
    
    for (i = 0; i < n; i = i + 1) {
        printf("%d ", a[i]);
    }

    printf("\n");

    printf("%c\n", x[1]);

    return 0;
}