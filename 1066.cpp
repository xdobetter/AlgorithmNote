/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *                                                                                                 
 * Blog: https://blog.csdn.net/weixin_41234001                                      
 *                                                                                                 
 * Author: DoBetter                                                               
 *                                                                                                 
 * Time: 2019.12.01                                                                            
 *                                                                                                 
 * Describe: AVL树的实现                                           
 *                                                                                                 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 */
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
//定义AVL树结构
struct node
{
	int height, data;
	node* lchild, *rchild;//定义左右孩子
};
//新建结点
node* newNode(int v)
{
	node* root = new node;
	root->data = v;//赋值
	root->height = 1;//高度初始为1
	root->lchild = root->rchild = NULL;//左右孩子为空
	return root;//返回根节点
}
//获取高度
int getHeight(node* root)
{
	if (root == NULL) return 0;//空结点，高度为0
	return root->height;//返回高度
}
//计算平衡因子
int getFactor(node* root)
{
	//左边减掉右边
	return getHeight(root->lchild) - getHeight(root->rchild);
}
//更新结点高度-------这块自己写错了，导致高度没有更新
void updateHeight(node* root)
{
	//等于左右两个高度中的最大者+1
	root->height=max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
}
//左旋
void L(node*& root)
{
	//记录根结点A的右子树结点B的地址
	node* temp = root->rchild;
	//将B结点的左子树移动给A
	root->rchild = temp->lchild;
	//将B的左子树设置成A
	temp->lchild = root;
	//更新改动的两个结点的高度
	updateHeight(root);//因为此时根节点已被移动到了下方，所以注意一定是先更新根节点的高度
	updateHeight(temp);//再更新temp结点的高度
	//将B结点设置为根节点
	root = temp;
}
//右旋
void R(node*& root)
{
	//记录根节点B的左子树结点A的地址
	node* temp = root->lchild;
	//将A结点的右子树移动给B结点的左子树
	root->lchild = temp->rchild;
	//将根结点设置为A结点的右节点
	temp->rchild = root;
	//更新高度
	updateHeight(root);
	updateHeight(temp);
	//将A结点设置为根节点
	root = temp;
}
//插入
void insert(node*& root, int v)
{
	//空结点，进行插入
	if (root==NULL)
	{
		root = newNode(v);
		return;
	}
	if (v<root->data)
	{
		//插入左边
		insert(root->lchild, v);
		//插入完要进行高度更新
		updateHeight(root);
		//左边比右边高
		if (getFactor(root)==2)
		{
			//LL
			if (getFactor(root->lchild)==1)
			{
				R(root);//先进行右旋

			}
			//LR
			else if (getFactor(root->lchild) == -1)
			{
				L(root->lchild);//先使左子树左旋变化到LL
				R(root);//根结点右旋
			}
		}
	}
	//v比结点值大或等于，插入右子树
	else
	{
		insert(root->rchild, v);
		//更新树高
		updateHeight(root);
		//如果平衡因子发生变化
		if (getFactor(root)==-2)
		{
			//如果为RR，平衡因子=-1
			if (getFactor(root->rchild)==-1)
			{
				L(root);//根结点左旋
			}
			//如果为RL，平衡因子=1
			if (getFactor(root->rchild)==1)
			{
				//先使右子树右旋
				R(root->rchild);
				//根结点再左旋
				L(root);
			}
		}
	}
}
//创建树
node* Create(int A[], int n)
{
	node* root = NULL;//头结点为空'
	for (int i=0;i<n;i++)
	{
		insert(root, A[i]);//插入
	}
	return root;//返回根结点
}
//层次遍历——检查是否构建正确
void layerOrder(node* root)
{
	queue<node*> Q;
	Q.push(root);
	while (!Q.empty())
	{
		//printf("我输出了吗");
		node* front = Q.front();
		printf("%d ", front->data);
		Q.pop();
		if (front->lchild != NULL) Q.push(front->lchild);
		if (front->rchild != NULL) Q.push(front->rchild);
	}
}
int main()
{
	int A[25];
	int n;
	scanf("%d", &n);
	for (int i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
	node* root=Create(A, n);
	/*layerOrder(root);*/
	/*cout << endl;*/
	printf("%d", root->data);//输出
	return 0;
}