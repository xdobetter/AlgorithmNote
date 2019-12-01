/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *                                                                                                 
 * Blog: https://blog.csdn.net/weixin_41234001                                      
 *                                                                                                 
 * Author: DoBetter                                                               
 *                                                                                                 
 * Time: 2019.11.30                                                                            
 *                                                                                                 
 * Describe: ����һ�����к�BST�Ľṹ������BST�Ĺ���                                            
 *                                                                                                 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 */
//����10min+23minд����
//�������Ľṹ���γ����ṹ
//�������У��������򣬵õ�ǰ������
//�������������������ͬʱ���и�ֵ
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
int cnt = 0;//��������ո�
//�������
void inOrder(int root)
{
	if (root==-1) return;
	inOrder(Node[root].child[0]);//���������
	Node[root].data = Num[index++];
	inOrder(Node[root].child[1]);//��������ҽ��
}
//�������
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
		Q.pop();//����
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
		//����ý������Һ��ӣ�-1����Ϊ��
		scanf("%d%d", &Node[i].child[0],&Node[i].child[1]);
	}
	for (int i=0;i<n;i++)
	{
		//�������������
		scanf("%d", &Num[i]);
	}
	//����
	sort(Num, Num + n);
	//�������
	inOrder(0);
	//������������
	layerOrder(0);
	return 0;
}