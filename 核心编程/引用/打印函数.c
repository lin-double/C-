#include<stdio.h>
#include<math.h>
//void test01()
//{
//	printf("******************************\n");
//	printf("* C programming              *\n");
//	printf("* Hellow world!              *\n");
//	printf("******************************\n");
//	return;
//}
//int test01()
//{
//	printf("******************************\n");
//	printf("* C programming              *\n");
//	printf("* Hellow world!              *\n");
//	printf("******************************\n");
//	return 0;
//}

int fun01(int m)
{
	int i;
	for (i = 2; i < m; i++)
	{
		if (m%i == 0)
		{
			return 0;
		}
		
	}
	return 1;
}
int fun02(int m)
{
	int i;
	int n = sqrt(m);
	for (i = 2; i <= n; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}

	}
	return 1;
}
void Printf(int (*fun)(int*),int i)
{
	if (fun==1)
	{
		printf("%d ", i);
	}
}
int main()
{
	int i ;//定义一个整型变量
	int sum = 0;//求和用的
	for (i = 101; i < 200; i++)//从100到200的求和，包括100和200，之间的话就是int i=101;i<200;i++
	{
		if(fun01(i)==1)
		{
			sum =sum+ i;
			Printf(fun01,i);
		}
	}
	printf("sum=%d", sum);
	return 0;
}