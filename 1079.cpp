#include<iostream>
#include <vector>
using namespace std;
const int maxn = 100010;
//�������ṹ
struct node
{
	double count;//�۸�
	vector<int> child;
}Node[maxn];
int N;
double P, T;
double Sum = 0.0;//��¼�ܼ۸�
void DFS(int index, int layer);
int main()
{

	//������������ۣ�����
	scanf("%d %lf %lf", &N, &P, &T);
	//����Ҷ�ӽ��
	for (int i=0;i<N;i++)
	{
		//Ҷ�ӽ��ĸ���
		int K;
		scanf("%d", &K);
		if (K==0)
		{
			int count;
			scanf("%d", &count);
			Node[i].count = count;//���������ֵ
			Node[i].child.clear();//Ҷ�ӽ����Ϊ��
		}
		else
		{
			for (int j=0;j<K;j++)
			{
				//������ID
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
		//������Ʒ����
		double p=P;
		//cout << "p��ֵ" << p<<endl;
		//cout <<"�ж��ٲ�"<< layer<<endl;
		p*=pow((double)(T + 100) / 100, layer);
		/*cout << "Test" <<"Сp����"<< p<<endl;*/
		//���
		Sum += p* Node[index].count;
		//cout << "Sum" << Sum << endl;
		return;
	}
	//DFS�Ӻ���
	for (int i=0;i<Node[index].child.size();i++)
	{
		int child = Node[index].child[i];//���ӽ����±�
		DFS(child, layer + 1);
	}
	
}
