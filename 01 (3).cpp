//4,2,8,0,5,7,1,3,9
#include<iostream>
using namespace std;
void test01(int arr[]) {
	for (int a = 0;a < 8;a++) {
		for (int b = 0;b < 8;b++) {
			if (arr[b] > arr[b + 1]) {
				int temp = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = temp;
			}
		}
	}
	for (int c = 0;c < 9;c++) {
		cout << arr[c] << "\t";
	}
}
int main() {
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	test01(arr);
}