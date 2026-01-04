#include <stdio.h>

int	main(const int argc, const char * argv[])
{
	if (argc != 2)
	{
		printf("Please enter the initial\n");
		return 1;
	}
	char c = 'A';
	int i = 0;
	while (c <= 'Z')
	{
		if (c == *argv[1])
		{
			break;
		}
		i++;
		c++;
	}
	int output = i % 5;
	printf("%i\n", output);
	return 0;
}

