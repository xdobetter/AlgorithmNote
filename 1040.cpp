//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int maxn = 1010;
////dp[i][j]��ʾA[i]��A[j]����ʾ���Ӵ��Ƿ��ǻ����Ӵ�������Ϊ1������Ϊ0.
//int dp[maxn][maxn];
//char A[maxn];
//int main()
//{
//	//�ַ�������
//	fgets(A, maxn, stdin);
//	int len = strlen(A);//�ַ�������
//	int ans = 1;//��¼�ַ�����󳤶�
//	//�߽�
//	for (int i=0;i<len;i++)
//	{
//		dp[i][i] = 1;
//		if (i<len-1)//����С��1ʱ
//		{
//			dp[i][i + 1] = (A[i] == A[i + 1]) ? 1 : 0;
//			if (dp[i][i+1])
//			{
//				ans = 2;//����2���ַ����ģ����ȱ�Ϊ2
//			}
//			
//		}
//	}
//	//״̬ת�Ʒ���
//	for (int L=3;L<=len;L++)//�ӳ���Ϊ3���ַ�����ʼö��
//	{
//		for (int i = 0; i <= len -L;i++)//����˵㿪ʼö��
//		{
//			for (int j=i+L-1;j<len;j++)//���Ҷ˵����ö��
//			{
//				//������ȣ����i+1��j-1�ǻ����Ӵ�����Ҳ�ǻ����Ӵ���������ǣ���Ҳ���ǻ����Ӵ�
//				if (A[i]==A[j])
//				{
//					dp[i][j] = dp[i + 1][j - 1];
//				}
//				//�������ȣ���һ�����ǻ����Ӵ�
//				else
//				{
//					dp[i][j] = 0;
//				}
//				//�������ΪL�Ĵ����ǻ����Ӵ�����ans++
//				if (dp[i][j])
//				{
//					ans=L;
//				}
//			}
//		}
//	}
//
//	printf("%d", ans);
//	return 0;
//}