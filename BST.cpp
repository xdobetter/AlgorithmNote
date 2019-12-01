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
//	node* Node = new node;//新建结点
//	//数据域赋值
//	Node->data = v;
//	//左右孩子为空
//	Node->lchild = NULL;
//	Node->rchild = NULL;
//	return Node;//返回新建结点的地址
//}
//void search(node* root, int x)
//{
//	//结点为空
//	if (root==NULL)
//	{
//		return;
//	}
//	//x小于左结点的值，向左找
//	if (x<root->data)
//	{
//		search(root->lchild, x);
//	}
//	//x大于右节点的值，向右找
//	else if (x>root->data)
//	{
//		search(root->rchild, x);
//	}
//	//相等
//	else if (root->data==x)
//	{
//		printf("找到了\n");
//	}
//}
////插入操作
//void insert(node*& root, int x)
//{
//	if (root==NULL)
//	{
//		//空树，说明查找失败，也即插入位置
//		root = newNode(x);
//	}
//	//向左边插入
//	if (x>root->data)
//	{
//		insert(root->rchild, x);
//	}
//	//向右边插入
//	else if (x<root->data)
//	{
//		insert(root->lchild, x);
//	}
//	//相等不插入
//	else
//	{
//		return;
//	}
//}
////建立树
//const int maxn = 999;
//int a[maxn];
//node* Create(int data[],int n)
//{
//	node* root = NULL;//根节点设为空
//	for (int i=0;i<n;i++)
//	{
//		insert(root, data[i]);//插入
//	}
//	return root;
//}
////层次遍历
//void LayerOrder(node* root)
//{
//	queue<node*> Q;
//	Q.push(root);//根节点入栈
//	while (!Q.empty())
//	{
//		//访问根节点
//		node* front = Q.front();
//		printf("%d ", front->data);
//		//根节点出栈
//		Q.pop();
//		if (front->lchild!=NULL)//左孩子不为空
//		{
//			Q.push(front->lchild);
//		}
//		if (front->rchild!=NULL)//右孩子不为空
//		{
//			Q.push(front->rchild);
//		}
//	}
//}
////删除是BST比较难的一点，暂时不学，之后结合题目再考虑
//int main()
//{
//	for (int i=0;i<5;i++)
//	{
//		a[i] = i;
//	}
//	node* root = Create(a, 5);
//	LayerOrder(root);//层序遍历
//	return 0;
//}