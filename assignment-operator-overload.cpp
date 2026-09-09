#include<iostream>
using namespace std;
class Person {
public:
	Person(int age) {
		m_age = new int(age);
	}
	int*m_age;
	Person operator=(Person&a) {//记得用Person&作返回值
		//这里的this只是表面归属，没有解引用的意思
		//因为直接改指针只能改指向，所以应该先释放内存并归还地址，再重新申请新的堆区内存和地址
		if (m_age != nullptr) {
			delete m_age;
			m_age = nullptr;
		}
		m_age = new int(*a.m_age);
		return *this;//传上去对象，返回值为Person才能完成连等操作（a=b=c）
	}
};
int main() {
		Person a(18);
		Person b(20);
		b = a;
		std::cout << "a的年龄为" << *a.m_age << endl;
		std::cout << "b的年龄为" << *b.m_age << endl;
}
