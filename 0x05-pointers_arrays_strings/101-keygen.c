#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char charset[62];
	int start = 0;
	char a;

	for(a = '0' ; a <= '9'; a++)
	{
	charset[start++] = a;
	}
	
	for (a = 'A'; a <= 'Z'; a++)
	{
		charset[start++] = a;
	}

	for (a = 'a'; a <= 'z'; a++)
	{
		charset[start++] = a;
	}
	charset[start] = '\0';
}

