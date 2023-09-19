#include<stdio.h>
int main()
{
	char sh;
	printf("enter any letter");
	scanf("%c",&sh);
	if(sh=='a'||sh=='e'||sh=='i'||sh=='o'||sh=='u')
	printf("VOWEL");
	else
	printf("CONSONANT");
	return 0;
	
}

