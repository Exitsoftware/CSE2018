#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArr(int *arr){
	for(int i = 0 ; i < SIZE; i++) printf("%4d", arr[i]);
	printf("\n");
}

void merge(int *arr, int start, int end){
	printf("start = %d end = %d\n", start, end);
	int mid = (start + mid)/2;
	int buflen = (end - start + 1);
	int *buf = (int*)malloc(sizeof(int) * buflen);

	int lindex = start;
	int rindex = mid+1;

	for(int i = 0; i < buflen; i++){
		if(lindex <= mid && rindex <= end){
			if(arr[lindex] < arr[rindex]) buf[i] = arr[lindex++];
			else if(arr[lindex] >= arr[rindex]) buf[i] = arr[rindex++];
		}
		else{
			if(lindex > mid) buf[i] = arr[rindex++];
			else if(rindex > end) buf[i] = arr[lindex++];
		}
	}

	int startPoint = start;

	for(int i = 0; i < buflen; i++){
		arr[startPoint++] = buf[i];
	}


}

void mergesort(int *arr, int start, int end){
	
	if(start == end) return;
	

	printf("\t");
	printArr(arr);
	int mid = (start + end)/2;
	mergesort(arr, start, mid);
	mergesort(arr, mid+1, end);
	merge(arr, start, end);
}

int main(){

	srand(time(NULL));

	int arr[SIZE];
	for(int i = 0; i < SIZE; i++) arr[i] = (int) rand() % 100;

	int len = sizeof(arr) / sizeof(arr[0]);


	printf("Initial Array\n");
	printArr(arr);

	printf("\nSorted Array\n");
	mergesort(arr, 0, len-1);
	printArr(arr);

	return 0;
}