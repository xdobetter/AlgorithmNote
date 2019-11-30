/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *                                                                                                 
 * Blog: https://blog.csdn.net/weixin_41234001                                      
 *                                                                                                 
 * Author: DoBetter                                                               
 *                                                                                                 
 * Time: 2019.11.30                                                                            
 *                                                                                                 
 * Describe: ͳ��ÿһ���Ҷ�ӽ��ĸ���                                            
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
		scanf("%d", &k);//�Ӻ��ӵĸ���
		for (int j=0;j<k;j++)
		{
			int chlld;
			scanf("%d", &chlld);//�����Ӻ���
			Node[ID].child.push_back(chlld);
		}
		//printf("��������");
	}
	Node[1].layer = 1;//��1�㣬����Ϊ1
	BFS(1);

	//ѭ�����
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
	Q.push(root);//���
	while (!Q.empty())
	{
		int front = Q.front();
		Q.pop();//����
		//printf("%d\n", front);
		int h = Node[front].layer;
		maxDep = max(maxDep, h);//����������
		if (Node[front].child.size()==0)//���ΪҶ�ӽ�㣬���Ӧ�Ĳ����+1
		{
			Depth[h]++;
			
		}
		else
		{
			int layer = h + 1;//����н�㣬��ǰ����+1
			for (int i = 0; i < Node[front].child.size(); i++) {
				{
					Node[Node[front].child[i]].layer = layer;//�ı��
					Q.push(Node[front].child[i]);//���
				}
			}
		}
		
		
		
	}
}