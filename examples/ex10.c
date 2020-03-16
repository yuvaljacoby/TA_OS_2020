#include<stdlib.h>
#include<stdio.h>

int compute(int len, int* arr) {
	int sum = 0, i;
	for(i=0; i<len; i++) {
		sum += arr[i];
	}
	free(arr);
	return sum;
}

int main(int argc, char *argv[]) {
	int arrLen = 10, sum, i;
	int* arr;
	arr = (int*) malloc(arrLen*sizeof(int));

	for(i=0; i<arrLen; i++) {
		arr[i] = i;
	}
	sum = compute(arrLen, arr);	
	free(arr);
	printf("sum = %d", sum);
	return 0;
}

