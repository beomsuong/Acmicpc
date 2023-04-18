#include <string>
#include <map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
double b[1000] = { 0, };

int main()
{
    int a;
    double  c = 0;
    cin >> a;
    for (int i = 0;i < a;i++) {
        cin >> b[i];
        c= max(c, b[i]);
    }
    for (int i = 0;i < a;i++) {
        
        b[i] = b[i] / c * 100;
    }
    c = 0;
    for (int i = 0;i < a;i++) {
       c+=b[i];
    }cout << fixed;
    cout.precision(8);
    cout << c / double(a);
}
