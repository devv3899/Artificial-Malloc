#include "mymalloc.h"


int main() {
	
	printReport();
	
	printf("After allocating memory for 20 Integers: \n");
	int *v = (int *)malloc(20*sizeof(int));
	printReport();
	
	printf("After allocating memory for 20 Integers: \n");
	int *w = (int *)malloc(20*sizeof(int));
	printReport();
	
	printf("After allocating memory for 20 Integers: \n");
	int *x = (int *)malloc(20*sizeof(int));
	printReport();
	
	printf("After allocating memory for 20 Integers: \n");
	int *y = (int *)malloc(20*sizeof(int));
	printReport();
	
	printf("After allocating memory for 20 Integers: \n");
	int *z = (int *)malloc(20*sizeof(int));
	printReport();
	
	printf("After freeing memory for second block: \n");
	free(w);
	printReport();
	
	printf("Again allocating memory for 10 Integers: \n");
	w = (int *)malloc(10*sizeof(int));
	printReport();	
		
	
	printf("After freeing memory for fourth block: \n");
	free(y);
	printReport();
	
	printf("After freeing memory for third block: \n");
	free(x);
	printReport();
	
}