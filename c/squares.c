main() {
	int x, y;
		for(x = 0; x < 7; x++) {
			y = squ(x);
			printf("The square of %d is %d\n", x, y);
		}
		for (x = 0; x <= 7; ++x)
			printf("The value of %d is %d\n", x, y);
}
squ(in)
int in;
{
	int square;
	
		square = in * in;
		return(square);
}
