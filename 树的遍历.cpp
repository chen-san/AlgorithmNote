//树的遍历

//先序
void preOrder(node* root){
	if (root == NULL) return;//递归边界要写在最前面
	printf("%d\n", root->data);
	preOrder(root->lchild);//其实可以改写成if(root->lchild != NULL) preOrder(root->lchild); 但是这样的写法，非典型“递归”
	preOrder(root->rchild);
}

//inOreder postOrder 类似，不提

//层序
void layerOrder(node* root){
	queue<node*> q;//设一个node*队列
	q.push(root);
	while (!q.empty()){
		node* now = q.front;
		q.pop;//紧跟上面的
		printf("%d\n", now->data);
		if (now->lchild != NULL) q.push(now->lchild);
		if (now->rchild != NULL) q.push(now->rchild);
	}
}

//计算层数的方法，node结构里面定义一个layer
void layerOrder(node* root){
	queue<node*> q
	root->layer = 1;//
	q.push(root);
	while (!q.empty()){
		node* now = q.front;
		q.pop;
		printf("%d\n", now->data);
		if (now->lchild != NULL){
			now->lchild->layer = now->layer + 1;//它的层数等于它老爹的加一
			q.push(now->lchild);
		} 
		if (now->rchild != NULL) {
			now->rchild->layer = now->layer + 1;
			q.push(now->rchild);
		}
	}
}