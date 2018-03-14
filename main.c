#include "score.h"

void main(){
	int scores[MAX], marks[MAX];
	int statistics[6]={0};	//If the initializer list is shorter 
							//than the array size, the rest of the array will be 0

	input_scores(scores);	//Pointer used here
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(marks, statistics);

}
