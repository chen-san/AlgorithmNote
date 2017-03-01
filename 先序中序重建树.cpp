//���������������pre[n]�������������in[n]����
int pre[n], in[n];

node* create(int preL, int preR, int inL, int inR){
	if (preL > preR){//�ݹ�߽�,��ʵ���ѵľ������
		return NULL;
	}
	node* root = new node;
	root->data = pre[preL];//������
	
	//��������
	int k;
	for (int k = inL; k <= inR; k++){
		if (in[k] == pre[preL]) break;
	}

	int leftNum = k - inL;
	root->lchild = node* create(preL + 1, preL + leftNum, inL, k - 1);
	root->rchild = node* create(preL + leftNum + 1, preR, k + 1, inR);

}