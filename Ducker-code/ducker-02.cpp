// count digital whitespace and others
#include <stdio.h>

int main()
{
	// initalize the data
	int c, i, nwhite, nothers;
	int digital[10];
	nwhite = nothers = 0;
	for (i = 0; i <= 9; ++i)
	{
		digital[i] = 0;
	}

	// read and count
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
			++digital[c - '0'];
		else if (c == ' ' || c == '\t' || c == '\n')
			++nwhite;
		else
			++nothers;
	}

	//output the result
	printf("digital = \n");
	for (i = 0; i <= 9; ++i)
		printf("the times of %d is %d\n", i,digital[i]);
	printf("\nnwhite is %d, nothers is %d", nwhite, nothers);
}


//学会读取字符，且能将其转化成数字