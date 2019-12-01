///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.01                                                                            
// *                                                                                                 
// * Describe: AVL树的建立过程                                           
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct node
//{
//	int data, height;//height存储树的高度
//	node* lchild, * rchild;//左右孩子
//};
////创建新结点
//node* newNode(int v)
//{
//	node* root = new node;
//	root->data = v;
//	root->height = 1;//初始高度为1
//	root->lchild = root->rchild = NULL;//左右孩子置为空
//	return root;//返回结点
//}
////获取当前结点的height
//int getHeight(node* root)
//{
//	if (root == NULL) return 0;//结点为空，则height=0；
//	return root->height;//这里刚开始写错了
//}
////计算平衡因子
//int getBalanceFactor(node* root)
//{
//	return getHeight(root->lchild) - getHeight(root->rchild);
//}
////更新结点的height
//void updateHeight(node* root)
//{
//	root->height = max(getHeight(root->lchild), getHeight(root->rchild))+1;
//}
////查找
//void search(node* root,int x)
//{
//	if (root==NULL)
//	{
//		printf("树为空\n");
//		return;
//	}
//	if (root->data==x)
//	{
//		printf("找到了");
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
///*插入*/
//
////左旋
//void L(node*& root)
//{
//	node* temp=root->rchild;//root指向结点A,temp指向结点B
//	//让B的左子树成为A的右子树
//	root->rchild = temp->lchild;
//	//让A成为B的左子树
//	temp->lchild = root;
//	//更新变换后结点的高度
//	updateHeight(root);
//	updateHeight(temp);
//	//将根节点设置为B结点
//	root = temp;
//}
////右旋
//void R(node*& root)
//{
//	node* temp = root->lchild;//temp结点为root结点的左子树
//	//让A的右子树称为B的左子树
//	root->lchild = temp->rchild;
//	//让B成为A的右子树
//	temp->rchild = root;
//	//更新变换后结点的高度
//	updateHeight(root);
//	updateHeight(temp);
//	//将根节点设置为A结点
//	root = temp;
//}
//void insert(node*& root, int x)
//{
//	if (root == NULL)
//	{
//		root = newNode(x);//插入结点
//		return;
//	}
//	if (x<root->data)
//	{
//		insert(root->lchild, x);
//		//更新树高
//		updateHeight(root);
//		if (getBalanceFactor(root)==2)
//		{
//			if (getBalanceFactor(root->lchild)==1)//LL型
//			{
//				R(root);//自己进行右旋
//			}
//			else if(getBalanceFactor(root->lchild) == -1)//LR型
//			{
//				L(root->lchild);//先进行左旋
//				R(root);//再进行右旋
//			}
//		}
//	}
//	else
//	{
//		insert(root->rchild, x);
//		//更新树高
//		updateHeight(root);
//		if (getBalanceFactor(root)==-2)
//		{
//			if (getBalanceFactor(root->rchild)==-1)//RR型
//			{
//				L(root);//直接进行左旋
//			}
//			else if (getBalanceFactor(root->rchild)==1)//RL型
//			{
//				R(root->rchild);//先进行右旋
//				L(root);//再进行左旋
//			}
//		}
//	}
//}
////AVL树的建立
//node* CreateTree(int A[],int n)
//{
//	node* root = NULL;
//	for (int i=0;i<n;i++)
//	{
//		insert(root, A[i]);//插入结点
//	}
//	return root;//返回根结点
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
