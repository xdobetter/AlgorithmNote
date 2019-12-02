/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Blog: https://blog.csdn.net/weixin_41234001
 *
 * Author: DoBetter
 *
 * Time: 2019.12.02
 *
 * Describe: 使用std::vector实现一个静态链表，包含插入，删除，查找功能
 *           主要思路：通过在vector中定义两个链表，一个为备用链表：用来存储释放的结点空间，一个为数据链表：用来存储数据
 *           vector的第一个元素，即下标为0的元素的next就存放备用链表的第一个结点的下标；
 *           而vector的最后一个元素的next则存放第一个有数值的结点的下标，相当于单链表的头节点作用，当整个链表为空时，则为mynull，表示无指向
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */
#include <iostream>
#include <vector>
#include <algorithm>
#define mynull -1//定义空值
 //定义静态链表结构
typedef int dataType;

const int maxn = 1000;//静态链表的默认大小
struct node
{
	dataType data;//数据域
	int next;//指针域
};

//将链表中各分量链成备用链表
//list[0]为备用链表的头指针，list[maxn-1]为数据链表的头指针，“-1”表示为空
void initList(std::vector<node>& list)
{
	printf("链表初始化\n");
	for (int i = 0; i < maxn - 2; i++)
	{
		list[i].next = i + 1;
	}
	list[maxn - 2].next = mynull;//因为最后一个元素为链表头结点，所以其前一个结点的指针域为空
	list[maxn - 1].next = mynull;//数据链表的初始头结点的next为空
	return;
}
//返回备用链表的中的第一个结点的位置
int mallocEmptyNode(std::vector<node>& list)
{
	int k = list[0].next;//备用链表的下一个结点地址
	if (k != mynull)//表示当前有空闲区域进行存储
	{
		list[0].next = list[k].next;//获取到下一个备用结点的地址
	}
	return k;
}
//将下标为pos的空闲结点回收到备用链表中
void freeEmptyNode(std::vector<node> list, int pos)
{
	list[pos].next = list[0].next;
	list[0].next = pos;
}
//获取链表长度
int listLength(std::vector<node> list)
{
	int len = 0;
	int p = list[maxn - 1].next;//第一个结点的地址
	while (p != mynull)
	{
		len++;
		p = list[p].next;//后移
	}
	return len;
}
//插入结点到链表中
//在array中第pos元素之前插入新的数据元素elem
void listInsert(std::vector<node>& list, int pos, dataType elem)
{
	//printf("插入元素:\n");
	if (pos<1 || pos>listLength(list) + 1)
	{
		printf("插入位置不合法");
		return;
	}
	int q = mallocEmptyNode(list);//获取分配的备用链表的空间
	if (q != mynull)
	{

		int p = maxn - 1;//数据链表的头结点位置
		for (int i = 0; i < pos - 1; i++)//寻找插入位置
		{
			p = list[p].next;
		}
		list[q].next = list[p].next;
		list[p].next = q;
		list[q].data = elem;//赋值
	}

}
//删除
//删除第pos个元素
void listDelete(std::vector<node>& list, int pos)
{
	//printf("删除元素\n");
	if (pos<1 || pos>listLength(list) + 1)
	{
		printf("删除位置不合法或当期没有元素\n");
		return;
	}
	int p = maxn - 1;
	for (int i = 0; i < pos - 1; i++)//寻找删除位置的前驱结点的地址
	{
		p = list[p].next;
	}
	int delPos = list[p].next;
	list[p].next = list[list[p].next].next;//结点相连
	freeEmptyNode(list, delPos);//释放结点
}
//遍历链表
void listTraverse(std::vector<node> list)
{
	int p = list[maxn - 1].next;
	while (p != mynull)
	{
		printf("%d ", list[p].data);
		p = list[p].next;//后移
		if (p == mynull)
		{
			printf("\n");
		}
	}
}
//查找元素
void listSearch(std::vector<node> list, dataType elem)
{
	int p = list[maxn - 1].next;
	while (p != mynull)
	{
		if (elem == list[p].data)
		{
			printf("找到了元素\n");
			return;
		}
		//printf("%d ", list[p].data);
		p = list[p].next;//后移
	}
	printf("没找到\n");
}
int main()
{
	//声明链表
	std::vector<node> list(maxn);
	int n;
	initList(list);//初始化链表
	//插入元素
	printf("插入元素：\n");
	for (int i = 1; i <= 20; i++)
	{
		listInsert(list, i, i * i);
	}
	//输出
	listTraverse(list);
	//查找元素
	printf("查找元素4：\n");
	listSearch(list, 4);//有该元素
	printf("查找元素99：\n");
	listSearch(list, 99);//无该元素
	//删除元素
	printf("删除第二个元素：\n");
	listDelete(list, 2);
	//输出
	listTraverse(list);
	return 0;
}