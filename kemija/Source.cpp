#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[20];
	printf("Enter some word : ");
	scanf_s("%s", str, 19);
	int i = 0;
	while (i < 20 && str[i] != '\0')
	{
		printf("%c", str[i]);
		if (str[i] == 'a')
		{
			printf("pa");
		}
		else if (str[i] == 'e')
		{
			printf("pe");
		}
		else if (str[i] == 'i')
		{
			printf("pi");
		}
		else if (str[i] == 'o')
		{
			printf("po");
		}
		else if (str[i] == 'u')
		{
			printf("pu");
		}
		i++;
	}
	return 0;
}