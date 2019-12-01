///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.01                                                                            
// *                                                                                                 
// * Describe: AVL���Ľ�������                                           
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct node
//{
//	int data, height;//height�洢���ĸ߶�
//	node* lchild, * rchild;//���Һ���
//};
////�����½��
//node* newNode(int v)
//{
//	node* root = new node;
//	root->data = v;
//	root->height = 1;//��ʼ�߶�Ϊ1
//	root->lchild = root->rchild = NULL;//���Һ�����Ϊ��
//	return root;//���ؽ��
//}
////��ȡ��ǰ����height
//int getHeight(node* root)
//{
//	if (root == NULL) return 0;//���Ϊ�գ���height=0��
//	return root->height;//����տ�ʼд����
//}
////����ƽ������
//int getBalanceFactor(node* root)
//{
//	return getHeight(root->lchild) - getHeight(root->rchild);
//}
////���½���height
//void updateHeight(node* root)
//{
//	root->height = max(getHeight(root->lchild), getHeight(root->rchild))+1;
//}
////����
//void search(node* root,int x)
//{
//	if (root==NULL)
//	{
//		printf("��Ϊ��\n");
//		return;
//	}
//	if (root->data==x)
//	{
//		printf("�ҵ���");
//	}
//	else if(x<root->data)
//	{
//		search(root->lchild,x);
//	}
//	else
//	{
//		search(root->rchild, x);
//	}
//}
///*����*/
//
////����
//void L(node*& root)
//{
//	node* temp=root->rchild;//rootָ����A,tempָ����B
//	//��B����������ΪA��������
//	root->rchild = temp->lchild;
//	//��A��ΪB��������
//	temp->lchild = root;
//	//���±任����ĸ߶�
//	updateHeight(root);
//	updateHeight(temp);
//	//�����ڵ�����ΪB���
//	root = temp;
//}
////����
//void R(node*& root)
//{
//	node* temp = root->lchild;//temp���Ϊroot����������
//	//��A����������ΪB��������
//	root->lchild = temp->rchild;
//	//��B��ΪA��������
//	temp->rchild = root;
//	//���±任����ĸ߶�
//	updateHeight(root);
//	updateHeight(temp);
//	//�����ڵ�����ΪA���
//	root = temp;
//}
//void insert(node*& root, int x)
//{
//	if (root == NULL)
//	{
//		root = newNode(x);//������
//		return;
//	}
//	if (x<root->data)
//	{
//		insert(root->lchild, x);
//		//��������
//		updateHeight(root);
//		if (getBalanceFactor(root)==2)
//		{
//			if (getBalanceFactor(root->lchild)==1)//LL��
//			{
//				R(root);//�Լ���������
//			}
//			else if(getBalanceFactor(root->lchild) == -1)//LR��
//			{
//				L(root->lchild);//�Ƚ�������
//				R(root);//�ٽ�������
//			}
//		}
//	}
//	else
//	{
//		insert(root->rchild, x);
//		//��������
//		updateHeight(root);
//		if (getBalanceFactor(root)==-2)
//		{
//			if (getBalanceFactor(root->rchild)==-1)//RR��
//			{
//				L(root);//ֱ�ӽ�������
//			}
//			else if (getBalanceFactor(root->rchild)==1)//RL��
//			{
//				R(root->rchild);//�Ƚ�������
//				L(root);//�ٽ�������
//			}
//		}
//	}
//}
////AVL���Ľ���
//node* CreateTree(int A[],int n)
//{
//	node* root = NULL;
//	for (int i=0;i<n;i++)
//	{
//		insert(root, A[i]);//������
//	}
//	return root;//���ظ����
//}
//int A[25];
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i=0;i<n;i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	node* root = CreateTree(A, n);
//	printf("%d", root->data);
//	return 0;
//}
//
//
