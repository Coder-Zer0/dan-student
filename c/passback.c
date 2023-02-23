main(void) {
	int index;
	int matrix[20];
	
		for (index = 0; index < 20; index++)		// generate data
			matrix[index] = index + 1;
			
		for (index = 0; index < 5; index++)			// print original data
			printf("Start matrix[%d] = %d\n", index, matrix[index]);
			
		dosome(matrix);			// go to a function and modify matrix
		
		for (index = 0; index < 5; index++)		// Print modofied matrix
			printf("back matrix[%d] = %d\n", index, matrix[index]);
}
dosome(list)		// This will illustrate returning data
int list[];
{
int i;
	for (i = 0; i < 5; i++)
		printf("Before matrix[%d] = %d\n", i, list[i]);
	for (i = 0; i < 20; i++)
		list[i] += 10;			// adds 10 to all values
	for (i = 0; i < 5; i++)
		printf("After matrix[%d] = %d\n", i, list[i]);		// prints modified matrix
}
