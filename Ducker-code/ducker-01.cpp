//统计换行数
#include <stdio.h>

int main()
{
	int ch = 0;
	int nl = 0;
	printf("please enter a letter to start(when you want to quit"
		"just enter 'q') :");
	while ((ch = getchar()) != 'q')
	{
		if (ch == '\n')
		{
			++nl;
			printf("行数增加\n");
		}
	}
	printf("行数为%d", nl);
	return 0;
}