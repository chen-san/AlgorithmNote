//背包问题 DFS方法

#include<cstdio>

const int maxn = 30;

int n, V, maxValue;

int w[maxn], v[maxn];

void DFS(int index, int sumW, int sumV){
	if (index == n){ //死胡同
		if (sumV > maxValue){
			maxValue = sumV;
		}
	}

	DFS(index + 1, sumW, sumV);//两个分叉口
	if (sumW + w[index] <= V)
		DFS(index + 1, sumW + w[index], sumV + v[index]);
}

int main(){
	DFS(0, 0, 0);
	return 0;
}