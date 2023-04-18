#include <string>
#include <map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int a[30];
int main()
{
    for (int i = 0;i < 30;i++)
        a[i] = -1;
    string s;
    cin >> s;
    for (int i = 0;i < s.size();i++) {
        if (a[s[i] - 'a'] == -1)
            a[s[i] - 'a'] = i;
    }
    for (int i = 0;i < 26;i++)
        cout << a[i] << " ";
}
