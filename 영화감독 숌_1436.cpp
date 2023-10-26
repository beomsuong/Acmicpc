#include <string>
#include <vector>
#include <map>
#include<sstream>
#include<iostream>
using namespace std;

int main() {
	int n,now=0;
	cin >> n;
	n--;
	while (n >= 0) {
		now++;
		int save = now;
		int a = 0;
		while (save != 0) {
			if (save % 10 == 6) {
				a++;
			}
			else a = 0;
			if (a >= 3) {
				n--;
				break;
			}save /= 10;
		}
	}
	cout << now;
}
