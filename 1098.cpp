///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.10                                                                            
// *                                                                                                 
// * Describe: ������������У��ж���Ϊ����������ɾ�����򣬲������������е���һ�θ���������Ľ��             
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
///*˼·
//1������
//2��ִ��һ��������򣬼������������Ƿ���������������ͬ������ͬ���������������
//3��ִ��һ�����������ͬ��
//*/
//#include <iostream>
//#include <vector>
//#include <stdio.h>
//using namespace std;
//const int maxn = 110;
//int n;
//vector<int> seqInput(maxn),seqSort(maxn);
//bool insertSort(vector<int> &vec)//��������
//{
//	bool flag = false;//���������һ��
//	for (int i=	1;i<=n;i++)//Ҫ����Ĵ���Ϊsize-1
//	{
//		int j;//�洢Ҫ�����λ��
//		int temp = vec[i + 1];//�ӵڶ���Ԫ�ؿ�ʼ��λ��
//		for (j=i+1;j>0&& temp < vec[j - 1];j--)//Ѱ��λ�ã�С��ǰ��һ��Ԫ��
//		{
//			vec[j] = vec[j - 1];//���ǰһ��Ԫ�ش��������������
//		}
//		vec[j] = temp;
//		//�ж�����������Ƿ���ָ�����
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
//	int i = low;//��ǰԪ������λ��,��1��ʼ
//	int j = (low) * 2;//������
//	while (j <= high)//����������ʱ
//	{
//		if (j + 1 <= high && vec[j + 1] > vec[j])//�����Һ���,�Һ��Ӵ�������
//		{
//			j = j + 1;
//		}
//		if (vec[j] > vec[i])//���Ӵ�����
//		{
//			swap(vec[i], vec[j]);
//			i = j;//��ǰ���׵�λ��
//			j = i * 2;//�Ӻ��ӵ�λ��
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
//		//��ͷԪ�ؽ���
//		swap(vec[1], vec[i]);
//		//���½���
//		downAdjust(vec, 1, i - 1);
//		//�ж�����������Ƿ���ָ�����
//		if (flag) return true;
//		if (vec == seqSort)
//		{
//			printf("Heap Sort\n");
//			flag = true;
//		}
//	}
//	return false;
//}
////������
//void createHeap(vector<int>& vec)
//{
//	for (int i=n/2;i>=1;i--)
//	{
//		downAdjust(vec, i, n);
//	}
//}
////��ӡ
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
//	//����
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
//	createHeap(temp);//�����ѣ�����ǰ���Ѿ��ı���seqInput����˴˴�Ҫʹ��temp
//	if (heapSort(temp))	{printVec(temp);}
//	return 0;
//}