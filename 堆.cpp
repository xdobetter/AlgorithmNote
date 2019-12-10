///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.07                                                                            
// *                                                                                                 
// * Describe: �ѵĴ�������������                                     
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include<iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//const int maxn = 100;
//vector<int> heap(maxn);//�洢��
//int n = 0;//��ʾ��ǰ�Ѵ洢��Ԫ�ظ���
//
////���µ���
//void downAdjust(int low,int high)
//{
//	int i = low, j = i * 2;//iΪҪ������㣬jΪ������
//	while (j<=high)//ѭ���߽����ӵ�2��С��high
//	{
//		//����Һ��Ӵ��ڣ����Һ��ӵ�ֵ��������
//		if (j+1<=high&&heap[j]<heap[j+1])//j+1<=high�ж��Һ����Ƿ����
//		{
//			j = j + 1;
//		}
//		//����ý��ֵС���亢�ӽ��ֵ�����н���
//		if (heap[j]>heap[i])
//		{
//			swap(heap[j], heap[i]);//������Ԫ��ֵ���н���
//			i = j;//����iΪҪ�����Ľ��
//			j = 2 * i;//j����Ϊ���Ӻ���
//		}
//		else//�������ڣ����˳�ѭ��
//		{
//			break;
//		}
//	}
//}
////������
//void createHeap()
//{
//	for (int i=n/2;i>=1;i--)
//	{
//		downAdjust(i, n);
//	}
//}
////ɾ���Ѷ�Ԫ��
//void deleteHeapTop()
//{
//	heap[1] = heap[n--];//���һ��Ԫ�ظ��ǶѶ�Ԫ�أ��Ѵﵽɾ��Ч��
//	downAdjust(1, n);//�����ѽṹ
//}
////��heap������[low,high]��Χ�������ϵ���
//void upAdjust(int low, int high)
//{
//	int i = high, j = i / 2;//iΪ��������㣬jΪ�丸��
//	while (j>=low)//������[low,high]��Χ��
//	{
//		//����ȨֵС�����������i��Ȩֵ
//		if (heap[i]>heap[j])
//		{
//			swap(heap[j], heap[i]);//�������׺����������
//			i = j;//����iΪ��������㣬jΪi�ĸ���
//			j = i / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
////���Ԫ��
//void insert(int x)
//{
//	heap[++n] = x;//��Ԫ�ظ�����1��Ȼ������ĩλ��ֵΪx
//	upAdjust(1, n);//���ϵ����¼���Ľ��
//}
////�������
//void layerOrder(int root)
//{
//	queue<int> Q;
//	Q.push(root);//���ڵ����
//	while (!Q.empty())//��Ϊ��
//	{
//		//�����Ԫ�أ�������
//		int front = Q.front();
//		Q.pop();
//		printf("%d ", heap[front]);
//		if (front * 2 <= n) Q.push(front * 2);
//		if (front * 2 + 1 <= n) Q.push(front * 2 + 1);
//	}
//}
////������
//void heapSort()
//{
//	createHeap();//����
//	for (int i = n; i > 1; i--)//����ö�٣�ֱ������ֻ��һ��Ԫ��
//	{
//		swap(heap[i], heap[1]);//���Ѷ�Ԫ����heap[i]���н���
//		downAdjust(1, i - 1);//���µ���
//	}
//}
//int main()
//{
//	for (int i = 0; i <5; i++)
//	{
//		insert(i*i);//���β��룬Ҳ�Ƕѽ����Ĺ���
//	}
//	layerOrder(1);
//	cout << endl;
//	createHeap();
//	layerOrder(1);
//	cout << endl;
//	heapSort();
//	layerOrder(1);
//
//	return 0;
//}