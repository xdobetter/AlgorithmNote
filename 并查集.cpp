///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.11.30                                                                            
// *                                                                                                 
// * Describe: ���鼯��ʹ��                                          
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int maxn = 30;
//vector<int> father(maxn);
////��ʼ��
////��ʼʱ��ÿ��Ԫ�ض���һ�������ļ��ϣ������Ҫ������father[i]����i
//void initialize(vector<int> &ivec)
//{
//	for (int i=1;i<=ivec.size();i++)
//	{
//		ivec[i] = i;//��father[i]
//	}
//}
////����x���ڼ��ϵĸ����
//int findFather(int x)
//{
//	while (x!=father[x])
//	{
//		x = father[x];//xȡ�������ֵ
//	}
//	return x;//����x
//}
////�ϲ�
//void Union(int a, int b)
//{
//	int faA = findFather(a);
//	int faB = findFather(b);
//	if (faA!=faB)
//	{
//		father[faA] = faB;
//	}
//}
////·��ѹ��
//int findFather(int x)
//{
//	int a=x;
//	while (x!=father[x])
//	{
//
//	}
//}
////
//int findFather2(int x)
//{
//	//����x�������while�л��ɸ���㣬����Ȱ�ԭ�ȵ�x����һ��
//	int a = x;
//	while (x!=father[x])//Ѱ�Ҹ��ڵ�
//	{
//		x = father[x];
//	}
//	//�����x��ŵ��Ǹ���㣬��������н���father���ĳɸ����
//	while (a!=father[a])
//	{
//		int z = a;//��ΪҪ��father[a]���ǣ������ȱ���a��ֵ�����޸�father[a]
//		a = father[a];//a���ݸ��׽��
//		father[z] = x;//��ԭ�ȵĽ��a�Ľ�㸸�׸�Ϊ�����x
//	}
//	return x;//���ظ����
//}
//int main()
//{
//	return 0;
//}