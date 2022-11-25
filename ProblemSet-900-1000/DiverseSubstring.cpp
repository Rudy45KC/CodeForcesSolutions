#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int solve(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        vector<int> cnt(10);
        int distinct = 0, maxo = 0;
        for(int j=i;j<n;j++)
        {
            if (j - i >= 101)
                break;
            int c = s[j] - '0';
            if (cnt[c] == 0)
                distinct++;
            maxo=max(maxo, ++cnt[c]);
            if (maxo <= distinct)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}