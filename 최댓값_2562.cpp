#include <string>
#include <vector>
#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c;
	for (int i = 0;i < 9;i++) {
		cin >> c;
		if (c >= a)
		{
			a = c;
			b = i + 1;
		}
	}
	cout << a << endl << b;
}
