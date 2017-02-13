//三种简单排序：冒泡、选择、插入

int n;
int a[n];
//选择排序：从a[i]-a[n-1]之间选择最小的值，与a[i]交换，（i从0到n-1枚举），找最小值遍历一遍复杂度为n,整体为n2
void selectSort(){
	for (int i = 0; i < n; i++){//其实可以写成i < n-1, 执行n-1次就够了

		int k = i;//遍历找到最小值，因为要交换位置，所以用下标
		for (int j = i; j < n; j++){
			if (a[j] < a[k])
				k = j;
		}

		int tmp = a[i];
		a[i] = a[k];
		a[k] = tmp;//a[i]和a[k]交换，用swap(a[i], a[k]）也行
	}
}
//冒泡排序：从a[0]-a[n-1-i]之间选择最大值，与a[n-1-i]交换。交换过程不一样，
void paoSort(){
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - 1 - i; j++){
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

//插入排序：将a[i]插入到a[0]-a[i-1]当中，i从1到n-1枚举，
void insertSort(){
	for (int i = 1; i <= n - 1; i++){
		for (int j = i; j > 0; j--){
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);//我这里把插入的过程，变为了冒泡的过程。胜在简洁明了，但是每次都是三次赋值，还有更好的。
			else
				break;//比前面那个大了，就不用循环下去了，这也是高于冒泡排序的地方。
		}
	}
}

//不用swap，而是整体后移
void insertSort(){
	for (int i = 1; i <= n - 1; i++){
		int tmp = a[i], j;//放在外面是因为出了循环还有用
		for (j = i; j > 0; j--){
			if (tmp < a[j - 1])
				a[j] = a[j - 1];
			else
				break;
		}
		a[j] = tmp;
	}
}