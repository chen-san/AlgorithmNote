//���鼯

//��ʼ��
for(int i = 0; i < n; i++){
	father[i] = i;
} 

//�� 
int findFather(int x){
	if(x == father[x]) return x;
	else findFather(father[x]);
}

//��
void unionFather(int a, int b){
	int faA = findFather(a);
	int faB = findFather(b);
	if(a != b)
		father[faA] = faB;
} 
