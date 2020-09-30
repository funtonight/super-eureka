// “Incredible change happens in your life when you decide to take control of what
// you do have power over instead of craving control over what you don't.

// Dear online judge:
//  I've read the problem, and tried to solve it.
//  Even if you don't accept my solution, you should respect my effort.
//  I hope my code compiles and gets accepted.

#include <bits/stdc++.h>
typedef long long ll;
#define forn(i, start, end) for (ll i = start; i < ll(end); i++)
#define input(arr, n) forn(i, 0, n) cin >> arr[i];
#define input2d(arr, n, m) forn(i, 0, n) forn(j, 0, m) cin >> arr[i][j];
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define mk make_pair
#define f first
#define s second
#define tc    \
    ll T;     \
    cin >> T; \
    while (T--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int32_t main()
{
    FAST;
    //tc
    {
        string s,t;
        cin>>s >> t;
        t.pop_back();
        if(s==t)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}