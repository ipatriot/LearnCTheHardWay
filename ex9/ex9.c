#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < 25) {
		printf("%d\n", i);
		i++;
	}

	int j = 25;
	while (j > 0) {
		printf("%d \n", j);
		j--;
	}

	return 0;
}