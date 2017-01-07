//栈用数组st[]实现，用int型TOP变量表示栈顶元素下标
int TOP;
int st[];

//清空
void clear(){
	TOP = -1;
}

//获取栈内元素个数
int size(){
	return TOP + 1;
}

//判断空
bool empty(){
	return TOP == -1;
	/*if (TOP == -1) return true;
	else return false;*/
}

//进栈
void pop(int x){
	st[++TOP] = x;
}

//出栈
void push(){
	TOP--;
}

//取栈顶元素，这个跟上面那个要搞清楚，出栈并不返回栈顶元素,返回栈顶元素并不出栈
int top(){
	return st[TOP];
}
