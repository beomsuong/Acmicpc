#include <string>
#include <vector>
#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0;i <a;i++) {
		for (int q = 0;q <= i;q++)
			cout << "*";
		cout << endl;
	}
}
