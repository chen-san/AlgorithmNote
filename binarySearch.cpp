//二分查找

#include <cstdio>

int binarySearch(int A[], int left, int right, int x){
	while (left <= right){
		int mid = (left + right) / 2;
		if (A[mid] == x)
			return mid;
		else if (A[mid] > x)
			right = mid - 1;
		else
			left = mid + 1;
	}
	
	return -1;//没找到
}

int main(){
	int A[10] = { 1, 3, 4, 6, 7, 8, 10, 11, 12, 15 };
	int x;
	scanf("%d", &x);
	printf("%d", binarySearch(A, 0, 9, x));
	return 0;
}