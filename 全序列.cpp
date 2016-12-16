//全序列

#include <iostream>
using namespace std;

const int maxn = 11;

int n;
int p[maxn];
bool vis[maxn] = { false };

void f(int index){
	if (index == n + 1){   //递归边界
		for (int i = 1; i <= n; i++){
			cout << p[i];
		}
		cout << endl;
		return;
	}

	for (int i = 1; i <= n; i++){
		if (vis[i] == false){
			p[index] = i;
			vis[i] = true;
			f(index + 1);    //递归式

			vis[i] = false;  //关键
		}
	}
}


int main(){
	n = 3;
	f(1);
	return 0;
}