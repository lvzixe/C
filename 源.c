#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;//将结果返回至函数MAX
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = MAX(num1, num2);//设置变量max来接收MAX函数值
	printf("max=%d\n", max);
	return 0;
}