//������ʵ�ֶ��У�ͷָ��front = -1, rear = -1;
//ͷָ��ָ�����Ԫ�ص�ǰһ��Ԫ�أ�βָ��ָ���βԪ��

int q[];
int front, rear;

//��գ���ʼ��
void clear(){
	front = rear = -1;
}

//��ȡԪ�ظ��������д�С
int size(){
	return rear - front;
}

//�п�
bool empty(){
	return rear == front;
}

//����
void push(int x){
	q[++rear] = x;
}

//����
void pop(){
	front++;
}

//ȡ����Ԫ��
int getFront(){
	return q[front + 1];
}

int getRear(){
	return q[rear];
}

