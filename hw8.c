#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	int len, i;
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] > 64 && str[i]< 91)
			str[i] += 32;
		else if (str[i] > 96 && str[i]<123)
			str[i] -= 32;
	}
	printf("Output> %s", str);
	return 0;
}

