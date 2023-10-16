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

int l_password = 25;
char password[l_password +1];
	srand(time(NULL));

	for (int i = 0; i < password_l; i++)
	{
		password[i] = charset[rand() % 62];
	}
	password[password_l] = '\0';
	printf("the password is: %s\n", password);

	return (0);
}

