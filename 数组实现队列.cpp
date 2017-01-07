//用数组实现队列，头指针front = -1, rear = -1;
//头指针指向队首元素的前一个元素，尾指针指向队尾元素

int q[];
int front, rear;

//清空，初始化
void clear(){
	front = rear = -1;
}

//获取元素个数，队列大小
int size(){
	return rear - front;
}

//判空
bool empty(){
	return rear == front;
}

//入列
void push(int x){
	q[++rear] = x;
}

//出列
void pop(){
	front++;
}

//取队首元素
int getFront(){
	return q[front + 1];
}

int getRear(){
	return q[rear];
}

