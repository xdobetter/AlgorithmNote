//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int maxn = 1010;
////dp[i][j]表示A[i]至A[j]所表示的子串是否是回文子串，是则为1，不是为0.
//int dp[maxn][maxn];
//char A[maxn];
//int main()
//{
//	//字符串输入
//	fgets(A, maxn, stdin);
//	int len = strlen(A);//字符串长度
//	int ans = 1;//记录字符串最大长度
//	//边界
//	for (int i=0;i<len;i++)
//	{
//		dp[i][i] = 1;
//		if (i<len-1)//长度小于1时
//		{
//			dp[i][i + 1] = (A[i] == A[i + 1]) ? 1 : 0;
//			if (dp[i][i+1])
//			{
//				ans = 2;//出现2个字符回文，长度变为2
//			}
//			
//		}
//	}
//	//状态转移方程
//	for (int L=3;L<=len;L++)//从长度为3的字符串开始枚举
//	{
//		for (int i = 0; i <= len -L;i++)//从左端点开始枚举
//		{
//			for (int j=i+L-1;j<len;j++)//对右端点进行枚举
//			{
//				//两者相等，如果i+1至j-1是回文子串，则也是回文子串，如果不是，则也不是回文子串
//				if (A[i]==A[j])
//				{
//					dp[i][j] = dp[i + 1][j - 1];
//				}
//				//如果不相等，则一定不是回文子串
//				else
//				{
//					dp[i][j] = 0;
//				}
//				//如果长度为L的串，是回文子串，则ans++
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