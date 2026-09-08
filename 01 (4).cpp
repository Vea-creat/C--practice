#include<iostream>
using namespace std;
void test01(int arrnum[]) {
	for (int b = 0;b < 4;b++) {
		for (int a = 0;a < 4-b ;a++) {
			int temp = arrnum[a];
			arrnum[a] = arrnum[a + 1];
			arrnum[a + 1] = temp;
		}
	}
	cout << "逆置后的数组是{";
	for (int c = 0;c < 5;c++) {
		cout << arrnum[c];
		if (c < 4) {
			cout << ",";
		}
	}
	cout << "}";
}
int main() {
	int arrnum[] = { 1,3,2,5,4 };
	test01(arrnum);
}