辗转相除法

不知道为什么一直记不住

int gcd(int a, int b){//一开始不用比较大小，它自己会变过去的
	if (b == 0) return a;
	else return gcd(b, a % b);
}

或者

int gcd(int a, int b){
	return !b ? a : gcd(b, a % b);
}