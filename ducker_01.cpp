#define  _CRT_SECURE_NO_WARNINGS	
// 写代码
#include <stdio.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))
int main()
{
	int a;
	int b;
	printf("请输入第一个数字：");
	scanf_s("%d", &a);
	printf("请输入第二个数字：");
	scanf_s("%d", &b);
	int result = MAX(a, b);
	printf("较大的数字是是%d", result);
	return 0;
}