#include <string>
#include <vector>
#include<iostream>
using namespace std;
struct info {
	int num=0, x=0, y=0;
};
int main() {
	int num = 0;
	info info;
	info.num = 0;
	info.x = 0;
	info.y = 0;
	for (int i = 0;i < 9;i++) {
		for (int q = 0;q < 9;q++) {
			cin >> num;
			if (info.num <= num) {
				info.num = num;
				info.x = i+1;
				info.y = q+1;
			}
		}
	}
	cout << info.num << endl;
	cout << info.x << " " << info.y;
}
