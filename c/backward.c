#include <stdio.h>

main() {
	char line_of_char[80];
	int index = 0;
		strcpy(line_of_char,"this is a string.\n");
		/**The leading space in this
		*  string is required so the
		*  last character "t" in
		*  this is printed when
		*  the string is printed
		*  backwards due to the index being incremented
		*  to 1 before the
		*  printf statement for
		*  printing the line backwards
		*/
		forward_and_backwards(line_of_char, index);
}
forward_and_backwards(line_of_char, index)
char line_of_char[];
int index;
{
	if (line_of_char[index]) {
	index++;
	forward_and_backwards(line_of_char, index);
}
printf("%c",line_of_char[index]);

}
