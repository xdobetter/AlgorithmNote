///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.01                                                                            
// *                                                                                                 
// * Describe: This is a implementation of BST                                            
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//
//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//typedef int myData;
//struct node
//{
//	myData data;
//	node* lchild;
//	node* rchild;
//};
//node* newNode(int v) {
//	node* Node = new node;//�½����
//	//������ֵ
//	Node->data = v;
//	//���Һ���Ϊ��
//	Node->lchild = NULL;
//	Node->rchild = NULL;
//	return Node;//�����½����ĵ�ַ
//}
//void search(node* root, int x)
//{
//	//���Ϊ��
//	if (root==NULL)
//	{
//		return;
//	}
//	//xС�������ֵ��������
//	if (x<root->data)
//	{
//		search(root->lchild, x);
//	}
//	//x�����ҽڵ��ֵ��������
//	else if (x>root->data)
//	{
//		search(root->rchild, x);
//	}
//	//���
//	else if (root->data==x)
//	{
//		printf("�ҵ���\n");
//	}
//}
////�������
//void insert(node*& root, int x)
//{
//	if (root==NULL)
//	{
//		//������˵������ʧ�ܣ�Ҳ������λ��
//		root = newNode(x);
//	}
//	//����߲���
//	if (x>root->data)
//	{
//		insert(root->rchild, x);
//	}
//	//���ұ߲���
//	else if (x<root->data)
//	{
//		insert(root->lchild, x);
//	}
//	//��Ȳ�����
//	else
//	{
//		return;
//	}
//}
////������
//const int maxn = 999;
//int a[maxn];
//node* Create(int data[],int n)
//{
//	node* root = NULL;//���ڵ���Ϊ��
//	for (int i=0;i<n;i++)
//	{
//		insert(root, data[i]);//����
//	}
//	return root;
//}
////��α���
//void LayerOrder(node* root)
//{
//	queue<node*> Q;
//	Q.push(root);//���ڵ���ջ
//	while (!Q.empty())
//	{
//		//���ʸ��ڵ�
//		node* front = Q.front();
//		printf("%d ", front->data);
//		//���ڵ��ջ
//		Q.pop();
//		if (front->lchild!=NULL)//���Ӳ�Ϊ��
//		{
//			Q.push(front->lchild);
//		}
//		if (front->rchild!=NULL)//�Һ��Ӳ�Ϊ��
//		{
//			Q.push(front->rchild);
//		}
//	}
//}
////ɾ����BST�Ƚ��ѵ�һ�㣬��ʱ��ѧ��֮������Ŀ�ٿ���
//int main()
//{
//	for (int i=0;i<5;i++)
//	{
//		a[i] = i;
//	}
//	node* root = Create(a, 5);
//	LayerOrder(root);//�������
//	return 0;
//}