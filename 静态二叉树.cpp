#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef int myData;
//��̬������
const int maxn = 100;
struct node
{
	myData data;//������
	int lchild;//ָ����������ָ����
	int rchild;//ָ����������ָ����
}Node[maxn];//�ڵ����飬maxnΪ������޸���
//���ľ�ָ̬��
int index = 0;
int newNode(int v) {//����һ��Node�����еĽ����µĽ�㣬indexΪ���±�
	Node[index].data = v;//������Ϊv
	//��-1��maxn��ʾ�գ�����ķ�ΧΪ0~maxn-1
	Node[index].lchild = -1;
	Node[index].rchild = -1;
	return index++;
}
//����
void search(int root, int x, int newdata) {
	if (root==-1)//��-1������NULL
	{
		return;//����������ͬ���ݹ�߽�
	}
	if (Node[root].data == x)//�ҵ�x
	{
		printf("������λ��:%d", root);
		cout << "newdata��ֵΪ"<<newdata << endl;
	}
	//�ݹ�ʽ
	search(Node[root].lchild, x, newdata);
	search(Node[root].rchild, x, newdata);
}
//����
void insert(int& root, int x) {//��Ҫ������
	if (root==-1)//����
	{
		root = newNode(x);//��root�����µĽ��
		return;
	}
	//�ݹ�ʽ
	if (Node[root].lchild==-1)//�Զ��壬���������Ϊ��
	{
		insert(Node[root].lchild, x);
	}
	else
	{
		insert(Node[root].rchild, x);
	}
}
//������̬������
int Create(int data[], int n) {
	int root = -1;//�½������root;
	for (int i=0;i<n;i++)
	{
		insert(root, data[i]);//������
	}
	return root;//���ظ��ڵ�
}
//�������
void preOrder(int root) {
	//�ݹ�߽�
	if (root==-1)
	{
		return;
	}
	//�ȷ��ʸ��ڵ�
	printf("%d ", Node[root].data);
	//���������������
	preOrder(Node[root].lchild);
	//�������������
	preOrder(Node[root].rchild);
}
//�������
void inOrder(int root) {
	//�ݹ�߽�
	if (root==-1)
	{
		return;
	}
	//�������������
	inOrder(Node[root].lchild);
	//���ʸ����
	printf("%d ", Node[root].data);
	//�������������
	inOrder(Node[root].rchild);
}
//�������
void lastOrder(int root)
{
	//�ݹ�߽�
	if (root==-1)
	{
		return;
	}
	//�������������
	lastOrder(Node[root].lchild);
	//�������������
	lastOrder(Node[root].rchild);
	//���ʸ����
	printf("%d ", Node[root].data);
}

//��α���
void LayerOrder(int root)
{
	queue<int> q;
	q.push(root);//���ڵ����
	while (!q.empty())//���в�Ϊ��
	{
		int front = q.front();
		q.pop();//ȡ������Ԫ��
		printf("%d ", Node[front].data);//�������Ԫ��
		if (Node[front].lchild!=-1)//��������Ϊ�գ����������
		{
			q.push(Node[front].lchild);
		}
		if (Node[front].rchild!=-1)//��������Ϊ�գ����������
		{
			q.push(Node[front].rchild);
		}
	}
}

int main()
{ 
	int A[5];
	for (int i=0;i<5;i++)
	{
		A[i] = i;
	}
	int root=Create(A, 5);//����������
	preOrder(root);//������� 0 1 2 3 4
	cout << endl;
	inOrder(root);//�������1 0 3 2 4
	cout << endl;
	lastOrder(root);//������� 1 3 4 2 0
	cout << endl;
	LayerOrder(root);//��α��� 0 1 2 3 4
	return 0;
}
//���Ľṹ����
//  0
//1   2
//   3 4
 