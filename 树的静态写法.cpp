#include<iostream>
#include <vector>
#include <queue>
using namespace std;
const int maxn = 1000;
typedef int myData;
struct node
{
	myData data;//数据域
	vector<int> child;//指针域，存放所有子结点的下标

}Node[maxn];
int index = 0;
int newNode(int v) {
	//结点赋值
	Node[index].data = v;
	//子结点设为空，即没有子树
	Node[index].child.clear();
	//返回结点下标——这个地方注意，因为自己总失误
	return index++;
}
//树的先序遍历
void preOrder(int root) {
	//访问根节点
	printf("%d ", Node[root].data);
	//先序遍历子树
	for (int i=0;i<Node[root].child.size();i++)
	{
		preOrder(Node[root].child[i]);
	}
}
//树的层次遍历
void LayerOrder(int root) {
	queue<int> q;
	q.push(root);//根节点入队
	while (!q.empty())//队列不为空
	{
		//访问队首元素
		int front = q.front();
		printf("%d ", front);//输出
		//取出队首元素
		q.pop();
		//如果拥有子树
		for (int i=0;i<Node[front].child.size();i++)
		{
			q.push(Node[front].child[i]);
		}
	}
}







