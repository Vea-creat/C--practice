
//**4.6.4**

#include<iostream>
using namespace std;
class Base {
public:
	Base() {
		cout << "Base构造函数" << endl;
	}
	~Base() {
		cout << "Base析构函数" << endl;
	}
};
class Son :public Base{
public:
	Son() {
		cout << "Son构造函数" << endl;
	}
	~Son() {
		cout << "Son析构函数" << endl;
	}
};
void test01() {
	//Base b;//名字用类的小写缩写
	//son比father上班待遇好，上班更晚，下班更早
	Son s;
}
int main() {
	test01();
}