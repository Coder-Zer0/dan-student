int sum;		// This is a global variable

main() {
	int index;
		header();		// This calls the function called header
		for (index = 1; index <= 7; index++)
			square(index);		// This calls the square function
		ending();				// This calls the ending function
}
header () {
	sum = 0;
	printf("This is the header for the square program\n\n");
}
square(number)		// This is the square function
int number;
{
	int numsq;
		numsq = number * number;		// This produces the square
		sum += numsq;
		printf("The square of %d is %d\n", number, numsq);
}
ending() {
	printf("\nThe sum of the squares is %d\n", sum);
}
