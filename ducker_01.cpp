#define  _CRT_SECURE_NO_WARNINGS	
// д����
#include <stdio.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))
int main()
{
	int a;
	int b;
	printf("�������һ�����֣�");
	scanf_s("%d", &a);
	printf("������ڶ������֣�");
	scanf_s("%d", &b);
	int result = MAX(a, b);
	printf("�ϴ����������%d", result);
	return 0;
}