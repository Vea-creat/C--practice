
//**4.6.2**

//三种继承方式：公共继承，保护继承，私有继承
//子类以protect继承方式会把父类public也变成protect
//子类以public继承方式不影响父类的public和protect

#include<iostream>
using namespace std;
//---------------------------------------------------------------------------------------------------------------------------------------
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1 {
public:
	void func() {
		m_A = 10;//父类公共到子类依旧公共
		m_B = 10;//父类保护到子类依旧保护
	//	m_C = 10;//不能访问
	}
};
void test01() {
	Son1 s1;
	s1.m_A = 100;
//	s1.m_B = 100;报错，protect在类外不能访问，因为虽然父类是public但子类是protect
}
//-------------------------------------------------------------------------------------------------------------------------------------
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 :protected  Base2 {
public:
	void func() {
		m_A = 100;
		m_B = 100;
	//	m_C = 100;父类私有
	}
};
void test02() {
	Son2 s1;
//	s1.m_A = 1000;
//	s1.m_B = 1000;
//	s1.m_C = 1000;
}
//-------------------------------------------------------------------------------------------------------------------------------------
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private  Base3 {//可以把继承方式理解为转换成什么
public:
	void func() {
		m_A = 100;
		m_B = 100;
	//	m_C = 100;父类私有
	}
};
void test03() {
	Son3 s1;
//	s1.m_A = 1000;
//	s1.m_B = 1000;
//	s1.m_C = 1000;
}
class Grandson3 :public Son3 {
public:
	void func() {
	//	m_A = 1000;
	//	m_B = 1000;
	//	m_C = 1000;
	}
};