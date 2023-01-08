#include <stdio.h>

void reverse_string(char *p);

int main() {

	char s[101];
	
	printf("\nEnter a string:\n");
	scanf("%s", s);
	
	reverse_string(s);

	printf("The reverse of the string is : %s\n", s);
}
void reverse_string(char *p) {

	int len, i;
	char *start, *end, temp;
	len = strlen(p);

	//setting the pointers
	start = p;
	end = p + len - 1; 

	for (i = 0; i < (len - 1) / 2; i++) {

		//swap
		temp = *end;
		*end = *start;
		*start = temp;

		//update pointers
		end--;
		start++;

	}
}