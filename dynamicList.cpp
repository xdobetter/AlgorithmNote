///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// *
// * Blog: https://blog.csdn.net/weixin_41234001
// *
// * Author: DoBetter
// *
// * Time: 2019.12.02
// *
// * Describe: 动态链表
// *
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// */
//#include <iostream>
//#include <algorithm>
//#include <stdlib.h>
//using namespace std;
//typedef int dataType;
//struct node
//{
//	dataType data;//数据域
//	node* next;//指针域
//};
////创建链表
//node* create(int Array[])
//{
//	node* p, * pre, * head;//p为新建结点，pre保存当前结点的前驱结点，head为头结点
//	head = new node;//创建头结点
//	head->next = NULL;//头结点不需要数据域，指针域初始为NULL
//	pre = head;//记录pre为head
//	for (int i = 0; i < 5; i++)
//	{
//		p = new node;//新建结点
//		//将Array[i]赋给新建的结点作为数据域，也可以scanf输入
//		p->data = Array[i];
//		p->next = NULL;//后继结点设为空
//		pre->next = p;//前驱结点的指针设为当前新建结点的地址
//		pre = p;//将pre移到新建结点上
//	}
//	return head;//返回头结点
//}
////查找
//void search(node* root, dataType x)
//{
//	root = root->next;//从第一个结点开始
//	while (root != NULL)
//	{
//		if (root->data == x)
//		{
//			printf("找到了该元素\n");
//			return;
//		}
//		root = root->next;//移动到第二个结点
//	}
//	printf("不存在该元素");
//}
////插入
//void insert(node* head, int pos, int x)//pos是位置，x为插入的元素
//{
//	node* p = head;
//	for (int i = 0; i < pos - 1; i++)
//	{
//		p = p->next;//pos-1是要插入的位置前一个元素
//	}
//	node* temp = p->next;//保存p的后继结点
//	node* q = new node;//增加的新结点
//	q->data = x;//赋值
//	p->next = q;//p的下一个结点为新建结点q
//	q->next = temp;//新建结点的下一个结点为p的后继结点
//}
////删除——删除链表中的所有x
//void del(node* head, int x)
//{
//	node* p, * pre;
//	pre = head;//指向p指向的结点的前驱结点
//	p = head->next;//从第一个结点开始找
//	while (p != NULL)
//	{
//		if (p->data == x)//找到了元素x
//		{
//			pre->next = p->next;//pre的后继结点为p的后继结点
//			delete(p);//删除p所指向的结点
//			p = pre->next;//p指向pre的后继结点
//		}
//		else//未找到，则一直往后找
//		{
//			pre = p;
//			p = p->next;
//		}
//	}
//
//}
////输出
//void printList(node* head)
//{
//	node* p = head->next;
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;//切换到下一个结点
//	}
//}
//int main()
//{
//	int Array[5];
//	for (int i = 0; i < 5; i++)
//	{
//		Array[i] = i * i;
//	}
//	//创建链表——该链表具有头结点
//	node* root = create(Array);
//	cout << "链表中的原始数据为" << endl;
//	//输出
//	printList(root);
//	cout << endl;
//	//插入
//	insert(root, 2, 666);
//	//输出
//	cout << "插入666后" << endl;
//	printList(root);
//	cout << endl;
//	//查找
//	search(root, 0);
//	//删除
//	del(root, 1);
//	//输出
//	cout << "删除1后" << endl;
//	//输出
//	printList(root);
//	return 0;
//}
//
