#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include<queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

    priority_queue<int> q1; //앞이 번호 뒤에가 시간a
    int n,num;
int main() {
    fastio;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;   
        if (num == 0)
        {
            if (q1.empty())//큐에 남고 가장큰거출력
            { cout << 0 << "\n";
              
            }
            else 
            {
                 cout << q1.top() << "\n";
                q1.pop();
            }
        }
            else
                q1.push(num);
    }
}
