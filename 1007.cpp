//#include<iostream>
//#include<algorithm>
//using namespace std;
//int const maxn = 10010;
//
////dp[maxn][1]�����洢��A[i]��β���������е�����
////dp[maxn][0]�����洢�������е���ʼ����
//int A[maxn], dp[maxn][2];
//
//int main()
//{
//	//����
//	int n;
//	scanf("%d", &n);
//	for (int  i = 0; i < n; i++)
//	{
//		scanf("%d", &A[i]);
//		dp[i][0] = 0;//�������е�Ĭ����߽��Ϊ0
//	}
//	//dp�߽�
//	dp[0][1] = A[0];
//	//���dp,dp[i]Ϊ��A[i]��β���������е����ͣ���Ҫ����i�õ����Ĳ��ǽ��
//	for (int  i = 1; i < n; i++)
//	{
//		//�����ȡA[i]���
//		if (A[i]>dp[i-1][1]+A[i])
//		{
//			dp[i][0] = i;//������߽�
//			dp[i][1] = A[i];//����dp[i]
//		}
//		//������������������
//		else
//		{
//			dp[i][0] = dp[i - 1][0];//��߽����
//			dp[i][1] = dp[i - 1][1] + A[i];//����dp[i]
//		}
//	}
//	//�ҳ���ߵ�dp[i]
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
//	//�ж��Ƿ��Ϊ0
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
////dp[maxn][1]�����洢��A[i]��β���������е�����
////dp[maxn][0]�����洢�������е���ʼ����
//int A[maxn], dp[maxn][2];
//
//int main()
//{
//	//����
//	int n;
//	scanf("%d", &n);
//	for (int  i = 0; i < n; i++)
//	{
//		scanf("%d", &A[i]);
//		dp[i][0] = 0;//�������е�Ĭ����߽��Ϊ0
//	}
//	//dp�߽�
//	dp[0][1] = A[0];
//	//���dp,dp[i]Ϊ��A[i]��β���������е����ͣ���Ҫ����i�õ����Ĳ��ǽ��
//	for (int  i = 1; i < n; i++)
//	{
//		//�����ȡA[i]���
//		if (A[i]>dp[i-1][1]+A[i])
//		{
//			dp[i][0] = i;//������߽�
//			dp[i][1] = A[i];//����dp[i]
//		}
//		//������������������
//		else
//		{
//			dp[i][0] = dp[i - 1][0];//��߽����
//			dp[i][1] = dp[i - 1][1] + A[i];//����dp[i]
//		}
//	}
//	//�ҳ���ߵ�dp[i]
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
//	//�ж��Ƿ��Ϊ0
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