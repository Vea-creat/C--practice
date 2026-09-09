
//**4.5.5**

#include<iostream>
using namespace std;
class Person {
public:
	Person(string name, int age) {
		m_age = age;
		m_name = name;
	}
	bool operator==(Person&p) {//差点给bool忘了
		if (this->m_name == p.m_name && this->m_age == p.m_age) {
			return true;//?
		}
		return false;//true的return已经使函数结束，所以return false不用加else
	}
	string m_name;
	int m_age = 0;
};
void test01() {
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2) {
		cout << "p1==p2" << endl;
	}
	else {
		cout << "p1!=p2" << endl;
	}
	if (p1 != p2) {//c++20的版本引入运算符重写功能（只要先写了==，编译器会自动脑补!=的重载）
		cout << "p1!=p2" << endl;
	}
	else {
		cout << "p1==p2" << endl;
	}
}
int main() {
	test01();
}