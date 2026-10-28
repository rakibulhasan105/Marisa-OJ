#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int t)
{
    ll n;
    cin >> n;
    vector <ll> vec(n);
    ll sum = 0;
    for(auto & val : vec)
    {
        cin >> val;
        sum += val;
    }
    double avg = (double) sum / n;

    cout << fixed << setprecision(3) << avg << endl;
  
     
    return;
}
 
int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }
 
    return 0; //                Hey, it's like a phobia..
}
