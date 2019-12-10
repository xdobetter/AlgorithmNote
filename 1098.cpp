///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.10                                                                            
// *                                                                                                 
// * Describe: 根据输入的序列，判断其为插入排序还是删除排序，并输出输入的序列的下一次该类型排序的结果             
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
///*思路
//1、输入
//2、执行一遍插入排序，检查排序过程中是否会与给出的序列相同，如相同，则输出，并跳出
//3、执行一遍堆排序，其他同上
//*/
//#include <iostream>
//#include <vector>
//#include <stdio.h>
//using namespace std;
//const int maxn = 110;
//int n;
//vector<int> seqInput(maxn),seqSort(maxn);
//bool insertSort(vector<int> &vec)//递增排序
//{
//	bool flag = false;//控制再输出一次
//	for (int i=	1;i<=n;i++)//要插入的次数为size-1
//	{
//		int j;//存储要插入的位置
//		int temp = vec[i + 1];//从第二个元素开始找位置
//		for (j=i+1;j>0&& temp < vec[j - 1];j--)//寻找位置，小于前面一个元素
//		{
//			vec[j] = vec[j - 1];//如果前一个元素大于它，则向后移
//		}
//		vec[j] = temp;
//		//判断排序过程中是否出现该序列
//		if (flag) return true;
//		if (vec==seqSort)
//		{
//			printf("Insertion Sort\n");
//			flag = true;
//		}
//	}
//	return false;
//}
//void downAdjust(vector<int>& vec, int low, int high)
//{
//	int i = low;//当前元素所在位置,从1开始
//	int j = (low) * 2;//其左孩子
//	while (j <= high)//当还有左孩子时
//	{
//		if (j + 1 <= high && vec[j + 1] > vec[j])//还有右孩子,右孩子大于左孩子
//		{
//			j = j + 1;
//		}
//		if (vec[j] > vec[i])//孩子大于它
//		{
//			swap(vec[i], vec[j]);
//			i = j;//当前父亲的位置
//			j = i * 2;//子孩子的位置
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//bool heapSort(vector<int>& vec)
//{
//	bool flag = false;
//	for (int i=n;i>=1;i--)
//	{
//		//与头元素交换
//		swap(vec[1], vec[i]);
//		//向下交换
//		downAdjust(vec, 1, i - 1);
//		//判断排序过程中是否出现该序列
//		if (flag) return true;
//		if (vec == seqSort)
//		{
//			printf("Heap Sort\n");
//			flag = true;
//		}
//	}
//	return false;
//}
////创建堆
//void createHeap(vector<int>& vec)
//{
//	for (int i=n/2;i>=1;i--)
//	{
//		downAdjust(vec, i, n);
//	}
//}
////打印
//void printVec(vector<int> vec)
//{
//	for (int i=1;i<=n;i++)
//	{
//		printf("%d", vec[i]);
//		if (i<n)
//		{
//			printf(" ");
//		}
//	}
//}
//int main()
//{
//
//	scanf("%d", &n);
//	//输入
//	for (int i=1;i<=n;i++)
//	{
//		int input;
//		scanf("%d", &input);
//		seqInput[i] = input;
//	}
//	vector<int> temp(seqInput);
//	for (int i = 1; i <= n; i++)
//	{
//		int input;
//		scanf("%d", &input);
//		seqSort[i] = input;
//	}
//	if (insertSort(seqInput))  printVec(seqInput);
//	createHeap(temp);//创建堆，由于前面已经改变了seqInput，因此此处要使用temp
//	if (heapSort(temp))	{printVec(temp);}
//	return 0;
//}