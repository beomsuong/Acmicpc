#include <iostream>
#include <vector>
using namespace std;
long long  a(int n) {
    if (n != 0) {
       return n*a(n - 1);
    }
    else
        return 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n ;
    cin >> n;
    cout << a(n);
    return 0;
}
