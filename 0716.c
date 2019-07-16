#include <stdio.h>
#include <stdlib.h>

int a = 1;
void test()
{
	int a = 2;
	a += 1;
}

#define MOD(x,y) x%y

void  Min(int k, int arr[])
{
	int i;
	int min = arr[0];
	for (i = 0; i < k; i++)
	{
		if (arr[i + 1]>arr[i])
		{
			min = arr[i + 1];
		}
		else
			min = arr[i];
	}
	printf("%d\n", min);
}

int main()
{
	//test();
	//printf("%d\n", a);//1

	//int y = 10;
	//int x;
	//x = y++;
	//printf("%d %d", x, y);//10 11

	//int i = 0;
	//int j = 0;
	//if ((++i > 0) || (++j > 0))
	//{
	//	printf("i=%d;j=%d\n", i, j);//1 0
	//}

	//int a = 13, b = 94;
	//printf("%d\n", MOD(b, a + 4));

	//char a;
	//int b;
	//float c;
	//double d;
	//printf("%d\n", sizeof(a*b + d - c));//8

	//int x = 0;
	//switch (++x)
	//{
	//case 0:++x;
	//case 1:++x;
	//case 2:++x;
	//}
	//printf("%d\n", x);//3

	int arr[10] = { 1, 3, 5, 2, 6, 4, 7, 8, 9, 0 };
	Min(3, arr);

	system("pause");
	return 0;
}