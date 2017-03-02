//树的静态写法，不一定是二叉树

struct node{
	int data;
	vector <int> child;
};

void preOrder(int root){
	//这里不用写递归边界
	printf("%d", node[root].data);
	for(int i = 0; i < node[root].child.size(); i++){
		preOrder(node[root].child[i]);
	}
}

void layerOrder(int root){
	queue<int> q;
	q.push(root);
	while(!q.empty()){
		int now = q.front();
		q.pop();
		printf("%d", node[q].data);
		for(int i < 0; i < node[now].child.size(); i++){
			q.push(node[now][i]);
		}
	}
}