#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define SWAP(a, b) {int t = a; a = b; b = t;}

void printArr(int *arr){
	for(int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
	printf("\n");
}


void quickSort(int *arr, int start, int end){
	if(start >= end) return;

	
	int mid = (start + end)/2;
	int pivot = arr[mid];

	printf("pivot = %d\n", pivot);
	printArr(arr);

	SWAP(arr[start], arr[mid]);

	int left = start+1;
	int right = end;

	while(1){
		while(arr[left] <= pivot) left++;
		while(arr[right] > pivot) right--;

		if(left > right)break;
		SWAP(arr[left], arr[right]);
		printf("\t");
		printArr(arr);
	}
	
	SWAP(arr[start],arr[right]);
	printArr(arr);

	quickSort(arr, start, right-1);
	quickSort(arr, right+1, end);
}

int main(){

	int arr[SIZE];

	srand(time(NULL));


	for(int i = 0; i < SIZE; i++){
		arr[i] = (int) rand()%100;
	}
	printf("Initial Array\n");
	printArr(arr);
	printf("\nSorted Array\n");

	quickSort(arr, 0, SIZE-1);
	printf("\nResult Array\n");
	printArr(arr);


	return 0;
}