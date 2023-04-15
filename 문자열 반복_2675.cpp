#include <string>
#include <vector>
#include<iostream>
using namespace std;
int main() {
	string c;
	int a, b;
		cin >> a;
	for (int i = 0;i < a;i++) {
		cin >> b;
		cin >> c;
		for (int q = 0;q < c.size();q++) {
			for (int w = 0;w < b;w++)
				cout << c[q];
		}
		cout << endl;
	}
	return 0;
}
