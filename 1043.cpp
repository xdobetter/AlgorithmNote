///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.01                                                                            
// *                                                                                                 
// * Describe: 判断这串序列是否是该二叉排序树的先序序列或是该二叉排序树的镜像树的先序序列                                                  
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
//	root->lchild = root->rchild = NULL;//左右孩子置为空
//	return root;
//}
////插入
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
////BST的先序遍历
//void preOrder(node* root)
//{
//	if (root==NULL)
//	{
//		return;
//	}
//	pre.push_back(root->data);//加入到序列
//	preOrder(root->lchild);
//	preOrder(root->rchild);
//}
////BST的Mirror的先序遍历
//void preMOrder(node* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	preM.push_back(root->data);//加入到序列
//	preMOrder(root->rchild);
//	preMOrder(root->lchild);
//}
////BST的后序遍历
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
////BST的Mirror的后序遍历
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
//	scanf("%d", &n);//输入n
//	for (int i=0;i<n;i++)
//	{
//		int data;
//		scanf("%d", &data);
//		origin.push_back(data);
//		insert(root, data);//插入
//	}
//	//调用四次遍历
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
