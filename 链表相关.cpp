//链表节点
struct node{
	int data;//也可是是其它
	node* next;
}

//新建链表，假设给了一个数组建链表
node* create(int Array[]){//返回的是头结点的指针！
	node* head = new node;
	head->next = NULL;//初始化头结点，因为头结点数据域不放东西，所以只初始化指针域
	
	node* pre = head;
	node* p;
	//这里要用到“双指针”思想，该“指针”非彼指针
	for(int i = 0; i < n;i++){
		p = new node;
		p->data = Array[i];
		p->next = NULL;//初始化该节点
		
		pre->next = p;//让上一个节点，指向该节点
		pre = p;//上个节点变成该节点，这两步很关键！
	}
	
	return head;//返回头结点指针
}

//查找
int search(node* head, int x){
	node* p = head->next;//头结点不存数据
	int count = 0;
	while(p != NULL){//只要不是空地址
		if(p->data == x) count++;
		p = p->next;
	}
	return count;
}

//插入太简单，不写了

//删除,这个也要用到双指针的思想
void del(node* head, int x){
	node* p = head->next;
	node* pre = head;
	while(p != NULL){
		if(p->data == x){
			pre->next = p->next;
			delete(p);//这里是释放指针空间而不是删除p
			p = pre->next;
		}
		else{
			pre = p;
			p = p->next;
		}
	}
	
}