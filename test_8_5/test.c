#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 1;//��ʼ��
//	while (i <= 10)
//	{
//		printf("%d", i);//�ж�
//		i++;//�޸�
//	}
//	return 0;
//}



//forѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//(��ʼ��;�ж�;�޸�)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		printf("hehe\n");
//	}
//	return 0;
//		
//}


//ǰ�պ�����
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



//for����


//forѭ�����жϲ���ʡ����ζ���жϻ�����
//int main()
//{
//
//	//forѭ�����жϲ���ʡ����ζ���жϻ�����
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	//ʡ�Գ�ʼ���ĺ��
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)//�˴�ʡ�Գ�ʼ��ֻ���ӡ����hehe
//	//		printf("hehe\n");
//	// }
//
//	//for (int i = 0; i < 10; i++)//c99֧������д��
//	//{                           //c++֧��
//	//	printf("hehe\n");
//	//}
//
//
//	//���ö����������
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\m");
//	}
//
//	return 0;
//}



//do......whileѭ��
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




//����n�Ľ׳�
//1*2*3.����*n

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
//			printf("�ҵ����±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//�۰����/���ֲ���

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
			printf("�ҵ��ˣ��±��ǣ�%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}

	return 0;
}