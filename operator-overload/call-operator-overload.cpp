
//**4.5.6**

#include<iostream>
using namespace std;
class Myprint {
public:
	void operator()(string test) {
		cout << test << endl;
	}
};
void test02(string test) {
	cout << test << endl;
}
void test01() {
	Myprint myprint;
	myprint("xinei");//因为很像函数，所以被称为仿函数。。。仿函数很灵活，没固定写法
	//不能这样写Myprint myprint("lllll");
	test02("hhh");
}
class Myprint02 {
public:
	int operator()(int num1, int num2) {//指针会更好吗
		int a = num1 + num2;
		return a;
	}
};
void test03() {
	Myprint02 myprint02;
	int ret = myprint02(100, 100);
	cout << "ret=" << ret << endl;
	cout << Myprint02()(100, 100) << endl;//类名+小括号+（xx）为匿名函数对象
}
int main() {
	test01();
	test03();
}