//���ı���

//����
void preOrder(node* root){
	if (root == NULL) return;//�ݹ�߽�Ҫд����ǰ��
	printf("%d\n", root->data);
	preOrder(root->lchild);//��ʵ���Ը�д��if(root->lchild != NULL) preOrder(root->lchild); ����������д�����ǵ��͡��ݹ顱
	preOrder(root->rchild);
}

//inOreder postOrder ���ƣ�����

//����
void layerOrder(node* root){
	queue<node*> q;//��һ��node*����
	q.push(root);
	while (!q.empty()){
		node* now = q.front;
		q.pop;//���������
		printf("%d\n", now->data);
		if (now->lchild != NULL) q.push(now->lchild);
		if (now->rchild != NULL) q.push(now->rchild);
	}
}

//��������ķ�����node�ṹ���涨��һ��layer
void layerOrder(node* root){
	queue<node*> q
	root->layer = 1;//
	q.push(root);
	while (!q.empty()){
		node* now = q.front;
		q.pop;
		printf("%d\n", now->data);
		if (now->lchild != NULL){
			now->lchild->layer = now->layer + 1;//���Ĳ����������ϵ��ļ�һ
			q.push(now->lchild);
		} 
		if (now->rchild != NULL) {
			now->rchild->layer = now->layer + 1;
			q.push(now->rchild);
		}
	}
}