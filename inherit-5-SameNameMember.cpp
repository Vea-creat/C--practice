#include<iostream>
using namespace std;
class Base {
public:
	Base() {
		m_A = 100;
	}
	void func() {
		cout << "Base-func()" << endl;
	}
	void func(int a) {
		cout << "Base-func(int a)" << endl;
	}
	int m_A;
};
class Son :public Base {
public:
	Son() {
		m_A = 200;
	}
	void func() {
		cout << "Son-func()" << endl;
	}
	int m_A;//明确两个不同的m_A，防止输出两个200
};
void test01() {
	Son s;
	cout << "Son的m_A=" << s.m_A << endl;
	cout << "Base的m_A=" << s.Base::m_A << endl;//这样加前缀
}
void test02() {
	Son s;
	s.Base::func();//这样
	s.Base::func(100);//不加Base前缀时重载失效（因为子类同名函数会隐藏掉父类中所有同名函数（子类在构造/析构和这里的待遇都很好））。。。加作用域解隐藏
}
void test03() {

}
int main() {
	test01();//父类和子类一共只有一个非同名函数时，子类都可调，有同名时若构建Son对象则默认调子类
	test02();
}
