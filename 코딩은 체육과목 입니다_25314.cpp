#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	while (a > 0) {
		cout << "long ";
		a -= 4;
	}
	cout << "int";
	return 0;
}
