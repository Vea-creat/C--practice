#include<iostream>
using namespace std;
class Base {
public:
	static int m_A;//这样
	static void func() {
		cout << "Base-static void func()" << endl;
	}
};
int Base::m_A = 100;//类外初始化，因为静态成员函数要在全局区，而类本身只是个规则或说明书。。。这里初始化不用加Base
                    //无论什么情况，加前缀似乎都更安全
class Son :public Base {
public:
	static int m_A;
    static void func() {
		cout << "Son-static void func()" << endl;
	}
};
int Son::m_A = 200;
void test01() {
	cout << "通过对象访问" << endl;
	Son s;
	cout << "Son的m_A=" << s.m_A << endl;
	cout << "Son的m_A=" << s.Base::m_A << endl;//"s"表示用s的对象方式访问，"Base::"代表访问父类作用域下

	cout << "通过类名访问" << endl;//只有静态成员能用类名访问，因为静态唯一性，由不同对象共享
	cout << "Son的m_A=" << Son::m_A << endl;
	cout << "Base的m_A=" << Son::Base::m_A << endl;//第一个"Son::"代表用Son的类名方式访问，第二个"Base::"代表访问父类作用域下。。。其实不写Son::也可以
}
void test02() {
	cout << "通过对象访问" << endl;
	Son s;
	s.func();
	s.Base::func();
	cout << "通过类名访问" << endl;
	Son::func();//这不叫匿名对象，匿名对象是 类名+（）+（xxx）,中间的小括号就是匿名的意思
	Son::Base::func();
}//子类依旧会隐藏父类，所以要加作用域
int main() {
	//test01();
	test02();
}