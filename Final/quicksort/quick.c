#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SWAP(a, b){int t = a; a = b; b = t;}

#define SIZE 10

void printArr(int *arr, int n){
	for(int i = 0; i < n; i++) printf("%4d", arr[i]);
	printf("\n");
}

void quicksort(int *arr, int start, int end){
	if(start >= end) return;

	int pivot = arr[start];

	int left = start+1;
	int right = end;

	while(1){
		while(arr[left] <= pivot) left++;
		while(arr[right] > pivot) right--;

		if(left > right) break;

		SWAP(arr[left], arr[right]);
	}

	SWAP(arr[start], arr[right]);

	quicksort(arr, start, right-1);
	quicksort(arr, right+1, end);

}

int main(){
	srand(time(NULL));
	
	int arr[SIZE];
	for(int i = 0; i < SIZE; i++) arr[i] = rand() % 100;

	printf("Initial Array\n");
	printArr(arr, SIZE);

	printf("Sorted Array\n");
	quicksort(arr, 0, SIZE-1);
	printArr(arr, SIZE);


	return 0;
}