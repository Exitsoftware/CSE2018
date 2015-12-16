#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 300
#define MAXSIZE 50

void swap(char **p, char **q){
	char *tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}

void wordsort(char *w[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(strcmp(w[i], w[j]) > 0) swap(&w[i], &w[j]);
		}
	}
}

void printWord(char *w[], int n){
	for(int i = 0; i < n; i++){
		printf("%s\n", w[i]);
	}
}

int main(){

	char *w[N];
	char word[MAXSIZE];
	int i;
	int n;

	for(i = 0; scanf("%s", word) == 1; i++){
		if(i >= N){
			printf("Error Full Array\n");
			exit(1);
		}

		if(strlen(word) >= MAXSIZE){
			printf("Error Over MaxSize\n");
			exit(1);
		}

		w[i] = (char*) calloc(strlen(word)+1, sizeof(char));
		if(w[i] == NULL){
			printf("Fail Memory Allocation\n");
			exit(1);
		}

		strcpy(w[i], word);

	}

	n = i;
	wordsort(w,n);
	printWord(w,n);
	return 0;
}