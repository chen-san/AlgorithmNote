//链表的创建、查找、插入、删除

//链表由两部分组成，数据域和指针域
//
//struct node{
//	typename data;
//	node* next;
//};
//
//动态申请一段内存空间
//
//node* p = (node*)malloc(sizeof(node)); 用完free(p)
//或者: node* p = new node; 用完delete(p)


//创建
#include <cstdio>

//定义节点结构
struct node{
	int data;
	node* next;
};

node* create(int array[], int length){
	node *p, *head, *pre;//pre为当前节点的前驱节点
	head = new node;
	head->next = NULL;
	pre = head;
	for (int i = 0; i < length; i++){
		//新建一个节点
		p = new node;
		p->data = array[i];
		p->next = NULL;
		//和前面的节点接上
		pre->next = p;
		//pre前移
		pre = p;
	}
	return head;
}

int main(){
	int array[5] = { 1, 2, 3, 4, 5 };
	node* L = create(array, 5);//返回head指针
	L = L->next; //链表第一个节点地址
	//遍历一个链表
	while (L != NULL){
		printf("%d\n", L->data);
		L = L->next;
	}


	return 0;
}

//查找某个元素,传入参数为head指针和要查找的数x
bool search(node* head, int x){
	node* p = head->next;
	while (p != NULL){
		if (p->data == x) return true;
	}
	return false;

}

//插入元素，要插位置为pos(底数从1开始)
void insert(node* head, int pos, int x){
	node* p = head;
	for (int i = 1; i < pos; i++)
		p = p->next;//底数为i的节点的地址，先拿到底数为i - 1位置节点的地址
	node* q = new node;
	//总共分三步
	q->data = x;
	q->next = p->next;
	p->next = q;//i-1位置节点指针域再指向q
}

//删除元素，删除给定元素x
//用到双指针思想，*p *pre
void del(node* head, int x){
	node *p = head->next;
	node *pre = head;
	while (p != NULL){
		if (p->data == x){
			pre->next = p->next;
			delete(p);//释放掉这个内存(释放掉后p变为NULL)
			p = pre->next;
		}
		else{
			p = p->next;
			pre = pre->next;
		}
	}
}


