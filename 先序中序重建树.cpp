//根据先序遍历序列pre[n]和中序遍历序列in[n]建树
int pre[n], in[n];

node* create(int preL, int preR, int inL, int inR){
	if (preL > preR){//递归边界,其实最难的就是这个
		return NULL;
	}
	node* root = new node;
	root->data = pre[preL];//数据域
	
	//左右子树
	int k;
	for (int k = inL; k <= inR; k++){
		if (in[k] == pre[preL]) break;
	}

	int leftNum = k - inL;
	root->lchild = node* create(preL + 1, preL + leftNum, inL, k - 1);
	root->rchild = node* create(preL + leftNum + 1, preR, k + 1, inR);

}