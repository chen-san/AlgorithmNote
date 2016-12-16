// �ѵĻ�������
#include <algorithm>
#include <iostream>

using namespace std;

const int maxn = 100;
int heap[maxn];
int n;

//���µ���

void downAdjust(int index, int last){ //�����ڵ���±�����һ��Ԫ�ص��±�
	
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

//����
void createHeap(){
	for (int i = n / 2; i >= 1; i--){
		downAdjust(i, n);
	}
}

//ɾ���Ѷ�Ԫ��
void deleteTop(){
	swap(heap[1], heap[n--]);
	downAdjust(1, n);
}

