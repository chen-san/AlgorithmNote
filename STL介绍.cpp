//STL c++��׼ģ���
#include <libraryname>
using namespace std;

//vector
���壺
vector<typename> name;

vector<vector<typename> > name;

���ʣ�
1.�±���ʣ�v[0] ~v[v.size() - 1]

2.��һ��������������ָ�룩
vector<typename> v;
vector<typename>::iterator it;
������it�� vector<typename>::iterator���ͱ���
��������ֵ��
it = v.begin() vector��Ԫ�ص�ַ
it = v.end() vectorβԪ�ص�ַ����һ��ַ
ͨ�� *it������vector��Ԫ��
���磺it = v.begin();
*(it + i) �ȼ��� v[i]

һЩ������
push_back(x) ����
pop_back() ɾ��βԪ��
size() ����Ԫ�ظ���
clear() ���

//set 
�Զ����򣬲����ظ�Ԫ�ص�����

���壺
ͬvector

���ʣ�
ֻ����iterator ��֧��it��һ������������*��it + 3����ֻ������

����
insert(x) ����
find(x) ����x��Ӧ�ĵ�����������Ҳ���x���򷵻�s.end(),
erase():
1.�����Ǹ�ֵ
2.�����Ǹ���������ûɶ�ã�
size()
clear() 

//map
�Զ����򣬲����ظ�Ԫ�صļ�ֵ��

���壺
map<typename1, typename2> mp;

���ʣ�
1.�±�mp[key](Ҳ�������±�����ֵ)
2.����������ͬ��*it
it->firstΪ����it->secondΪֵ

����ͬset