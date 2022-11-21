#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//转换进制
//#include<stdio.h>
//void print(int x)
//{
//    if(x>1)
//    {
//        print(x/2);//1次方
//    }
//    printf("%d",x%2);
//}
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    print(n);
//    return 0;
//}
//矩阵的转置
//int main() 
//{
//    int h;
//    int l;
//    scanf("%d %d", &h, &l);
//    int arr[10][10];
//    for (int i = 0; i < h; i++)
//    {
//        for (int j = 0; j < l; j++)
//        {
//            int k = 0;
//            scanf("%d", &k);
//            arr[i][j] = k;
//        }
//    }
//
//    for (int i = 0; i < l; i++)
//    {
//        for (int j = 0; j < h; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[20] = { 0 };
	int i = 19;
	while (n)
	{
		if (n > 1)
		{
			arr[i] = n / 2;
			n = n % 2;
			i--;
		}
		else
		{
			arr[i] = n;
			i--;
			n = 0;
		}

	}
	for (int j = i; j < 20; j++)
	{
		printf("%d", arr[j]);
	}
	return 0;
}
