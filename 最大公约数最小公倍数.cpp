//最大公约数

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

两者相乘除以最大公约数即为最小公倍数