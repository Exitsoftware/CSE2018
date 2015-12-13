#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArr(int *arr, int size){
	for(int i = 0; i < size; i++) printf("%4d",arr[i]);
	putchar('\n');
}

void merge(int *arr, int start, int end){
	int bufSize = end - start + 1;
	int *buf = (int*)malloc(sizeof(int) * bufSize);

	int mid = (start + end)/2;

	int left = start;
	int right= mid+1;

	for(int i = 0; i < bufSize; i++){
		if(left <= mid && right <= end){
			if(arr[left] < arr[right]) buf[i] = arr[left++];
			else buf[i] = arr[right++];
		}
		else{
			if(left > mid) buf[i] = arr[right++];
			else buf[i] = arr[left++];
		}
	}

	for(int i = 0; i < bufSize; i++){
		arr[start++] = buf[i];
	}
	free(buf);
}

void mergesort(int *arr, int start, int end){
	if(start >= end) return;
	int mid = (start + end)/2;

	mergesort(arr, start, mid);
	mergesort(arr, mid+1, end);
	merge(arr, start, end);
}


int main(){
	srand(time(NULL));

	int arr[SIZE];
	for(int i = 0; i < SIZE; i++) arr[i] = rand()%100;

	printf("Initial Array\n");
	printArr(arr, SIZE);

	printf("Sorted Array\n");
	mergesort(arr, 0, SIZE-1);
	printArr(arr, SIZE);




	return 0;
}