/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *                                                                                                 
 * Blog: https://blog.csdn.net/weixin_41234001                                      
 *                                                                                                 
 * Author: DoBetter                                                               
 *                                                                                                 
 * Time: 2019.12.10                                                                           
 *                                                                                                 
 * Describe: �鲢����Ͳ��������ʵ��                                             
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
//�鲢���򡪡�������ѣ�ʹ�õݹ鲻����Ҫʹ�÷ǵݹ�
void MergeSort(vector<int>&vec1,vector<int>&temp1,int left,int right,bool f)
{
	
	if (left<right)//left>=right����
	{
		if (flag)
		{
			printVec();
			return;
		}
		int center = (left + right) / 2;
		MergeSort(vec1, temp1, left, center,flag);//�����
		
		if (vec1 == tempVec&&flag==false)
		{
			printf("Merge Sort\n");
			flag = true;
		}
		MergeSort(vec1, temp1, center + 1, right,flag);//���ұ�
		Merge(vec1, temp1, left,center, right);//�ϲ�
		
	}
}
//�ϲ�����
void Merge(vector<int>& vec1, vector<int>& temp1, int left,int center, int right)
{
	int i = left;
	int j = center + 1;//j
	for (int k=left;k<=right;k++)//�ϲ���temp������
	{
		if (i > center)//����Ѿ�ȫ�����뵽temp�У�������µ��ұ�ȫ���ŵ�temp��
		{
			temp1[k] = vec1[j++];
		}
		else if (j > right)
		{
			temp1[k] = vec1[i++];
		}else if (vec1[i]<vec1[j])//������С���ұ�
		{
			temp1[k] = vec1[i++];
		}
		else 
		{
			temp1[k] = vec1[j++];
		}
	}
	//��temp�е�Ԫ�ظ�ֵ��vec1
	for (int k=left;k<=right;k++)
	{
		vec1[k] = temp1[k];
	}
}
//���
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