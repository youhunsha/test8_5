#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)
//	{
//		printf("%d", i);//判断
//		i++;//修改
//	}
//	return 0;
//}



//for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//(初始化;判断;修改)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		printf("hehe\n");
//	}
//	return 0;
//		
//}


//前闭后开区间
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}



//for变种


//for循环的判断部分省略意味着判断会恒成立
//int main()
//{
//
//	//for循环的判断部分省略意味着判断会恒成立
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	//省略初始化的后果
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)//此处省略初始化只会打印三个hehe
//	//		printf("hehe\n");
//	// }
//
//	//for (int i = 0; i < 10; i++)//c99支持这种写法
//	//{                           //c++支持
//	//	printf("hehe\n");
//	//}
//
//
//	//采用多个变量控制
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\m");
//	}
//
//	return 0;
//}



//do......while循环
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}




//计算n的阶乘
//1*2*3.。。*n

//int main()
//{
//	int i = 1;
//	int a = 0;
//	int ret = 1;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int b = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		b =b+ ret;
//	}
//	printf("%d", b);
//
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//折半查找/二分查找

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}

	return 0;
}