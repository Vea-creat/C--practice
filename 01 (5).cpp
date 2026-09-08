#include<iostream>
using namespace std;
void test01(int arrpig[]) {
	for (int c = 0;c < 4;c++) {
		for (int b = 0;b < 4;b++) {
			if (arrpig[b] > arrpig[b + 1]) {
				int temp = arrpig[b];
				arrpig[b] = arrpig[b + 1];
				arrpig[b + 1] = temp;
			}
		}
	}
	cout << "最重的猪体重为" << arrpig[4];
}
int main() {
	int arrpig[] = { 3,6,1,5,4 };
	test01(arrpig);
}