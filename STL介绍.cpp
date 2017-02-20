//STL c++标准模板库
#include <libraryname>
using namespace std;

//vector
定义：
vector<typename> name;

vector<vector<typename> > name;

访问：
1.下标访问：v[0] ~v[v.size() - 1]

2.设一个迭代器（类似指针）
vector<typename> v;
vector<typename>::iterator it;
迭代器it是 vector<typename>::iterator类型变量
迭代器赋值：
it = v.begin() vector首元素地址
it = v.end() vector尾元素地址的下一地址
通过 *it来访问vector中元素
比如：it = v.begin();
*(it + i) 等价于 v[i]

一些操作：
push_back(x) 插入
pop_back() 删除尾元素
size() 返回元素个数
clear() 清空

//set 
自动有序，不含重复元素的数组

定义：
同vector

访问：
只能用iterator 不支持it加一个常数访问如*（it + 3），只能自增

操作
insert(x) 插入
find(x) 返回x对应的迭代器，如果找不到x，则返回s.end(),
erase():
1.参数是个值
2.参数是个迭代器（没啥用）
size()
clear() 

//map
自动有序，不含重复元素的键值对

定义：
map<typename1, typename2> mp;

访问：
1.下标mp[key](也可以用下标来赋值)
2.迭代器，不同于*it
it->first为键，it->second为值

操作同set