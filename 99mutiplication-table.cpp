#include<iostream>
using namespace std;
void test01() {
	for (int a = 1;a < 10;a++) {//先行后列
		for (int b = 1;b <= a;b++) {
			int c = a * b;
			cout << b << "*" << a << "=" << c << "\t";
			if (a == b) {
				cout << endl;
			}
		}
	}
}
int main() {
	test01();
}
