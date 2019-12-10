/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *                                                                                                 
 * Blog: https://blog.csdn.net/weixin_41234001                                      
 *                                                                                                 
 * Author: DoBetter                                                               
 *                                                                                                 
 * Time: 2019.12.10                                                                           
 *                                                                                                 
 * Describe: 归并排序和插入排序的实现                                             
 *                                                                                                 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn = 110;
int n;
bool flag = false;
vector<int> inputVec(maxn),sortVec(maxn),tempVec(maxn);
void printVec();
void Merge(vector<int>& vec1, vector<int>& temp1, int left, int center, int right);
//归并排序——这个好难，使用递归不好求，要使用非递归
void MergeSort(vector<int>&vec1,vector<int>&temp1,int left,int right,bool f)
{
	
	if (left<right)//left>=right跳出
	{
		if (flag)
		{
			printVec();
			return;
		}
		int center = (left + right) / 2;
		MergeSort(vec1, temp1, left, center,flag);//分左边
		
		if (vec1 == tempVec&&flag==false)
		{
			printf("Merge Sort\n");
			flag = true;
		}
		MergeSort(vec1, temp1, center + 1, right,flag);//分右边
		Merge(vec1, temp1, left,center, right);//合并
		
	}
}
//合并函数
void Merge(vector<int>& vec1, vector<int>& temp1, int left,int center, int right)
{
	int i = left;
	int j = center + 1;//j
	for (int k=left;k<=right;k++)//合并到temp数组中
	{
		if (i > center)//左边已经全部加入到temp中，则把余下的右边全部放到temp中
		{
			temp1[k] = vec1[j++];
		}
		else if (j > right)
		{
			temp1[k] = vec1[i++];
		}else if (vec1[i]<vec1[j])//如果左边小于右边
		{
			temp1[k] = vec1[i++];
		}
		else 
		{
			temp1[k] = vec1[j++];
		}
	}
	//把temp中的元素赋值给vec1
	for (int k=left;k<=right;k++)
	{
		vec1[k] = temp1[k];
	}
}
//输出
void printVec()
{
	for (int i=1;i<=n;i++)
	{
		printf("%d", inputVec[i]);
		if (i<n)
		{
			printf(" ");
		}
	}
}
int main()
{
	scanf("%d", &n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d", &inputVec[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &tempVec[i]);
	}
	//printVec();
	MergeSort(inputVec, tempVec, 1, 10,flag);
	return 0;
}