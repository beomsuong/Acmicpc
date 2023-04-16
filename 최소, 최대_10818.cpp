#include <string>
#include <vector>
#include<iostream>
using namespace std;

int main() {
	int a;
	long long  b= -100000001, c=1000001,x;
	cin >> a;
	for (int i = 0;i < a;i++) {
		cin >> x;
		if (x < c)
			c = x;
		if (x > b)
			b = x;
	}
	cout << c<< " " << b;
}
