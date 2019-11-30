///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.11.30                                                                            
// *                                                                                                 
// * Describe: 求供应的最低价格及其个数                                            
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
////6分钟读题,24min解题
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//void DFS(int index, int layer);
//using namespace std;
//const int maxn = 100010;
//struct node
//{
//	vector<int> child;
//}Node[maxn];
//int N;
//double P, T;
//double minPrice=10000000;
//int num = 0;
//int main()
//{
//	scanf("%d %lf %lf", &N, &P, &T);
//	T = (100.0 + T) / 100;
//	for (int i=0;i<N;i++)
//	{
//		int k;
//		scanf("%d", &k);
//		for (int j=0;j<k;j++)
//		{
//			int index;
//			scanf("%d", &index);
//			Node[i].child.push_back(index);
//		}
//	}
//	DFS(0,0);
//	printf("%.4f %d", minPrice, num);
//	return 0;
//}
//void DFS(int index,int layer) {
//	if (Node[index].child.size()==0)
//	{
//		double temp = P * pow(T, layer);
//		if (temp<minPrice)
//		{
//			minPrice = temp;
//			num = 1;
//			
//		}else if (temp==minPrice)
//		{
//			num++;
//		}
//		return;
//	}
//	for (int i=0;i<Node[index].child.size();i++)
//	{
//		DFS(Node[index].child[i], layer + 1);
//	}
//}
