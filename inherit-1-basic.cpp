
//**4.6.1**

#include<iostream>
using namespace std;
//class Java {
//public:
//	void header() {
//		cout << "首页、公开课、登录、注册" << endl;
//	}
//	void footer() {
//		cout << "帮助中心、交流合作、站内地图" << endl;
//	}
//	void left() {
//		cout << "Java、Python、C++" << endl;
//	}
//	void content() {
//		cout << "Java学科视频" << endl;
//	}
//};
//class Python {
//public:
	//void header() {
	//	cout << "首页、公开课、登录、注册" << endl;
	//}
	//void footer() {
	//	cout << "帮助中心、交流合作、站内地图" << endl;
	//}
	//void left() {
	//	cout << "Java、Python、C++" << endl;
	//}
	//void content() {
	//	cout << "Content学科视频" << endl;
	//}
//};
//void test01() {
//	cout << "Java下载视频页面如下" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "------------------------------------------" << endl;
//	cout << "Python下载视频页面如下" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//}
//int main() {
//	test01();
//}

//以上为反面教材

class Basepage {
public:
	void header() {
		cout << "首页、公开课、登录、注册" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内地图" << endl;
	}
	void left() {
		cout << "Java、Python、C++" << endl;
	}
	void content() {
		cout << "Content学科视频" << endl;
	}
};
class Java :public Basepage {
public:
	void content() {
		cout << "Java学科视频" << endl;
	}
};
class Cpp :public Basepage {
public:
	void content() {
		cout << "C++学科视频" << endl;
	}
};
//语法class子类： 继承方式 父类
//子类 也称 派生类
//父类 也称 基类