//ͳ�ƻ�����
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
			printf("��������\n");
		}
	}
	printf("����Ϊ%d", nl);
	return 0;
}