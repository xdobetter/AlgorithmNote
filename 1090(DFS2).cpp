///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.11.30                                                                            
// *                                                                                                 
// * Describe: $Used to do something$                                             
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
// //13min种读题
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int maxn = 100010;
////定义树
//struct node
//{
//	vector<int> child;
//}Node[maxn];
//
//int N;
//double P, T;
//
//double maxNum = 0;//最大值
//int countNum = 0;//统计最大个数
//void DFS(int index, int layer);
//int main()
//{
//	//输入
//	scanf("%d %lf %lf", &N, &P, &T);
//	T = (100 + T) / 100;
//	//输入树
//	int root;
//	for (int i = 0; i < N; i++)
//	{
//		int k;
//		scanf("%d", &k);
//		if (k == -1)
//		{
//			root = i;
//			continue;
//		}
//		Node[k].child.push_back(i);
//	}
//	//DFS
//	int layer = 0;
//	DFS(root, layer);
//	//输出
//	printf("%.2f %d",maxNum,countNum);
//	return 0;
//}
//
//void DFS(int index, int layer) {
//	//为空
//	if (Node[index].child.size() == 0)
//	{
//		double temp = P * pow(T, layer);
//		if (temp>maxNum)
//		{
//			maxNum = temp;
//			countNum = 1;
//		}else if (temp==maxNum)
//		{
//			countNum++;
//		}
//		return;
//	}
//	//
//	for (int i = 0; i < Node[index].child.size(); i++)
//	{
//		int child = Node[index].child[i];
//		DFS(child, layer + 1);
//	}
//}