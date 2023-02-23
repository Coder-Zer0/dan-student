/** NOTE
 This example has been modified to use another integer type variable instead of a float type variable
 due to the problems in the float library with the HI-TECH C compiler.
 The compiler returns no fatal errors when the type float variable is used and the float library included
 at link time but the Xrel file produces an adress error. The original code is commented out so you can
 still see that was intented in the file
*/

char name1[ ] = "First Program Title";
main(void) {
	int index;
	int stuff[12];
	int wierd[12];		// float wierd[12]
	static char name2[ ] = "Second Program Title";
		for (index = 0; index < 12; index++) {
			stuff[index] = index + 10;
			wierd[index] = 12 * (index + 7);		// wierd[index] = 12.0 * (index + 7);
		}
		printf("%s\n", name1);
		printf("%s\n\n", name2);
		for (index = 0; index < 12; index++) {
			printf("%5d %5d		%5d\n", index, stuff[index], wierd[index]);		// printf("%5d %5d %10.3f\n", index, stuff[index], wierd[index]);
		}
}
