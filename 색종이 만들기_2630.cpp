#include <iostream>
using namespace std;
int n;
int map[128][128];
int b, w;
void solve(int y, int x, int size)
{
    int check = map[y][x];
    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
           if (check != map[i][j] )
            {
                solve(y, x, size / 2);
                solve(y, x + size / 2, size / 2);
                solve(y + size / 2, x, size / 2);
                solve(y + size / 2, x + size / 2, size / 2);
                return;
            }
        }
    }
        check==0? w++: b++;
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> map[i][j];
    solve(0, 0, n);
    cout << w << '\n';
    cout << b << '\n';
    return 0;
}
