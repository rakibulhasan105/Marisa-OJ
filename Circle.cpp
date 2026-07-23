#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long
const double PI = 3.14;

void phobia()
{
    double r;
    cin >> r;
    double area = PI * r * r;
    double circumferenc = 2 * PI * r;
    printf("%.3f ",circumferenc);
    printf("%.3f",area);
    
 return;
}

int32_t main()
{
    fastio;
    int tc = 1;
   // cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}
