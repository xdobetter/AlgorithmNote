//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int maxn = 100;
//char A[maxn];
//bool isPail(char A[], int left, int right);
//int main()
//{
//	gets_s(A, maxn);//�����ַ�����PAT���޷�ʹ��
//fgets(A, maxn, stdin);//�����ַ���
//	int ans=1;//��¼�ַ�������
//	int len = strlen(A);
//	for (int i=0;i<len-1;i++)
//	{
//		for (int j = i+1; j < len; j++)
//		{
//			if (isPail(A,i,j))
//			{
//				ans = max(ans, j - i+1);//ѡ��������
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
//	if (len==1)//���Ƚ�Ϊ1�����
//	{
//		if (A[left] == A[right])
//		{
//			flag = true;
//			return flag;
//		}
//		flag = false;
//		return flag;
//	}
//	else//����>1
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
//	gets_s(A, maxn);//�����ַ���
//	int ans=1;//��¼�ַ�������
//	int len = strlen(A);
//	for (int i=0;i<len-1;i++)
//	{
//		for (int j = i+1; j < len; j++)
//		{
//			if (isPail(A,i,j))
//			{
//				ans = max(ans, j - i+1);//ѡ��������
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
//	if (len==1)//���Ƚ�Ϊ1�����
//	{
//		if (A[left] == A[right])
//		{
//			flag = true;
//			return flag;
//		}
//		flag = false;
//		return flag;
//	}
//	else//����>1
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