//严格递增序列
//非递归写法
int binarySearch(int A[], int left, int right, int x){
	int mid;
	while(left <= right){
		mid = (right - left) / 2 + left;//防止溢出
		if(A[mid] == x) return mid;
		else if(A[mid] < x){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	
	return -1;//没找到
}

//非递减序列
//找到第一个大于等于x的位置
//关键是根据mid位置元素与查询元素x的大小关系

int lower_bound(int A[], int left, int right, int x){这里上界应该取n，因为有可能x大于所有元素。
	int mid;
	while(left < right){
		mid = left + (right - left) / 2 + left;
		if(A[mid] >= x) right = mid;
		else left = mid + 1;
	}
	return left;
}

//找第一个大于x的位置也是类似