#include<iostream>
using namespace std;
class Animal {
public:
	int m_age;
};
class Sheep :virtual public Animal {//加virtual变虚继承，则Animal称为虚基类

};
class Camel :virtual public Animal {

};
class Yangtuo :public Sheep, public Camel {

};//原本两份相同数据使资源浪费
void test01() {
	Yangtuo yt;
	yt.Sheep::m_age = 10;
	yt.Camel::m_age = 18;
	cout << yt.Sheep::m_age << endl;
	cout << yt.Camel::m_age << endl;
	cout << yt.m_age << endl;
}
int main() {
	test01();
}
//vbptr虚基类指针（所以能保证同一个数据）
//v-virtual虚
//b-base基类
//ptr-pointer指针
//该指针指向vbtable（虚基类表）
//指针加偏移量得到同一个值