#include<iostream>
using namespace std;
void test01(int a) {
	int b = 0;
	int d = 0;
	cout << "在0到100猜一个数" << endl;
	for (int c = 0;c < 100;c++) {
		cin >> b;
		if (b == a) {
			cout << "正确" << endl;
			return;
		}
		else if (101 > b && b > a) {
			cout << "大了" << endl;
		}
		else if (a > b && b >= 0){
			cout << "小了" << endl;
		}
		else if(b>100 || b<0){
				if (d == 0) {
					cout << "警告一次" << endl;
					d++;
					continue;
				}
				if (d == 1) {
					cout << "警告两次" << endl;
					d++;
                    continue;
				}
                if (d == 2) {
                    cout << R"(
                                 0000
                               00111100
                               011100100
                        01111110011100
                       0111011111110000
                     0111111111 00000000
                   01111  11111001111100
                   01111 1111100 1111100
                     01111111110 0011100
                        1111111000111000
                      00000000001111110
                      00000000000000
                    00000000000000000
                  000000000000000000000
                 00000000       0000000
               00000000           000000
               00000                000000
               0000                   0000
              00000                    0000
              0000                     00000
              0000                      0000
              001                        0000
              1110                        001
           0011111                        01110
    )" << endl;
                    cout << "你被肘出了系统" << endl;
                    return;
                }
		}
	}
}
int main() {
	srand((unsigned int)time(0));//不能放在全局区?
	int a = rand() % 100 + 1;
	test01(a);
}
