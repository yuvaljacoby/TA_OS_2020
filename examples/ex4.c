#include<stdlib.h>
#include<stdio.h>

#define DIM 1000000

int main(int argc, char *argv[]) {
	float *a;
	int i;

	a = (float*) malloc(DIM*sizeof(float));
    printf("~1");

	for (i=0; i<DIM; i++) {
		a[i] = i;
		if (i == DIM-1000) {
            printf("~2");
            a[DIM+i] = a[i];
            printf("~3");
		}
	}
	printf("Done\n");
	free(a);
	return 0;
}

