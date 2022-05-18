#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	char ch;
//	scanf("%c", &ch);
//	int i, j, k;
//
//	for (i = 1; i <= 3; i++)
//	{
//		for (k = 0; k < 3 - i; k++) {
//			printf(" ");                //打印前三行的空格
//		}
//		for (j = 0; j < 2 * i - 1; j++) {
//			printf("%c", ch);            //打印前三行的字符
//		}
//		printf("\n");                  //前三行 每行结束时换行
//	}
//	for (i = 1; i <= 2; i++)
//	{
//		for (k = 0; k < i; k++)
//			printf(" ");                //打印最后两行的空格
//
//		for (j = 0; j < 5 - 2 * i; j++)
//			printf("%c", ch);            //最后两行的字符
//		printf("\n");
//	}
//	return 0;
//}

////求两个数的最大公约数和最小公倍数之和（辗转相除法）
//#include<stdio.h>
//
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%lld %lld", &n, &m);
//	long long tmp = 0;
//	long long max = 0;
//	long long min = 0;
//	long long a = n;
//	long long b = m;
//	while (tmp = n % m)
//	{
//		n = m;
//		m = tmp;
//	}
//	max = m;
//	min = a * b / max;
//	printf("%lld\n", max + min);
//	return 0;
//}

////求两个数的最大公约数和最小公倍数之和（试除法）
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int max = 0;
//	int min = 0;
//	max = n > m ? m : n;
//	min = n > m ? n : m;
//
//	while (1)
//	{
//		if (n%max == 0 && m%max == 0)
//		{
//			break;
//		}
//		max--;
//	}
//	while (1)
//	{
//		if (min%m == 0 && min%n == 0)
//		{
//			break;
//		}
//		min++;
//	}
//	printf("%d\n", max + min);
//	return 0;
//}


// 将一个数的位数为偶数时置0，奇数时置1
//#include<stdio.h>
//int main()
//{
//    
//    int a = 0;
//    scanf("%d", &a);
//    int count = 0;
//    int m = 0;
//    int arr[9]= {0};
//    while(a!=0)
//    {
//        m = a % 10;
//        if(m % 2 == 0)
//        {
//            arr[count] = 0;
//        }
//        else if(m % 2 != 0)
//        {
//            arr[count] = 1;
//        }
//        count++;
//        a /= 10;
//    }
//    int result = 0;
//    for(int i = count-1; i>=0; i--)
//    {
//        result = result*10 + arr[i];
//    }
//    printf("%d\n", result);
//    return 0;
//}


//BC49 kiki算数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int add = 0;
//	add = a + b;
//	if (add >= 100)
//	{
//		add = add % 100;
//	}
//	printf("%d\n", add);
//	return 0;
//}

//找四个数的最大值
//#include<stdio.h>
//int main()
//{
//	int arr[4] = { 0 };
//	scanf("%d", &arr);
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int arr[3] = { 2, 3, 7 };
//	int count = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		if (a % arr[i] == 0)
//		{
//			printf("%d ", arr[i]);
//			count++;
//		}
//
//	}
//	if (count == 0)
//	{
//        printf("n\n");
//	}
//    
//	return 0;
//}

////购物
//#include<stdio.h>
//int main()
//{
//	double price = 0;
//	int month = 0;
//	int data = 0;
//	int flag = 0;
//	scanf("%lf %d %d %d", &price, &month, &data, &flag);
//	if (month == 11 && data == 11)
//	{
//		if (flag == 1)
//		{
//			price = price * 0.7 - 50;
//		}
//		else
//		{
//			price = price * 0.7;
//		}
//	}
//	else if (month == 12 && data == 12)
//	{
//		if (flag == 1)
//		{
//			price = price * 0.8 - 50;
//		}
//		else 
//		{
//			price = price * 0.8;
//		}
//	}
//	else
//	{
//		price = price;
//	}
//
//	printf("%.2lf\n", price);
//	return 0;
//}

////去掉数组中的某个特定值并且返回新的数组
//#include<stdio.h>
//int main()
//{
//	int arr[6] = {0};
//	int num = 0;
//	num = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < num; i ++ )
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int val = 0;
//	scanf("%d", &val);
//	int src = 0;
//	int dst = 0;
//	while (src < num)
//	{
//		if (arr[src] != val)
//		{
//			arr[dst++] = arr[src++];
//			
//		}
//		else
//		{
//			src++;
//		}
//		
//	}
//	
//	for (int i = 0; i < dst; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//BC64 牛牛的快递
#include<stdio.h>
int main()
{
	float a = 0;
	char b = 0;
	int fee = 0;
	scanf("%f %c", &a, &b);
	if (b == 'y')
	{
		b = 1;
	}
	else if(b == 'n')
	{
		b = 0;
	}
	if (a <= 1)
	{
		fee = 20 + b * 5;
	}
	else if (a > 1)
	{
		if ((a - 1) < 1)
		{
			fee = 20 + 1 + b * 5;
		}
		else if((int)(a-1.0)*10 % 10 == 0)
		{
			fee = 20 + (a - 1) / 1 * 1 + b * 5;
		}
		else
		{
			fee = 20 + (a - 1) / 1 * 1 + 1 + b * 5;
		}
	}
	printf("%d\n", fee);
	return 0;
}