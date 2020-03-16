#include<stdlib.h>
#include<stdio.h>

#define DIM 1000000

int main(int argc, char *argv[]) {
	float *a;
	int i;

	a = (float*) malloc(DIM*sizeof(float));
    printf("~1\n");

	for (i=0; i<DIM; i++) {
		a[i] = i;
		if (i == DIM-1000) {
            printf("i == %d\n", (DIM-1000));
            a[DIM+i] = a[i];
            a[DIM-1] = a[i];
            printf(" ~2 ");
		}
	}

	printf("a[0] = %f\n", a[0]);	
	printf("Done");
	free(a);
	return 0;
}

