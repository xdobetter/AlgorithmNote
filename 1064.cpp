///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.01                                                                           
// *                                                                                                 
// * Describe: ����һ����ȫ����������ͨ����������ķ�ʽ���                                           
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int maxn = 1010;
//int CBT[maxn], number[maxn];
//int n,index=1;
//void inOrder(int root)
//{
//	//�ݹ�߽�
//	if (root>n)
//	{
//		return;
//	}
//	inOrder(root * 2);
//	CBT[root] = number[index++];
//	inOrder(root * 2 + 1);
//}
//int main()
//{
//	scanf("%d", &n);	
//	for (int i=1;i<=n;i++)
//	{
//		scanf("%d", &number[i]);
//	}
//	//���򣬴�С��������
//	sort(number+1, number + n+1);
//	//�������
//	inOrder(1);
//	//���
//	for (int i=1;i<=n;i++)
//	{
//		printf("%d", CBT[i]);
//		if (i<n)
//		{
//			printf(" ");
//		}
//	}
//	return 0;
//}
