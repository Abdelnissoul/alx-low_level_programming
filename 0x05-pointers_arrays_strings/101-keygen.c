#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char charset[62];
	int start = 0;
	char a;
	int l_password;
	char password[];
	int i;

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

	l_password = 25;
	password[l_password +1];
	srand(time(NULL));

	for (i = 0; i < l_password; i++)
	{
		password[i] = charset[rand() % 62];
	}
	password[l_password] = '\0';
	printf("the password is: %s\n", password);

	return (0);
}

