float z;

main() {
	int index;
	float x, y, sqr(), glsqr();
		for(index = 0; index <= 7; index++) {
			x = index;
			y = sqr(x);
			printf("The square of %d is %10.4f\n", index, y);
		}
		for(index = 0; index <= 7; index++) {
			z = index;
			y = glsqr(z);
			printf("The square of %d is %10.4f\n", index, y);
		}
}

float sqr(inval)
float inval;
{
	float square;
	
		square = inval * inval;
		return(square);
}
float glsqr()
{
	return(x * z);
}
