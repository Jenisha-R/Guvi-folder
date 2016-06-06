#include <stdio.h>

int main(void) {
	// your code goes here
	char ch;
	scanf("%c",&ch);
	if((ch>65 && ch<90)||(ch>97 && ch<122))
		printf("Alphabet");
	else
		printf("Not an Alphabet");
	return 0;
}
