#include<stdlib.h>
#include<stdio.h>

void foo(int n) {
	int i;
	int *a = (int*) malloc(n*sizeof(int));

	a[0] = 1;
	printf("a[0] = 1\n");
	a[1] = 1;
	printf("a[1] = 1\n");

	for (i=2; i<=n; i++) {
		a[i] = a[i-1] + a[i-2];
        printf("a[%d] = %d\n", i, a[i]);
	}

	free(a);
}

int main(int argc, char *argv[]) {
	foo(10);
	return 0;
}

