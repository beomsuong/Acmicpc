#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	b += c;
	while (1) {
		
		if (b>=60)
		{
			b -= 60;
			a++;
		}
		if (a > 23)
			a = 0;
		if (a < 24 && b < 60)
			break;
	}
	cout << a << " " << b;
	return 0;
}
