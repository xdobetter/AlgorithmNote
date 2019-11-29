//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int maxn = 100;
//char A[maxn];
//bool isPail(char A[], int left, int right);
//int main()
//{
//	gets_s(A, maxn);//输入字符串，PAT中无法使用
//fgets(A, maxn, stdin);//输入字符串
//	int ans=1;//记录字符串长度
//	int len = strlen(A);
//	for (int i=0;i<len-1;i++)
//	{
//		for (int j = i+1; j < len; j++)
//		{
//			if (isPail(A,i,j))
//			{
//				ans = max(ans, j - i+1);//选出更长的
//			}
//		}
//	}
//	printf("%d", ans);
//
//	return 0;
//}
//bool isPail(char A[], int left, int right)
//{
//	bool flag = true;
//	int len = right - left;
//	if (len==1)//长度仅为1的情况
//	{
//		if (A[left] == A[right])
//		{
//			flag = true;
//			return flag;
//		}
//		flag = false;
//		return flag;
//	}
//	else//长度>1
//	{
//		for (int i = 0; i < len / 2; i++)
//		{
//			if (A[left + i] == A[right - i])
//			{
//				continue;
//			}
//			flag = false;
//			return flag;
//		}
//	}
//}#include <iostream>
//#include<algorithm>
//using namespace std;
//const int maxn = 100;
//char A[maxn];
//bool isPail(char A[], int left, int right);
//int main()
//{
//	gets_s(A, maxn);//输入字符串
//	int ans=1;//记录字符串长度
//	int len = strlen(A);
//	for (int i=0;i<len-1;i++)
//	{
//		for (int j = i+1; j < len; j++)
//		{
//			if (isPail(A,i,j))
//			{
//				ans = max(ans, j - i+1);//选出更长的
//			}
//		}
//	}
//	printf("%d", ans);
//
//	return 0;
//}
//bool isPail(char A[], int left, int right)
//{
//	bool flag = true;
//	int len = right - left;
//	if (len==1)//长度仅为1的情况
//	{
//		if (A[left] == A[right])
//		{
//			flag = true;
//			return flag;
//		}
//		flag = false;
//		return flag;
//	}
//	else//长度>1
//	{
//		for (int i = 0; i < len / 2; i++)
//		{
//			if (A[left + i] == A[right - i])
//			{
//				continue;
//			}
//			flag = false;
//			return flag;
//		}
//	}
//}