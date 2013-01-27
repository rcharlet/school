
#include <stdio.h>
#include <string.h>

char * reverseString(char * s);


char * reverseString(char * s) {
	/* caller must pass in a legal, non const, C string */
	int len = strlen(s); // number of characters before the terminating null
	int end = len-1;     // the index of the last char in the string before the null
	int half = len/2; 	 // for strings of odd length, this will fall one short of the middle char
	char temp;
	int i;

	for (i=0; i<half; i++) {
		temp = s[i];
		s[i] = s[end-i];
		s[end-i] = temp;
	}
	return s;
}


int main() {
	char s[500];
	sprintf(s, "%s", "hi");
	reverseString(s);
	printf("%s\n", s);

	sprintf(s, "%s", "howdy");
	reverseString(s);
	printf("%s\n", s);

	sprintf(s, "%s", "howdy yall");
	reverseString(s);
	printf("%s\n", s);
	
	sprintf(s, "%s", "supercalifragilistic-expialadocious");
	reverseString(s);
	printf("%s\n", s);
	
	return 0;
}


