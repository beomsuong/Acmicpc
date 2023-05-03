#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a,b,c,d;
	cin >> a>>b;
	for (int i = 0; i < b; i++) {
		cin >> c >> d;
		a -= c * d;
	}
	if (a == 0)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
