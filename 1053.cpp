#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int maxn = 110;
//�������ṹ
typedef int myData;
struct node
{
	myData weight;//������
	vector<int> child;//�Ӻ���
}Node[maxn];
//����洢·��������
int Path[maxn];
//����ȽϺ���
//�Ӵ�С���򡪡��Լ�д���ˣ�Ҫ��ϸ
bool cmp(int A, int B) {
	return Node[A].weight > Node[B].weight;
}
void DFS(int index, int s, int numNode);
int N, M, S;
int main()
{
	//������������Ҷ�ӽ������Ҫ�ҵ�Ȩ��ֵ

	scanf("%d%d%d", &N, &M, &S);
	//����ÿ���ڵ��Ȩ��
	for (int i=0;i<N;i++)
	{
		scanf("%d", &Node[i].weight);
	}
	//����ÿ���ڵ��Ҷ�ӽڵ�ı�ż�����
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
		//�Ըý���µ�Ҷ�ӽڵ��������
		sort(Node[T].child.begin(), Node[T].child.end(), cmp);
	}
	//·���ĵ�һ���������Ϊ0�Ž��
	Path[0] = 0;
	//��ʼѰ��
	DFS(0,Node[0].weight,1);
	return 0;
}
//����·��
//index��ǰ���ʵĽ���ţ�s�Ѽ���Ľ���Ȩֵ֮�ͣ���ǰ������
void DFS(int index,int s,int numNode) 
{
	//���s�Ѿ��ȸ����Ĵ�return
	if (s>S){return;}
	//����������
	if (s==S)
	{
		//�������Ϊ��,�������
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
			return;//����
		}
		//������Ϊ��
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
				//�������뵽·����
				Path[numNode] =child ;
				DFS(child, s + Node[child].weight, numNode + 1);
			}
	}
}

