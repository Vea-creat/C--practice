
//吕布算法？

#include<iostream>
using namespace std;
class Base1 {
public:
	Base1() {
		m_A = 100;
	}
	int m_A;
};
class Base2 {
public:
	Base2() {
		m_A = 200;
	}
	int m_A;
};
class Son :public Base1, public Base2 {//这样子多继承，直接加个逗号，且能选继承方式
public:
	Son() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test01() {
	Son s;
	cout << sizeof(Son) << endl;//16
	cout << s.Base1::m_A << endl;
	cout << s.Base2::m_A << endl;//多继承比较不方便，要区分，实际开发少用
}//可用“报告单个类布局”查看
int main() {
	test01();
}