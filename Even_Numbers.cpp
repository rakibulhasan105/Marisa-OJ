#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);

void phobia()
{
    int n;
	cin >> n;
	for(int i = n;i>0;i--)
	{
		if(i%2==0) cout << i << " ";
		
	}
}

int main()
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
