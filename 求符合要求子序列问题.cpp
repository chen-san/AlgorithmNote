//�����Ҫ��������� DFS����

//N����ѡK������֮��ΪX�����ж��ַ�������ѡƽ���������,����������

int maxSqu = -1;

int n, k, x;
int A[];
vector<int> temp, ans;

void DFS(int index, int nowK, int nowX, int nowSqu){
	if (nowK == k && nowX == x){ //����ͬ
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