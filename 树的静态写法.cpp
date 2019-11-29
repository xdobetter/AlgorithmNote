#include<iostream>
#include <vector>
#include <queue>
using namespace std;
const int maxn = 1000;
typedef int myData;
struct node
{
	myData data;//������
	vector<int> child;//ָ���򣬴�������ӽ����±�

}Node[maxn];
int index = 0;
int newNode(int v) {
	//��㸳ֵ
	Node[index].data = v;
	//�ӽ����Ϊ�գ���û������
	Node[index].child.clear();
	//���ؽ���±ꡪ������ط�ע�⣬��Ϊ�Լ���ʧ��
	return index++;
}
//�����������
void preOrder(int root) {
	//���ʸ��ڵ�
	printf("%d ", Node[root].data);
	//�����������
	for (int i=0;i<Node[root].child.size();i++)
	{
		preOrder(Node[root].child[i]);
	}
}
//���Ĳ�α���
void LayerOrder(int root) {
	queue<int> q;
	q.push(root);//���ڵ����
	while (!q.empty())//���в�Ϊ��
	{
		//���ʶ���Ԫ��
		int front = q.front();
		printf("%d ", front);//���
		//ȡ������Ԫ��
		q.pop();
		//���ӵ������
		for (int i=0;i<Node[front].child.size();i++)
		{
			q.push(Node[front].child[i]);
		}
	}
}







