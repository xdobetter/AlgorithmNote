///*
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// *
// * Blog: https://blog.csdn.net/weixin_41234001
// *
// * Author: DoBetter
// *
// * Time: 2019.12.02
// *
// * Describe: ��̬����
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
//	dataType data;//������
//	node* next;//ָ����
//};
////��������
//node* create(int Array[])
//{
//	node* p, * pre, * head;//pΪ�½���㣬pre���浱ǰ����ǰ����㣬headΪͷ���
//	head = new node;//����ͷ���
//	head->next = NULL;//ͷ��㲻��Ҫ������ָ�����ʼΪNULL
//	pre = head;//��¼preΪhead
//	for (int i = 0; i < 5; i++)
//	{
//		p = new node;//�½����
//		//��Array[i]�����½��Ľ����Ϊ������Ҳ����scanf����
//		p->data = Array[i];
//		p->next = NULL;//��̽����Ϊ��
//		pre->next = p;//ǰ������ָ����Ϊ��ǰ�½����ĵ�ַ
//		pre = p;//��pre�Ƶ��½������
//	}
//	return head;//����ͷ���
//}
////����
//void search(node* root, dataType x)
//{
//	root = root->next;//�ӵ�һ����㿪ʼ
//	while (root != NULL)
//	{
//		if (root->data == x)
//		{
//			printf("�ҵ��˸�Ԫ��\n");
//			return;
//		}
//		root = root->next;//�ƶ����ڶ������
//	}
//	printf("�����ڸ�Ԫ��");
//}
////����
//void insert(node* head, int pos, int x)//pos��λ�ã�xΪ�����Ԫ��
//{
//	node* p = head;
//	for (int i = 0; i < pos - 1; i++)
//	{
//		p = p->next;//pos-1��Ҫ�����λ��ǰһ��Ԫ��
//	}
//	node* temp = p->next;//����p�ĺ�̽��
//	node* q = new node;//���ӵ��½��
//	q->data = x;//��ֵ
//	p->next = q;//p����һ�����Ϊ�½����q
//	q->next = temp;//�½�������һ�����Ϊp�ĺ�̽��
//}
////ɾ������ɾ�������е�����x
//void del(node* head, int x)
//{
//	node* p, * pre;
//	pre = head;//ָ��pָ��Ľ���ǰ�����
//	p = head->next;//�ӵ�һ����㿪ʼ��
//	while (p != NULL)
//	{
//		if (p->data == x)//�ҵ���Ԫ��x
//		{
//			pre->next = p->next;//pre�ĺ�̽��Ϊp�ĺ�̽��
//			delete(p);//ɾ��p��ָ��Ľ��
//			p = pre->next;//pָ��pre�ĺ�̽��
//		}
//		else//δ�ҵ�����һֱ������
//		{
//			pre = p;
//			p = p->next;
//		}
//	}
//
//}
////���
//void printList(node* head)
//{
//	node* p = head->next;
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;//�л�����һ�����
//	}
//}
//int main()
//{
//	int Array[5];
//	for (int i = 0; i < 5; i++)
//	{
//		Array[i] = i * i;
//	}
//	//�������������������ͷ���
//	node* root = create(Array);
//	cout << "�����е�ԭʼ����Ϊ" << endl;
//	//���
//	printList(root);
//	cout << endl;
//	//����
//	insert(root, 2, 666);
//	//���
//	cout << "����666��" << endl;
//	printList(root);
//	cout << endl;
//	//����
//	search(root, 0);
//	//ɾ��
//	del(root, 1);
//	//���
//	cout << "ɾ��1��" << endl;
//	//���
//	printList(root);
//	return 0;
//}
//
