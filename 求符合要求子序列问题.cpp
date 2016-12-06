//求符合要求的子序列 DFS方法

//N个数选K个数，之和为X，若有多种方案，则选平方和最大者,并保存数列

int maxSqu = -1;

int n, k, x;
int A[];
vector<int> temp, ans;

void DFS(int index, int nowK, int nowX, int nowSqu){
	if (nowK == k && nowX == x){ //死胡同
		if (nowSqu > maxSqu){
			maxSqu = nowSqu;
			ans = temp;
		}
		return;
	}

	if (index == n || nowK > k || nowX > x) return;

	temp.push_back(A[index]);
	DFS(index + 1, nowK + 1, nowX + 1, nowSqu + A[index] * A[index]);

	temp.pop(A[index]);
	DFS(index + 1, nowK, nowX, nowSqu);
}