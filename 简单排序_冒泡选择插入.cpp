//���ּ�����ð�ݡ�ѡ�񡢲���

int n;
int a[n];
//ѡ�����򣺴�a[i]-a[n-1]֮��ѡ����С��ֵ����a[i]��������i��0��n-1ö�٣�������Сֵ����һ�鸴�Ӷ�Ϊn,����Ϊn2
void selectSort(){
	for (int i = 0; i < n; i++){//��ʵ����д��i < n-1, ִ��n-1�ξ͹���

		int k = i;//�����ҵ���Сֵ����ΪҪ����λ�ã��������±�
		for (int j = i; j < n; j++){
			if (a[j] < a[k])
				k = j;
		}

		int tmp = a[i];
		a[i] = a[k];
		a[k] = tmp;//a[i]��a[k]��������swap(a[i], a[k]��Ҳ��
	}
}
//ð�����򣺴�a[0]-a[n-1-i]֮��ѡ�����ֵ����a[n-1-i]�������������̲�һ����
void paoSort(){
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - 1 - i; j++){
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

//�������򣺽�a[i]���뵽a[0]-a[i-1]���У�i��1��n-1ö�٣�
void insertSort(){
	for (int i = 1; i <= n - 1; i++){
		for (int j = i; j > 0; j--){
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);//������Ѳ���Ĺ��̣���Ϊ��ð�ݵĹ��̡�ʤ�ڼ�����ˣ�����ÿ�ζ������θ�ֵ�����и��õġ�
			else
				break;//��ǰ���Ǹ����ˣ��Ͳ���ѭ����ȥ�ˣ���Ҳ�Ǹ���ð������ĵط���
		}
	}
}

//����swap�������������
void insertSort(){
	for (int i = 1; i <= n - 1; i++){
		int tmp = a[i], j;//������������Ϊ����ѭ��������
		for (j = i; j > 0; j--){
			if (tmp < a[j - 1])
				a[j] = a[j - 1];
			else
				break;
		}
		a[j] = tmp;
	}
}