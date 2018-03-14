//Function definition of classification()

#include <stdio.h>
#include "score.h"

void output_results(const int m[], int stat[]){
	int i;
	printf("Here are the marks: \n");
	for(i=0; i<MAX && m[i]!=-1; ++i){
		printf("%4d", m[i]);
	}
	printf("\n\nHere are the statistics: \n");
	printf(" ----------------\n");
	for(i=0; i<6; i++){
		printf("| Mark %d: %d hits |\n", i, stat[i]);
	}
	printf(" ----------------\n");

}
