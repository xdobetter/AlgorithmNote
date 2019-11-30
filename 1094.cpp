///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.11.30                                                                            
// *                                                                                                 
// * Describe: BFS求树的那一层结点数最多，并输出结点数和层号                                            
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
////读题10min
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include<queue>
//using namespace std;
////定义树
//const int maxn = 110;
//struct node
//{
//	int layer;//记录层数
//	vector<int> child;
//}Node[maxn];
//int Depth[maxn];//记录每层所对应的结点数
////int layer = 1;
//int maxLayer = 0;
//void BFS(int index);
//int main()
//{
//	//输入
//	int N, M;
//	scanf("%d%d",&N ,&M);
//	//构造树
//	for (int i=0;i<M;i++)
//	{
//		int ID, K;
//		scanf("%d%d", &ID, &K);
//		for (int j=0;j<K;j++)
//		{
//			int child;
//			scanf("%d", &child);
//			Node[ID].child.push_back(child);
//		}
//	}
//	Node[1].layer = 1;
//	BFS(1);
//	//输出最大层和层号
//	int indexLayer = 1;
//	Depth[1] = 1;
//	for (int i=2;i<=maxLayer;i++)
//	{
//			if (Depth[i]>Depth[indexLayer])
//			{
//				indexLayer = i;
//			}
//	}
//	cout << Depth[indexLayer] << " " << indexLayer;
//	return 0;
//}
//void BFS(int index) 
//{
//	queue<int> Q;
//	Q.push(index);//根节点入栈
//	while (!Q.empty())
//	{
//		int front = Q.front();
//		Q.pop();//首结点出队
//		int layer = Node[front].layer + 1;
//		if (Node[front].child.size()!=0)
//		{
//			if (layer > maxLayer)
//			{
//				maxLayer = layer;
//			}
//			Depth[layer] += Node[front].child.size();
//		/*	cout <<"Depth[layer]" <<Depth[layer]<<"layer"<<layer<< endl;*/
//		}
//		
//		for (int i=0;i<Node[front].child.size();i++)
//		{
//			int child = Node[front].child[i];
//			Node[child].layer = layer;
//			Q.push(Node[front].child[i]);//子结点入队
//		}
//	}
//}
//
//
//
