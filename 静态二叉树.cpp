#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef int myData;
//静态二叉树
const int maxn = 100;
struct node
{
	myData data;//数据域
	int lchild;//指向左子树的指针域
	int rchild;//指向右子树的指针域
}Node[maxn];//节点数组，maxn为结点上限个数
//结点的静态指定
int index = 0;
int newNode(int v) {//分配一个Node数组中的结点给新的结点，index为其下标
	Node[index].data = v;//数据域为v
	//以-1或maxn表示空，数组的范围为0~maxn-1
	Node[index].lchild = -1;
	Node[index].rchild = -1;
	return index++;
}
//查找
void search(int root, int x, int newdata) {
	if (root==-1)//用-1来代替NULL
	{
		return;//空树，死胡同，递归边界
	}
	if (Node[root].data == x)//找到x
	{
		printf("输出结点位置:%d", root);
		cout << "newdata的值为"<<newdata << endl;
	}
	//递归式
	search(Node[root].lchild, x, newdata);
	search(Node[root].rchild, x, newdata);
}
//插入
void insert(int& root, int x) {//需要加引用
	if (root==-1)//空树
	{
		root = newNode(x);//给root赋予新的结点
		return;
	}
	//递归式
	if (Node[root].lchild==-1)//自定义，如果左子树为空
	{
		insert(Node[root].lchild, x);
	}
	else
	{
		insert(Node[root].rchild, x);
	}
}
//创建静态二叉树
int Create(int data[], int n) {
	int root = -1;//新建更结点root;
	for (int i=0;i<n;i++)
	{
		insert(root, data[i]);//插入结点
	}
	return root;//返回根节点
}
//先序遍历
void preOrder(int root) {
	//递归边界
	if (root==-1)
	{
		return;
	}
	//先访问根节点
	printf("%d ", Node[root].data);
	//再先序遍历左子树
	preOrder(Node[root].lchild);
	//先序遍历右子树
	preOrder(Node[root].rchild);
}
//中序遍历
void inOrder(int root) {
	//递归边界
	if (root==-1)
	{
		return;
	}
	//中序遍历左子树
	inOrder(Node[root].lchild);
	//访问根结点
	printf("%d ", Node[root].data);
	//中序遍历右子树
	inOrder(Node[root].rchild);
}
//后序遍历
void lastOrder(int root)
{
	//递归边界
	if (root==-1)
	{
		return;
	}
	//后序遍历左子树
	lastOrder(Node[root].lchild);
	//后序遍历右子树
	lastOrder(Node[root].rchild);
	//访问根结点
	printf("%d ", Node[root].data);
}

//层次遍历
void LayerOrder(int root)
{
	queue<int> q;
	q.push(root);//根节点入队
	while (!q.empty())//队列不为空
	{
		int front = q.front();
		q.pop();//取出队首元素
		printf("%d ", Node[front].data);//输出队首元素
		if (Node[front].lchild!=-1)//左子树不为空，左子树入队
		{
			q.push(Node[front].lchild);
		}
		if (Node[front].rchild!=-1)//右子树不为空，右子树入队
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
	int root=Create(A, 5);//创建二叉树
	preOrder(root);//先序遍历 0 1 2 3 4
	cout << endl;
	inOrder(root);//中序遍历1 0 3 2 4
	cout << endl;
	lastOrder(root);//后序遍历 1 3 4 2 0
	cout << endl;
	LayerOrder(root);//层次遍历 0 1 2 3 4
	return 0;
}
//树的结构如下
//  0
//1   2
//   3 4
 