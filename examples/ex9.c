#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[]) {
	int arrLen = 10;
	int* arr;
	int i;
	arr = (int*) malloc(arrLen*sizeof(int));

	for(i=0; i<arrLen; i++) {
		arr[i] = i;
	}
	free(arr);

	for(i=0; i<arrLen; i++) {
		arr[i] = i*2;
	}

	printf("Done\n");
	return 0;
}


