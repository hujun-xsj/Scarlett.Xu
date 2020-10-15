#include<stdio.h>
int main()
{
	int n;
	printf("请输入数字\n");
	scanf_s("%d", &n);
	int c = n;
	while (n > 1) {
		n--;
		c *= n;
	}
	printf("该数字的阶乘是%d", c);
	return 0;
}
