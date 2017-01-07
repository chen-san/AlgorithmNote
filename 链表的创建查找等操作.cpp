//����Ĵ��������ҡ����롢ɾ��

//��������������ɣ��������ָ����
//
//struct node{
//	typename data;
//	node* next;
//};
//
//��̬����һ���ڴ�ռ�
//
//node* p = (node*)malloc(sizeof(node)); ����free(p)
//����: node* p = new node; ����delete(p)


//����
#include <cstdio>

//����ڵ�ṹ
struct node{
	int data;
	node* next;
};

node* create(int array[], int length){
	node *p, *head, *pre;//preΪ��ǰ�ڵ��ǰ���ڵ�
	head = new node;
	head->next = NULL;
	pre = head;
	for (int i = 0; i < length; i++){
		//�½�һ���ڵ�
		p = new node;
		p->data = array[i];
		p->next = NULL;
		//��ǰ��Ľڵ����
		pre->next = p;
		//preǰ��
		pre = p;
	}
	return head;
}

int main(){
	int array[5] = { 1, 2, 3, 4, 5 };
	node* L = create(array, 5);//����headָ��
	L = L->next; //�����һ���ڵ��ַ
	//����һ������
	while (L != NULL){
		printf("%d\n", L->data);
		L = L->next;
	}


	return 0;
}

//����ĳ��Ԫ��,�������Ϊheadָ���Ҫ���ҵ���x
bool search(node* head, int x){
	node* p = head->next;
	while (p != NULL){
		if (p->data == x) return true;
	}
	return false;

}

//����Ԫ�أ�Ҫ��λ��Ϊpos(������1��ʼ)
void insert(node* head, int pos, int x){
	node* p = head;
	for (int i = 1; i < pos; i++)
		p = p->next;//����Ϊi�Ľڵ�ĵ�ַ�����õ�����Ϊi - 1λ�ýڵ�ĵ�ַ
	node* q = new node;
	//�ܹ�������
	q->data = x;
	q->next = p->next;
	p->next = q;//i-1λ�ýڵ�ָ������ָ��q
}

//ɾ��Ԫ�أ�ɾ������Ԫ��x
//�õ�˫ָ��˼�룬*p *pre
void del(node* head, int x){
	node *p = head->next;
	node *pre = head;
	while (p != NULL){
		if (p->data == x){
			pre->next = p->next;
			delete(p);//�ͷŵ�����ڴ�(�ͷŵ���p��ΪNULL)
			p = pre->next;
		}
		else{
			p = p->next;
			pre = pre->next;
		}
	}
}


