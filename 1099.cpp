/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *                                                                                                 
 * Blog: https://blog.csdn.net/weixin_41234001                                      
 *                                                                                                 
 * Author: DoBetter                                                               
 *                                                                                                 
 * Time: 2019.11.30                                                                            
 *                                                                                                 
 * Describe: 给出一串序列和BST的结构，进行BST的构建                                            
 *                                                                                                 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 */
//读题10min+23min写代码
//输入树的结构，形成树结构
//输入序列，进行排序，得到前序序列
//对树进行先序遍历，并同时进行赋值
#include <iostream>
#include<algorithm>
#include <queue>
using namespace std;
int n;
const int maxn = 110;
struct node
{
	int data;
	int child[2];
}Node[maxn];
int Num[maxn];
int index = 0;
int cnt = 0;//控制输出空格
//中序遍历
void inOrder(int root)
{
	if (root==-1) return;
	inOrder(Node[root].child[0]);//序遍历左结点
	Node[root].data = Num[index++];
	inOrder(Node[root].child[1]);//中序遍历右结点
}
//层序遍历
void layerOrder(int root)
{
	queue<int> Q;
	Q.push(root);
	while (!Q.empty())
	{
		int front = Q.front();
		printf("%d", Node[front].data);
		if (cnt<n-1)
		{
			printf(" ");
		}
		cnt++;
		Q.pop();//出队
		for (int i=0;i<2;i++)
		{
			if (Node[front].child[i]!=-1)
			{
				Q.push(Node[front].child[i]);
			}
		}
	}
}
int main()
{
	scanf("%d", &n);
	for (int i=0;i<n;i++)
	{
		//输入该结点的左右孩子，-1代表为空
		scanf("%d%d", &Node[i].child[0],&Node[i].child[1]);
	}
	for (int i=0;i<n;i++)
	{
		//输入给定的序列
		scanf("%d", &Num[i]);
	}
	//排序
	sort(Num, Num + n);
	//中序遍历
	inOrder(0);
	//层序遍历并输出
	layerOrder(0);
	return 0;
}