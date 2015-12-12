#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArr(int *arr, int size){
	for(int i = 0; i < size; i++) printf("%4d", arr[i]);
	putchar('\n');
}

void merge(int *arr, int start, int end){

	int mid = (start + end)/2;
	int bufSize = end - start + 1;
	int *buf = (int*)malloc(sizeof(int) * bufSize);

	int lindex = start;
	int rindex = mid+1;

	for(int i = 0; i < bufSize; i++){
		if(lindex <= mid && rindex <= end){
			if(arr[lindex] < arr[rindex]) buf[i] = arr[lindex++];
			else buf[i] = arr[rindex++];
		}
		else{
			if(lindex > mid) buf[i] = arr[rindex++];
			else buf[i] = arr[lindex++];
		}
	}

	for(int i = 0; i < bufSize; i++){
		arr[start++] = buf[i];
	}
	free(buf);
}


void merge_sort(int *arr, int start, int end){
	if(start == end) return;

	int mid = (start + end)/2;
	merge_sort(arr, start, mid);
	merge_sort(arr, mid+1, end);
	merge(arr, start, end);
}


int main(){
	srand(time(NULL));

	int arr[SIZE];
	for(int i = 0; i < SIZE; i++) arr[i] = (int) rand()%100;

	printf("Initial Array\n");
	printArr(arr, SIZE);

	printf("Sorted Array\n");
	merge_sort(arr, 0, SIZE-1);
	printArr(arr, SIZE);


	return 0;
}