//ȫ����

#include <iostream>
using namespace std;

const int maxn = 11;

int n;
int p[maxn];
bool vis[maxn] = { false };

void f(int index){
	if (index == n + 1){   //�ݹ�߽�
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
			f(index + 1);    //�ݹ�ʽ

			vis[i] = false;  //�ؼ�
		}
	}
}


int main(){
	n = 3;
	f(1);
	return 0;
}