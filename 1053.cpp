#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int maxn = 110;
//定义树结构
typedef int myData;
struct node
{
	myData weight;//数据域
	vector<int> child;//子孩子
}Node[maxn];
//定义存储路径的数组
int Path[maxn];
//定义比较函数
//从大到小排序——自己写错了，要心细
bool cmp(int A, int B) {
	return Node[A].weight > Node[B].weight;
}
void DFS(int index, int s, int numNode);
int N, M, S;
int main()
{
	//输入结点数，非叶子结点数，要找的权重值

	scanf("%d%d%d", &N, &M, &S);
	//输入每个节点的权重
	for (int i=0;i<N;i++)
	{
		scanf("%d", &Node[i].weight);
	}
	//输入每个节点的叶子节点的编号及个数
	for (int i=0;i<M;i++)
	{
		int T,K;
		scanf("%d%d", &T,&K);
		for (int i=0;i<K;i++)
		{
			int leaf;
			scanf("%d", &leaf);
			Node[T].child.push_back(leaf);
		}
		//对该结点下的叶子节点进行排序
		sort(Node[T].child.begin(), Node[T].child.end(), cmp);
	}
	//路径的第一个结点设置为0号结点
	Path[0] = 0;
	//开始寻找
	DFS(0,Node[0].weight,1);
	return 0;
}
//查找路径
//index当前访问的结点标号，s已加入的结点的权值之和，当前结点个数
void DFS(int index,int s,int numNode) 
{
	//如果s已经比给定的大，return
	if (s>S){return;}
	//如果两者相等
	if (s==S)
	{
		//如果子树为空,输出子树
		if (Node[index].child.size()==0)
		{
			for (int i=0;i<numNode;i++)
			{
				printf("%d", Node[Path[i]].weight);
				if (i!=numNode-1)
				{
					cout << " ";
				}
				else
				{
					cout << endl;
				}
			}
			return;//返回
		}
		//子树不为空
		else
		{
			return;
		}
	}
	if (Node[index].child.size() != 0)
	{
		for (int i = 0; i < Node[index].child.size(); i++)
			{
				int child = Node[index].child[i];
				//将结点加入到路径中
				Path[numNode] =child ;
				DFS(child, s + Node[child].weight, numNode + 1);
			}
	}
}

