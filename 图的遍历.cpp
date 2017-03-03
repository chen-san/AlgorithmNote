//图的遍历
//dfs

//邻接矩阵：
int G[Maxv][Maxv];
bool vis[maxv] = {false};

void DFS(int u){
	vis[u] = true;
	//要对u的操作在这里进行
	for(int v = 0; v < n; v++){//从u出发的点开始枚举
		if(vis[v] == false && G[u][v] != INF){//没被访问且u可到达
			DFS(v);
		}
	}
}

void DFSTrave(){
	for(int u = 0; u < n; u++){
		if(vis[u] == false){
			DFS(u);
		}
	}
}

//邻接表
这里用vector来模拟链表，简单易用
这样vector里面记录就是邻接的点，而不是值，还是有局限

vector<int> G[MAXV];
bool vis[maxv] = {false};

void DFS(int u){
	vis[u] = true;
	//todo
	for(int i = 0; i < G[u].size(); i++){
		v = G[u][i];
		if(vis[v] == false){
			DFS(v);
		}
	}
}

void DFSTrave(){
	for(int iu = 0; u < n; u++){
		if(vis[u] == false){
			DFS(u);
		}
	}
}

//BFS
//邻接矩阵：
void BFS(){
	queue<int> q;
	q.push(u);
	vis[u] = true;//插入队列就算访问过，其实严格来讲应该是inQueue[u] = true;
	
	while(!q.empty()){
		int u = q.front;
		q.pop();//队首元素出对，紧跟上一步
		for(int v = 0; v < n; v++){
			if(vis[v] == false && G[u][v] != INF){//枚举相邻的点
				q.push(v);
				vis[v] = true;
			}
		}
	}
}

void BFSTrave(){
	for(int u = 0; u < n; u++){
		if(vis[u] == false)
			BFS(u);
	}
}

//邻接矩阵
//基本上类似，只是在枚举相邻点的时候有点区别


//dijkstra
int n;
int G[maxv][maxv];
bool vis[maxv] = {false};

int d[maxv];//所求点到各点的最短路径长度
//初始化
fill(d, d + maxv, INF);//一开始假设除了自己之外，所有点都不连通
d[s] = 0;

void dijkstra(int s){
	for(int i = 0; i < n; i++){//这个循环单纯的是循环次数，最多要循环n次
		//第一步，找到d[u]最小且没有访问过的节点
		int min = INF; u = -1;//u当然可以一开始不赋值，这样做是起到一个flag的作用
		for(int j = 0; j < n; j++){//枚举，要找出d[j]最小的点
			if(vis[j] == false && d[j] < min){
				u = j;
				min = d[j];
			}
		}
		if(u == -1) return;//提前结束循环，精简程序
		
		//第二步，以u为中介，开始更新d[]
		vis[u] = true;
		for(int v = 0; v < n; v++){
			if(vis[v] == false && G[u][v] < INF && d[u] + G[u][v] < d[v]){//没被访问且u可到达且以u为中介更优
				d[v] = d[u] + G[u][v];
			}
		}
	}
}
