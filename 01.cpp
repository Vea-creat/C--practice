<<<<<<< HEAD
﻿#include<iostream>
using namespace std;
void test01() {
	int d = 100;
		do {
			int a = d % 10;
			int b = d % 100 / 10;
			int c = d / 100;
			if (d == a * a * a + b * b * b + c * c * c) {
				cout << d << endl;//是否加括号
				d++;
			}
			else {
				d++;
			}
		} while (d < 1000);
}
int main() {
	test01();
=======
﻿//添加，显示，查找，修改，删除，清空，退出
#include<iostream>
using namespace std;
struct Member {
	string name;
	int age = 0;
	int phone = 0;
};
void test01() {//最好不同功能细分不同函数
	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.查找联系人" << endl;
	cout << "4.修改联系人" << endl;
	cout << "5.删除联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "7.退出系统" << endl;
}
void test1(Member arr[],int b) {
		cout << "姓名" << endl;
		cin >> arr[b].name;
		cout << "年龄" << endl;
		cin >> arr[b].age;
		cout << "电话" << endl;
		cin >> arr[b].phone;
		cout << "保存成功" << endl;
		system("pause");
		system("cls");
		test01();
}
void test2(Member arr[],int b) {
	for (int c = 0;c < b;c++) {
		int d = c + 1;
		cout << d <<"、姓名:" << "\t" << arr[c].name << "\t" << "年龄:" << "\t" << arr[c].age << "\t" << "电话:" << "\t" << arr[c].phone << endl;
	}
	system("pause");
	system("cls");
	test01();
}
void test3(Member arr[]) {
	int d = 0;
	cout << "请输入查找对象序号" << endl;
	cin >> d;
	int e = d - 1;
	cout << "姓名:" << "\t" << arr[e].name << "\t" << "年龄:" << "\t" << arr[e].age << "\t" << "电话:" << "\t" << arr[e].phone << endl;
	system("pause");
	system("cls");
	test01();
}
void test4(Member arr[]) {
	int f = 0;
	cout << "请选择修改对象的序号" << endl;
	cin >> f;
	int j = f - 1;
	cout << "姓名" << endl;
	cin >> arr[j].name;
	cout << "年龄" << endl;
	cin >> arr[j].age;
	cout << "电话" << endl;
	cin >> arr[j].phone;
	cout << "修改成功" << endl;
	system("pause");
	system("cls");
	test01();
}
void test5(Member arr[],int b) {//只能是这样传指针吗
	int g;
	cout << "请选择删除对象的序号" << endl;
	cin >> g;
	int i = g - 1;
	for (int h = 0;h < b - g;h++) {
		arr[i] = arr[i + 1];
	}
	cout << "删除成功" << endl;
	system("pause");
	system("cls");
	test01();
}
void test02(Member arr[]) {
	int b = 0;
	while (1) {//用可手动中断的死循环保留记录
		int num = 0;
		cin >> num;
		switch (num) {
		case 1:
			test1(arr,b);//传数组只用来传数组内地址及对应值
			b++;
			break;//break后退出switch结构，但为什么还执行cin？？？
		case 2:
			test2(arr,b);//此处不用++
			break;
		case 3:
			test3(arr);
			break;
		case 4:
			test4(arr);
			break;
		case 5:
			test5(arr,b);
			b--;
			break;
		case 6:
			b = 0;//并非真清空，输入新信息时才会重置
			cout << "清空成功" << endl;
			system("pause");
			system("cls");
			test01();
			break;
		case 7:
			cout << "退出系统成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}
int main() {
	Member arr[10];//好像不太好
	test01();
	test02(arr);
>>>>>>> origin/main
}