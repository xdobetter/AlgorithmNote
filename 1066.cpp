/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *                                                                                                 
 * Blog: https://blog.csdn.net/weixin_41234001                                      
 *                                                                                                 
 * Author: DoBetter                                                               
 *                                                                                                 
 * Time: 2019.12.01                                                                            
 *                                                                                                 
 * Describe: AVL����ʵ��                                           
 *                                                                                                 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 */
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
//����AVL���ṹ
struct node
{
	int height, data;
	node* lchild, *rchild;//�������Һ���
};
//�½����
node* newNode(int v)
{
	node* root = new node;
	root->data = v;//��ֵ
	root->height = 1;//�߶ȳ�ʼΪ1
	root->lchild = root->rchild = NULL;//���Һ���Ϊ��
	return root;//���ظ��ڵ�
}
//��ȡ�߶�
int getHeight(node* root)
{
	if (root == NULL) return 0;//�ս�㣬�߶�Ϊ0
	return root->height;//���ظ߶�
}
//����ƽ������
int getFactor(node* root)
{
	//��߼����ұ�
	return getHeight(root->lchild) - getHeight(root->rchild);
}
//���½��߶�-------����Լ�д���ˣ����¸߶�û�и���
void updateHeight(node* root)
{
	//�������������߶��е������+1
	root->height=max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
}
//����
void L(node*& root)
{
	//��¼�����A�����������B�ĵ�ַ
	node* temp = root->rchild;
	//��B�����������ƶ���A
	root->rchild = temp->lchild;
	//��B�����������ó�A
	temp->lchild = root;
	//���¸Ķ����������ĸ߶�
	updateHeight(root);//��Ϊ��ʱ���ڵ��ѱ��ƶ������·�������ע��һ�����ȸ��¸��ڵ�ĸ߶�
	updateHeight(temp);//�ٸ���temp���ĸ߶�
	//��B�������Ϊ���ڵ�
	root = temp;
}
//����
void R(node*& root)
{
	//��¼���ڵ�B�����������A�ĵ�ַ
	node* temp = root->lchild;
	//��A�����������ƶ���B����������
	root->lchild = temp->rchild;
	//�����������ΪA�����ҽڵ�
	temp->rchild = root;
	//���¸߶�
	updateHeight(root);
	updateHeight(temp);
	//��A�������Ϊ���ڵ�
	root = temp;
}
//����
void insert(node*& root, int v)
{
	//�ս�㣬���в���
	if (root==NULL)
	{
		root = newNode(v);
		return;
	}
	if (v<root->data)
	{
		//�������
		insert(root->lchild, v);
		//������Ҫ���и߶ȸ���
		updateHeight(root);
		//��߱��ұ߸�
		if (getFactor(root)==2)
		{
			//LL
			if (getFactor(root->lchild)==1)
			{
				R(root);//�Ƚ�������

			}
			//LR
			else if (getFactor(root->lchild) == -1)
			{
				L(root->lchild);//��ʹ�����������仯��LL
				R(root);//���������
			}
		}
	}
	//v�Ƚ��ֵ�����ڣ�����������
	else
	{
		insert(root->rchild, v);
		//��������
		updateHeight(root);
		//���ƽ�����ӷ����仯
		if (getFactor(root)==-2)
		{
			//���ΪRR��ƽ������=-1
			if (getFactor(root->rchild)==-1)
			{
				L(root);//���������
			}
			//���ΪRL��ƽ������=1
			if (getFactor(root->rchild)==1)
			{
				//��ʹ����������
				R(root->rchild);
				//�����������
				L(root);
			}
		}
	}
}
//������
node* Create(int A[], int n)
{
	node* root = NULL;//ͷ���Ϊ��'
	for (int i=0;i<n;i++)
	{
		insert(root, A[i]);//����
	}
	return root;//���ظ����
}
//��α�����������Ƿ񹹽���ȷ
void layerOrder(node* root)
{
	queue<node*> Q;
	Q.push(root);
	while (!Q.empty())
	{
		//printf("���������");
		node* front = Q.front();
		printf("%d ", front->data);
		Q.pop();
		if (front->lchild != NULL) Q.push(front->lchild);
		if (front->rchild != NULL) Q.push(front->rchild);
	}
}
int main()
{
	int A[25];
	int n;
	scanf("%d", &n);
	for (int i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
	node* root=Create(A, n);
	/*layerOrder(root);*/
	/*cout << endl;*/
	printf("%d", root->data);//���
	return 0;
}