//#include<iostream>
//#include<algorithm>
//using namespace std;
//int const maxn = 10010;
//
////dp[maxn][1]用来存储以A[i]结尾的连续序列的最大和
////dp[maxn][0]用来存储连续序列的起始坐标
//int A[maxn], dp[maxn][2];
//
//int main()
//{
//	//输入
//	int n;
//	scanf("%d", &n);
//	for (int  i = 0; i < n; i++)
//	{
//		scanf("%d", &A[i]);
//		dp[i][0] = 0;//连续序列的默认左边界均为0
//	}
//	//dp边界
//	dp[0][1] = A[0];
//	//求解dp,dp[i]为以A[i]结尾的连续序列的最大和，需要遍历i得到最大的才是结果
//	for (int  i = 1; i < n; i++)
//	{
//		//如果是取A[i]最大
//		if (A[i]>dp[i-1][1]+A[i])
//		{
//			dp[i][0] = i;//更新左边界
//			dp[i][1] = A[i];//更新dp[i]
//		}
//		//如果是序列连续会最大
//		else
//		{
//			dp[i][0] = dp[i - 1][0];//左边界更新
//			dp[i][1] = dp[i - 1][1] + A[i];//更新dp[i]
//		}
//	}
//	//找出最高的dp[i]
//	int k=0;
//	for (int i = 1; i < n; i++)
//	{
//		if (dp[k][1]<dp[i][1])
//		{
//			k = i;
//		}
//	}
//	
//	//bool flag = false;
//	//判断是否均为0
//	if (dp[k][1]<0)
//	{
//		printf("0 %d %d", A[0], A[n-1]);
//	}
//	else 
//	{
//		printf("%d %d %d", dp[k][1], A[dp[k][0]], A[k]);
//	}
//	return 0;
//}
//
//
#include<iostream>
//#include<algorithm>
//using namespace std;
//int const maxn = 10010;
//
////dp[maxn][1]用来存储以A[i]结尾的连续序列的最大和
////dp[maxn][0]用来存储连续序列的起始坐标
//int A[maxn], dp[maxn][2];
//
//int main()
//{
//	//输入
//	int n;
//	scanf("%d", &n);
//	for (int  i = 0; i < n; i++)
//	{
//		scanf("%d", &A[i]);
//		dp[i][0] = 0;//连续序列的默认左边界均为0
//	}
//	//dp边界
//	dp[0][1] = A[0];
//	//求解dp,dp[i]为以A[i]结尾的连续序列的最大和，需要遍历i得到最大的才是结果
//	for (int  i = 1; i < n; i++)
//	{
//		//如果是取A[i]最大
//		if (A[i]>dp[i-1][1]+A[i])
//		{
//			dp[i][0] = i;//更新左边界
//			dp[i][1] = A[i];//更新dp[i]
//		}
//		//如果是序列连续会最大
//		else
//		{
//			dp[i][0] = dp[i - 1][0];//左边界更新
//			dp[i][1] = dp[i - 1][1] + A[i];//更新dp[i]
//		}
//	}
//	//找出最高的dp[i]
//	int k=0;
//	for (int i = 1; i < n; i++)
//	{
//		if (dp[k][1]<dp[i][1])
//		{
//			k = i;
//		}
//	}
//	
//	//bool flag = false;
//	//判断是否均为0
//	if (dp[k][1]<0)
//	{
//		printf("0 %d %d", A[0], A[n-1]);
//	}
//	else 
//	{
//		printf("%d %d %d", dp[k][1], A[dp[k][0]], A[k]);
//	}
//	return 0;
//}
//
//