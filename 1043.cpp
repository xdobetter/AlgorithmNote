///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.01                                                                            
// *                                                                                                 
// * Describe: �ж��⴮�����Ƿ��Ǹö������������������л��Ǹö����������ľ���������������                                                  
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//
//#include <iostream>
//#include <vector>
//using namespace std;
//struct node
//{
//	int data;
//	node* lchild;
//	node* rchild;
//};
//node* NewNode(int i)
//{
//	node* root = new node;
//	root->data = i;
//	root->lchild = root->rchild = NULL;//���Һ�����Ϊ��
//	return root;
//}
////����
//void insert(node*& root, int x)
//{
//	if (root==NULL)
//	{
//		root = NewNode(x);
//		return;
//	}
//	if (x<root->data)
//	{
//		insert(root->lchild, x);
//	}
//	else 
//	{
//		insert(root->rchild, x);
//	}
//}
//vector<int> origin, pre, preM, post, postM;
////BST���������
//void preOrder(node* root)
//{
//	if (root==NULL)
//	{
//		return;
//	}
//	pre.push_back(root->data);//���뵽����
//	preOrder(root->lchild);
//	preOrder(root->rchild);
//}
////BST��Mirror���������
//void preMOrder(node* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	preM.push_back(root->data);//���뵽����
//	preMOrder(root->rchild);
//	preMOrder(root->lchild);
//}
////BST�ĺ������
//void postOrder(node* root)
//{
//	if (root==NULL)
//	{
//		return;
//	}
//	postOrder(root->lchild);
//	postOrder(root->rchild);
//	post.push_back(root->data);
//}
////BST��Mirror�ĺ������
//void postMOrder(node* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	postMOrder(root->rchild);
//	postMOrder(root->lchild);
//	postM.push_back(root->data);
//}
//int main()
//{
//	int n;
//	node* root = NULL;
//	scanf("%d", &n);//����n
//	for (int i=0;i<n;i++)
//	{
//		int data;
//		scanf("%d", &data);
//		origin.push_back(data);
//		insert(root, data);//����
//	}
//	//�����Ĵα���
//	preOrder(root);
//	preMOrder(root);
//	postOrder(root);
//	postMOrder(root);
//	if (origin==pre)
//	{
//		printf("YES\n");
//		for (int i=0;i<n;i++)
//		{
//			printf("%d", post[i]);
//			if (i<n-1)
//			{
//				printf(" ");
//			}
//		}
//	}
//	else if (origin==preM)
//	{
//		printf("YES\n");
//		for (int i=0;i<n;i++)
//		{
//			printf("%d", postM[i]);
//			if (i<n-1)
//			{
//				printf(" ");
//			}
//		}
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}
//
//
//
//
//
