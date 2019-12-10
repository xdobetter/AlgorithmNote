///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.07                                                                            
// *                                                                                                 
// * Describe: 堆的创建，创建最大堆                                     
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include<iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//const int maxn = 100;
//vector<int> heap(maxn);//存储堆
//int n = 0;//表示当前堆存储的元素个数
//
////向下调整
//void downAdjust(int low,int high)
//{
//	int i = low, j = i * 2;//i为要调整结点，j为其左孩子
//	while (j<=high)//循环边界左孩子的2倍小于high
//	{
//		//如果右孩子存在，且右孩子的值大于左孩子
//		if (j+1<=high&&heap[j]<heap[j+1])//j+1<=high判断右孩子是否存在
//		{
//			j = j + 1;
//		}
//		//如果该结点值小于其孩子结点值，进行交换
//		if (heap[j]>heap[i])
//		{
//			swap(heap[j], heap[i]);//将两个元素值进行交换
//			i = j;//保持i为要调整的结点
//			j = 2 * i;//j继续为其子孩子
//		}
//		else//若不大于，则退出循环
//		{
//			break;
//		}
//	}
//}
////建立堆
//void createHeap()
//{
//	for (int i=n/2;i>=1;i--)
//	{
//		downAdjust(i, n);
//	}
//}
////删除堆顶元素
//void deleteHeapTop()
//{
//	heap[1] = heap[n--];//最后一个元素覆盖堆顶元素，已达到删除效果
//	downAdjust(1, n);//调整堆结构
//}
////对heap数组在[low,high]范围进行向上调整
//void upAdjust(int low, int high)
//{
//	int i = high, j = i / 2;//i为欲调整结点，j为其父亲
//	while (j>=low)//父亲在[low,high]范围内
//	{
//		//父亲权值小于欲调整结点i的权值
//		if (heap[i]>heap[j])
//		{
//			swap(heap[j], heap[i]);//交换父亲和欲调整结点
//			i = j;//保持i为欲调整结点，j为i的父亲
//			j = i / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
////添加元素
//void insert(int x)
//{
//	heap[++n] = x;//让元素个数加1，然后将数组末位赋值为x
//	upAdjust(1, n);//向上调整新加入的结点
//}
////层序输出
//void layerOrder(int root)
//{
//	queue<int> Q;
//	Q.push(root);//根节点入队
//	while (!Q.empty())//不为空
//	{
//		//获得首元素，并弹出
//		int front = Q.front();
//		Q.pop();
//		printf("%d ", heap[front]);
//		if (front * 2 <= n) Q.push(front * 2);
//		if (front * 2 + 1 <= n) Q.push(front * 2 + 1);
//	}
//}
////堆排序
//void heapSort()
//{
//	createHeap();//建堆
//	for (int i = n; i > 1; i--)//倒着枚举，直到堆中只有一个元素
//	{
//		swap(heap[i], heap[1]);//将堆顶元素与heap[i]进行交换
//		downAdjust(1, i - 1);//向下调整
//	}
//}
//int main()
//{
//	for (int i = 0; i <5; i++)
//	{
//		insert(i*i);//依次插入，也是堆建立的过程
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