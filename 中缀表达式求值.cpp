//����һ����׺���ʽ����ֵ

//1.�Ȱ���׺���ʽ��Ϊ��׺���ʽ
//2.��׺���ʽ��ֵ

#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <map>

using namespace std;

struct node{
	double num;
	char op;
	bool flag;//true��ʾ���֣�false��ʾ������
};

string str;
stack <node> opS, calS;//������ջ�ͼ����׺������ʽ�õ�ջ
queue<node> q;//��׺������ʽ
map<char, int> op;//��map��ӳ�佨�������������ȼ�

void change(){
	node tmp;
	int i = 0;
	while (i < str.length()){
		if (str[i] >= '0' && str[i] <= '9'){
			tmp.flag = true;
			tmp.num = str[i] - '0';
			i++;
			while (i < str.length() && str[i] >= '0' && str[i] <= '9'){
				tmp.num = tmp.num * 10 + str[i] - '0';
				i++;
			}
			q.push(tmp);
		}
		else{
			while (!opS.empty() && op[str[i]] <= op[opS.top().op]){
				q.push(opS.top());
				opS.pop();
			}

			tmp.flag = false;
			tmp.op = str[i];
			opS.push(tmp);
			i++;
		}

	}
	while (!opS.empty()){
		q.push(opS.top());
		opS.pop();
	}
}

double cal(){
	node tmp, res;
	double num1, num2;
	while (!q.empty()){
		tmp = q.front();
		q.pop();
		if (tmp.flag == true){
			calS.push(tmp);
		}
		else{
			num2 = calS.top().num;
			calS.pop();
			num1 = calS.top().num;
			calS.pop();
			res.flag = true;
			if (tmp.op == '-') res.num = num1 - num2;
			else if (tmp.op == '+') res.num = num1 + num2;
			else if (tmp.op == '*') res.num = num1 * num2;
			else  res.num = num1 / num2;

			calS.push(res);
		}
	}
	return calS.top().num;

}


int main(){
	op['+'] = op['-'] = 1;
	op['*'] = op['/'] = 2;

	while (getline(cin, str), str != "0"){
		for (string::iterator it = str.begin(); it != str.end(); it++){
			if (*it == ' ') str.erase(it);
		}
		change();
		printf("%.2f\n", cal());


	}

	return 0;
}

