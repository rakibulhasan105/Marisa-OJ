#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    if(n >= 9.0) cout << "VERY TOXIC" << endl;
    else if(n >= 5.0) cout << "TOXIC" << endl;
    else cout << "SAFE" << endl;
    return 0;
}
