//���Լ��

#include <cstdio>

int gcd(int a, int b){
	if (b == 0)
		return a;
	else
		return gcd(b, a% b);
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	if (n < m){
		int temp = n;
		n = m;
		m = temp;
	}
	printf("%d", gcd(n, m));
	return 0;
}

������˳������Լ����Ϊ��С������