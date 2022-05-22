#include <bits/stdc++.h>
#define mod 1000000007 
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
const double pi = acos(-1.0);
template <class T> using Ordered_Set = tree<T, null_type, less<T>,
    rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_multiset;

/*# define MAX 100 // assuming we need first 100 rows
long long triangle[MAX + 1][MAX + 1];

void makeTriangle() {
    int i, j;

    // initialize the first row
    triangle[0][0] = 1; // C(0, 0) = 1

    for(i = 1; i < MAX; i++) {
        triangle[i][0] = 1; // C(i, 0) = 1
        for(j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
}

# define MAX 100
long long row[MAX + 1];

int C(int n, int r) {
    int i, j;

    // initialize by the first row
    row[0] = 1; // this is the value of C(0, 0)

    for(i = 1; i <= n; i++) {
        for(j = i; j > 0; j--) {
             // from the recurrence C(n, r) = C(n - 1, r - 1) + C(n - 1, r)
             row[j] += row[j - 1];
        }
    }

    return row[r];
}

long long C(int n, int r) {
    return triangle[n][r];
}*/

long long f(int n, int r) {// calculate nCr
    //if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
void solve()
{
    ll b,g,t;
    cin >> b >> g >> t;
    ll ans = 0;
    for(int i = 4 ; i <= t-1 ; i++)
    {
        ans += f(b,i)*f(g,t-i);
    }
    cout << ans << endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("out.txt" , "w" , stdout);
    #endif
    solve();
    /*int t;
    cin >> t;
    while(t--)
    {
          
    }*/
    return 0;
}
     
