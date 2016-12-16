// 堆的基本操作
#include <algorithm>
#include <iostream>

using namespace std;

const int maxn = 100;
int heap[maxn];
int n;

//向下调整

void downAdjust(int index, int last){ //调整节点的下标和最后一个元素的下标
	
	int j = 2 * index;
	while (j <= last){
		if (j + 1 <= last && heap[j + 1] > heap[j]) j = j + 1;
		
		if (heap[index] < heap[j]) {
			swap(heap[index], heap[j]);
			index = j;
			j = 2 * index;
		}
		else{
			break;
		}

	}

}

//建堆
void createHeap(){
	for (int i = n / 2; i >= 1; i--){
		downAdjust(i, n);
	}
}

//删除堆顶元素
void deleteTop(){
	swap(heap[1], heap[n--]);
	downAdjust(1, n);
}

