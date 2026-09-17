
//**4.6.5**

#include<iostream>
using namespace std;
class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base {
public:
	int m_D;
};
void test01() {
	cout << "sizeof=" << sizeof(Son) << endl;//父类的非静态成员属性都会被子类继承，
}
//可用开发人员命令提示工具查看对象模型
//1.跳转盘符和文件路径（包括cpp文件的文件夹）（用cd）
//2.查看命名cl /d1 reporSingleClassLayout类名 文件名（xx.cpp）
int main() {
	test01();
}