#include <string>
#include <vector>
#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	for(int i=a/5;i>=0;i--){
		int now = a - (5 * i);
		if (now % 3 == 0) {
			cout << i + (now / 3);
			return 0;
		}
	}
	cout << -1;
	return 0;
}
