շת�����

��֪��Ϊʲôһֱ�ǲ�ס

int gcd(int a, int b){//һ��ʼ���ñȽϴ�С�����Լ�����ȥ��
	if (b == 0) return a;
	else return gcd(b, a % b);
}

����

int gcd(int a, int b){
	return !b ? a : gcd(b, a % b);
}