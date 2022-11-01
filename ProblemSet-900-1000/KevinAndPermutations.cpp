#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
/* ascii value
A=65,Z=90,a=97,z=122
*/
 
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph
 
 
int solve(){
    int n;
    cin>>n;
    if(n<=3){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return 0;
    }
    int first=n/2,last=n;
    if(n&1){
        last--;
    }
    for(int i=1;i<=n/2;i++){
        cout<<first<<" "<<last<<" ";
        first--;
        last--;
    }
    if(n&1){
        cout<<n;
    }
    cout<<endl;
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