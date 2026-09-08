#include<iostream>
using namespace std;
void test01() {
	int num = 1;
	for (;num < 100;num++) {
		int a = num % 10;
		int b = num % 10 / 10;
		int c = num % 7;
		if (a == 7 || b == 7 || c == 0) {
			cout << "敲桌子" << endl;
		}
		else {
			cout << num << endl;
		}
	}
}
int main() {
	test01();
}