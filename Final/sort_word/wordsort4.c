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

void printWord(char *w[], int n){
	for(int i = 0; i < n; i++){
		printf("%s\n", w[i]);
	}
}

void wordsort(char *w[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(strcmp(w[i], w[j]) > 0) swap(&w[i], &w[j]);
		}
	}
}

int main(){

	char word[MAXSIZE];
	char *w[N];

	int i;
	int n;

	for(i = 0; scanf("%s", word) == 1; i++){
		w[i] = (char *) calloc(strlen(word)+1, sizeof(char));
		strcpy(w[i], word);
	}

	n = i;
	wordsort(w,n);
	printWord(w,n);

	return 0;
}