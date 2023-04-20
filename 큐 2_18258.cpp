#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<string>
#define endl '\n'
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	string input;
	int q;
	queue<int> w;
	for (int i = 0; i < n;i++) {
		cin >> input;
		if (input == "push")
		{
			cin >> q;
			w.push(q);

		}
		else if (input == "pop") {
			if (w.size() > 0)
			{
				cout << w.front() << endl;
				w.pop();
			}
			else
				cout << -1 << endl;
		}
		else if (input == "size") {
			cout << w.size() << endl;
		}
		else if (input == "empty") {
			if (w.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (input == "front") {
			if (w.size() > 0)
			{
				cout << w.front() << endl;
			}
			else
				cout << -1 << endl;
		}
		else if (input == "back") {
			if (w.size() > 0)
			{
				cout << w.back() << endl;
			}
			else
				cout << -1 << endl;
		}
	}
}
