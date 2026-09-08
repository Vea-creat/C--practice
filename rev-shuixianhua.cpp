#include<iostream>
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
}
