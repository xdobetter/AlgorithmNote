/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *                                                                                                 
 * Blog: https://blog.csdn.net/weixin_41234001                                      
 *                                                                                                 
 * Author: DoBetter                                                               
 *                                                                                                 
 * Time: 2019.11.30                                                                            
 *                                                                                                 
 * Describe: 统计每一层的叶子结点的个数                                            
 *                                                                                                 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 */
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
const int maxn = 110;
struct node
{
	int layer;
	vector<int> child;
}Node[maxn];
int Depth[maxn];
int maxDep=0;
int N, M;
void BFS(int root);
int main()
{
	scanf("%d %d", &N, &M);
	for (int i=0;i<M;i++)
	{
		int ID;
		scanf("%d", &ID);
		int k;
		scanf("%d", &k);//子孩子的个数
		for (int j=0;j<k;j++)
		{
			int chlld;
			scanf("%d", &chlld);//输入子孩子
			Node[ID].child.push_back(chlld);
		}
		//printf("读完了吗");
	}
	Node[1].layer = 1;//第1层，设置为1
	BFS(1);

	//循环输出
	for (int i=1;i<=maxDep;i++)
	{
		cout << Depth[i];
		if (i<maxDep)
		{
			cout << " ";
		}
	}
	return 0;
}
void BFS(int root) {
	queue<int> Q;
	Q.push(root);//入队
	while (!Q.empty())
	{
		int front = Q.front();
		Q.pop();//出队
		//printf("%d\n", front);
		int h = Node[front].layer;
		maxDep = max(maxDep, h);//更新最大深度
		if (Node[front].child.size()==0)//如果为叶子结点，则对应的层的数+1
		{
			Depth[h]++;
			
		}
		else
		{
			int layer = h + 1;//如果有结点，当前层数+1
			for (int i = 0; i < Node[front].child.size(); i++) {
				{
					Node[Node[front].child[i]].layer = layer;//改变层
					Q.push(Node[front].child[i]);//入队
				}
			}
		}
		
		
		
	}
}