#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
 作者：MuYangyo
 机器：DR
 编译器：VS2019
*/

/*
具体做法：
	step 1：双指针指向旋转后数组的首尾，作为区间端点。
	step 2：若是区间中点值大于区间右界值，则最小的数字一定在中点右边。
	step 3：若是区间中点值等于区间右界值，则是不容易分辨最小数字在哪半个区间，比如[1,1,1,0,1]，应该逐个缩减左右界。
	step 4：若是区间中点值小于区间右界值，则最小的数字一定在中点左边。
	step 5：通过调整区间最后即可锁定最小值所在。
*/
int minNumberInRotateArray(int* parr, int longth)
{
	int z = 0;
	int y = longth - 1;
	int mid = (z + y) / 2;
	int flag = 1;
	while (z < y)
	{
		if (parr[z] < parr[y])
			return parr[z];
		if (parr[mid] > parr[y])
		{
			z = mid + 1;
			mid = (z + y) / 2;
		}
		else if (parr[mid] == parr[y])
		{
			if (flag == 1)
			{
				flag = 0;
				y--;
			}
			else
			{
				flag = 1;
				z++;
			}
		}
		else if (parr[mid] < parr[y])
		{
			y = mid ;
			mid = (z + y) / 2;
		}
	}
	return parr[z];
}
int main()
{
	int arr[] = { 2,2,1,2,2,2 };
	int arr_longth = sizeof(arr) / sizeof(arr[0]);
	int ret = minNumberInRotateArray(arr, arr_longth);
	printf("%d", ret);
	return 0;
}