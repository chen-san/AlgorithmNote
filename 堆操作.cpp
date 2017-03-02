int heap[maxn];

//向下调整
void downAdjust(int now, int last){//要调整结点的下标和最后结点的下标
	int i = now, j = 2 * i;//j先设为左子树
	while(j <= last){
		if(j <= last && heap[j + 1] > heap[j])//找到左右子树的最大值
			j++;
		if(heap[j] > heap[i]){
			swap(heap[j], heap[i]);
			i = j;
			j = 2 * i;
		}
		else{
			break;//不用往下调整了
		}
	}
} 

//建一个最大堆
void creatHeap(){
	for(int i = n / 2; i >= 1;i--)//完全二叉树小标从n到1，那么最后一个有子树的结点下标是n /2
		downAjust(i, n);
} 

//堆排序， 每次交换堆顶和最后一个元素，然后向下调整

void heapSort(){
	for(int i = n; i > 1; i--){
		swap(heap[1], heap[i]);
		downAdjust(1, i - 1);
	}
}
