#include<iostream>
using namespace std;
void test01() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "a的体重是" << endl;
	cin >> a;
	cout << "b的体重是" << endl;
	cin >> b;
	cout << "c的体重是" << endl;
	cin >> c;
	if (a > b) {
		if (a > c) {
			cout << "a最重" << endl;
		}
		else if (a == c) {
			cout << "a和b最重" << endl;
		}
		else {
			cout << "c最重" << endl;
		}
	}
	else if(a<b){
		if (b > c) {
			cout << "b最重" << endl;
		}
		else if (b == c) {
			cout << "b和c最重" << endl;
		}
		else {
			cout << "c最重" << endl;
		}
	}
	else {
		if (a > c) {
			cout << "a和b最重" << endl;
		}
		else if(a == c) {
			cout << "三只一样重" << endl;
		}
		else {
			cout << "c最重" << endl;
		}
	}
}
int main() {
	test01();
}