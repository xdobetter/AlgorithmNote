/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Blog: https://blog.csdn.net/weixin_41234001
 *
 * Author: DoBetter
 *
 * Time: 2019.12.02
 *
 * Describe: ʹ��std::vectorʵ��һ����̬�����������룬ɾ�������ҹ���
 *           ��Ҫ˼·��ͨ����vector�ж�����������һ��Ϊ�������������洢�ͷŵĽ��ռ䣬һ��Ϊ�������������洢����
 *           vector�ĵ�һ��Ԫ�أ����±�Ϊ0��Ԫ�ص�next�ʹ�ű�������ĵ�һ�������±ꣻ
 *           ��vector�����һ��Ԫ�ص�next���ŵ�һ������ֵ�Ľ����±꣬�൱�ڵ������ͷ�ڵ����ã�����������Ϊ��ʱ����Ϊmynull����ʾ��ָ��
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */
#include <iostream>
#include <vector>
#include <algorithm>
#define mynull -1//�����ֵ
 //���徲̬����ṹ
typedef int dataType;

const int maxn = 1000;//��̬�����Ĭ�ϴ�С
struct node
{
	dataType data;//������
	int next;//ָ����
};

//�������и��������ɱ�������
//list[0]Ϊ���������ͷָ�룬list[maxn-1]Ϊ���������ͷָ�룬��-1����ʾΪ��
void initList(std::vector<node>& list)
{
	printf("�����ʼ��\n");
	for (int i = 0; i < maxn - 2; i++)
	{
		list[i].next = i + 1;
	}
	list[maxn - 2].next = mynull;//��Ϊ���һ��Ԫ��Ϊ����ͷ��㣬������ǰһ������ָ����Ϊ��
	list[maxn - 1].next = mynull;//��������ĳ�ʼͷ����nextΪ��
	return;
}
//���ر���������еĵ�һ������λ��
int mallocEmptyNode(std::vector<node>& list)
{
	int k = list[0].next;//�����������һ������ַ
	if (k != mynull)//��ʾ��ǰ�п���������д洢
	{
		list[0].next = list[k].next;//��ȡ����һ�����ý��ĵ�ַ
	}
	return k;
}
//���±�Ϊpos�Ŀ��н����յ�����������
void freeEmptyNode(std::vector<node> list, int pos)
{
	list[pos].next = list[0].next;
	list[0].next = pos;
}
//��ȡ������
int listLength(std::vector<node> list)
{
	int len = 0;
	int p = list[maxn - 1].next;//��һ�����ĵ�ַ
	while (p != mynull)
	{
		len++;
		p = list[p].next;//����
	}
	return len;
}
//�����㵽������
//��array�е�posԪ��֮ǰ�����µ�����Ԫ��elem
void listInsert(std::vector<node>& list, int pos, dataType elem)
{
	//printf("����Ԫ��:\n");
	if (pos<1 || pos>listLength(list) + 1)
	{
		printf("����λ�ò��Ϸ�");
		return;
	}
	int q = mallocEmptyNode(list);//��ȡ����ı�������Ŀռ�
	if (q != mynull)
	{

		int p = maxn - 1;//���������ͷ���λ��
		for (int i = 0; i < pos - 1; i++)//Ѱ�Ҳ���λ��
		{
			p = list[p].next;
		}
		list[q].next = list[p].next;
		list[p].next = q;
		list[q].data = elem;//��ֵ
	}

}
//ɾ��
//ɾ����pos��Ԫ��
void listDelete(std::vector<node>& list, int pos)
{
	//printf("ɾ��Ԫ��\n");
	if (pos<1 || pos>listLength(list) + 1)
	{
		printf("ɾ��λ�ò��Ϸ�����û��Ԫ��\n");
		return;
	}
	int p = maxn - 1;
	for (int i = 0; i < pos - 1; i++)//Ѱ��ɾ��λ�õ�ǰ�����ĵ�ַ
	{
		p = list[p].next;
	}
	int delPos = list[p].next;
	list[p].next = list[list[p].next].next;//�������
	freeEmptyNode(list, delPos);//�ͷŽ��
}
//��������
void listTraverse(std::vector<node> list)
{
	int p = list[maxn - 1].next;
	while (p != mynull)
	{
		printf("%d ", list[p].data);
		p = list[p].next;//����
		if (p == mynull)
		{
			printf("\n");
		}
	}
}
//����Ԫ��
void listSearch(std::vector<node> list, dataType elem)
{
	int p = list[maxn - 1].next;
	while (p != mynull)
	{
		if (elem == list[p].data)
		{
			printf("�ҵ���Ԫ��\n");
			return;
		}
		//printf("%d ", list[p].data);
		p = list[p].next;//����
	}
	printf("û�ҵ�\n");
}
int main()
{
	//��������
	std::vector<node> list(maxn);
	int n;
	initList(list);//��ʼ������
	//����Ԫ��
	printf("����Ԫ�أ�\n");
	for (int i = 1; i <= 20; i++)
	{
		listInsert(list, i, i * i);
	}
	//���
	listTraverse(list);
	//����Ԫ��
	printf("����Ԫ��4��\n");
	listSearch(list, 4);//�и�Ԫ��
	printf("����Ԫ��99��\n");
	listSearch(list, 99);//�޸�Ԫ��
	//ɾ��Ԫ��
	printf("ɾ���ڶ���Ԫ�أ�\n");
	listDelete(list, 2);
	//���
	listTraverse(list);
	return 0;
}