#include "sort.h"

void error_exit_calloc_failed(void){
	printf("calloc Error!\n");
	exit(1);
}

void error_exit_too_many_words(void){
	printf("too many words!\n");
	exit(1);
}

void error_exit_word_too_long(void){
	printf("your words are too long!\n");
	exit(1);
}

