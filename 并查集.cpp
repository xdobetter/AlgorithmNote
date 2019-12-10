///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// *                                                                                                 
// * Blog: https://blog.csdn.net/weixin_41234001                                      
// *                                                                                                 
// * Author: DoBetter                                                               
// *                                                                                                 
// * Time: 2019.11.30                                                                            
// *                                                                                                 
// * Describe: 并查集的使用                                          
// *                                                                                                 
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// */
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int maxn = 30;
//vector<int> father(maxn);
////初始化
////开始时，每个元素都是一个独立的集合，因此需要令所有father[i]等于i
//void initialize(vector<int> &ivec)
//{
//	for (int i=1;i<=ivec.size();i++)
//	{
//		ivec[i] = i;//令father[i]
//	}
//}
////查找x所在集合的根结点
//int findFather(int x)
//{
//	while (x!=father[x])
//	{
//		x = father[x];//x取其根结点的值
//	}
//	return x;//返回x
//}
////合并
//void Union(int a, int b)
//{
//	int faA = findFather(a);
//	int faB = findFather(b);
//	if (faA!=faB)
//	{
//		father[faA] = faB;
//	}
//}
////路径压缩
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
//	//由于x在下面的while中会变成根结点，因此先把原先的x保存一下
//	int a = x;
//	while (x!=father[x])//寻找根节点
//	{
//		x = father[x];
//	}
//	//到这里，x存放的是根结点，下面把所有结点的father都改成根结点
//	while (a!=father[a])
//	{
//		int z = a;//因为要被father[a]覆盖，所以先保存a的值，以修改father[a]
//		a = father[a];//a回溯父亲结点
//		father[z] = x;//将原先的结点a的结点父亲改为根结点x
//	}
//	return x;//返回根结点
//}
//int main()
//{
//	return 0;
//}