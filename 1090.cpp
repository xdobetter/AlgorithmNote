///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// *
// * Blog: https://blog.csdn.net/weixin_41234001
// *
// * Author: DoBetter
// *
// * Time: 2019.11.30
// *
// * Describe: $Used to do something$
// *
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// */
////13min�ֶ���
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int maxn= 100010;
////������
//struct node
//{
//	vector<int> child;
//}Node[maxn];
//double Path[maxn];
//int N;
//double P, T;
//int sum=0;
//bool cmp(double a, double b) {
//
//	return a > b;
//}
//void DFS(int index, int layer);
//int main()
//{
//	//����
//	scanf("%d %lf %lf", &N, &P, &T);
//	T = (100 + T)/100;
//	//������
//	int root;
//	for (int i=0;i<N;i++)
//	{
//		int k;
//		scanf("%d", &k);
//		if (k==-1)
//		{
//			root = i;
//			continue;
//		}
//		Node[k].child.push_back(i);
//	}
//	//DFS
//	int layer = 0;
//	DFS(root, layer);
//	//������ֵ
//	sort(Path, Path + sum, cmp);
//	double max = Path[0];
//	int count = 1;
//	for (int i=1;i<sum;i++)
//	{
//		if (Path[i]!=max)
//		{
//			break;
//		}
//		count++;
//	}
//	printf("%.2f %d", max, count);
//	return 0;
//}
//
//void DFS(int index, int layer) {
//	//Ϊ��
//	if (Node[index].child.size()==0)
//	{
//		double temp = P*pow(T, layer);
//		Path[sum++]=temp;
//		return;
//	}
//	//
//	for (int i=0;i<Node[index].child.size();i++)
//	{
//		int child = Node[index].child[i];
//		DFS(child, layer + 1);
//	}
//}
//
//
//
//
//
//
//
