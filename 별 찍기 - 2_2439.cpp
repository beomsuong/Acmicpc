#include <string>
#include <map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int q = 1;q <= a;q++){
        for (int i = 0;i < a - q;i++)
        {
            cout << " ";
        }
        for (int i =0;i < q;i++)
            cout << "*";
        cout << endl;
    }
}
