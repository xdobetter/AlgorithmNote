///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.12.01                                                                           
// *                                                                                                 
// * Describe: 构建一颗完全二叉树，并通过层序遍历的方式输出                                           
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
//	//递归边界
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
//	//排序，从小到大排序
//	sort(number+1, number + n+1);
//	//层序遍历
//	inOrder(1);
//	//输出
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
