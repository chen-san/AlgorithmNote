//ջ������st[]ʵ�֣���int��TOP������ʾջ��Ԫ���±�
int TOP;
int st[];

//���
void clear(){
	TOP = -1;
}

//��ȡջ��Ԫ�ظ���
int size(){
	return TOP + 1;
}

//�жϿ�
bool empty(){
	return TOP == -1;
	/*if (TOP == -1) return true;
	else return false;*/
}

//��ջ
void pop(int x){
	st[++TOP] = x;
}

//��ջ
void push(){
	TOP--;
}

//ȡջ��Ԫ�أ�����������Ǹ�Ҫ���������ջ��������ջ��Ԫ��,����ջ��Ԫ�ز�����ջ
int top(){
	return st[TOP];
}
