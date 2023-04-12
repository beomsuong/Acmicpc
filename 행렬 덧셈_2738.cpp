#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;int a[101][101];
int main() {
	
	int n, m;
	cin >> n >> m;
	int c;
	for (int i = 0;i < n;i++) {
		for (int q = 0;q < m;q++) {
			cin >> c;
			a[q][i] += c;
		}
	}
	for (int i = 0;i < n;i++) {
		for (int q = 0;q < m;q++) {
			cin >> c;
			a[q][i] += c;
		}
	}
	for (int i = 0;i < n;i++) {
		for (int q = 0;q < m;q++) {
			cout << a[q][i] << " ";
		}
		cout << endl;
	}
	return 0;
}
