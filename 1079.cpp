#include<iostream>
#include <vector>
using namespace std;
const int maxn = 100010;
//定义树结构
struct node
{
	double count;//价格
	vector<int> child;
}Node[maxn];
int N;
double P, T;
double Sum = 0.0;//记录总价格
void DFS(int index, int layer);
int main()
{

	//输入个数，单价，比率
	scanf("%d %lf %lf", &N, &P, &T);
	//输入叶子结点
	for (int i=0;i<N;i++)
	{
		//叶子结点的个数
		int K;
		scanf("%d", &K);
		if (K==0)
		{
			int count;
			scanf("%d", &count);
			Node[i].count = count;//结点数据域赋值
			Node[i].child.clear();//叶子结点设为空
		}
		else
		{
			for (int j=0;j<K;j++)
			{
				//输入结点ID
				int ID;
				scanf("%d", &ID);
				Node[i].child.push_back(ID);
			}
			
		}
	}
	int index = 0;
	int layer = 0;
	DFS(index, layer);
	printf("%.1f", Sum);
	return 0;
}
void DFS(int index, int layer) 
{

	if (Node[index].child.size()==0)
	{
		//计算商品单价
		double p=P;
		//cout << "p的值" << p<<endl;
		//cout <<"有多少层"<< layer<<endl;
		p*=pow((double)(T + 100) / 100, layer);
		/*cout << "Test" <<"小p等于"<< p<<endl;*/
		//求和
		Sum += p* Node[index].count;
		//cout << "Sum" << Sum << endl;
		return;
	}
	//DFS子孩子
	for (int i=0;i<Node[index].child.size();i++)
	{
		int child = Node[index].child[i];//孩子结点的下标
		DFS(child, layer + 1);
	}
	
}
