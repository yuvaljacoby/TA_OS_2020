#include<stdlib.h>
#include<stdio.h>

void foo(int n) {
	int *a = (int*) malloc(n*sizeof(int));
	int i;

	for (i=0; i<n; i++) {
		a[i] = i*i;
		printf("a[%d] = %d\n", i, a[i]);	
	}
}

int main(int argc, char *argv[]) {
	foo(10);
	return 0;
}

