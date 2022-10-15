// #include <iostream>
// using namespace std;

// void solve(){
//     int n, m;
//     cin>>n>>m;
//     if(n < 2 && m < 3){
//         cout<<n<<" "<<m<<endl;
//     }
//     if(n == 2 && m == 3 || n == 2 && m == 2 || n == 3 && m == 3){
//         int cellA = n/2 + 1;
//         int cellB = m/2 + 1;
//         cout<<cellA<<" "<<cellB<<endl;
//     }
//     else{
//         cout<<(n/2)+1<<" "<<(m/2)+1<<endl;
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl

bool check(int i, int j, int n, int m) {
      // check in all 8 directions
      // (-2,-1), (-2,1), (-1,-2), (-1,2), (1,-2), (2,-1), (2,1), (1,2)
      if(i - 2 >= 1 && j - 1 >= 1) return true;
      if(i - 2 >= 1 && j + 1 <= m) return true;
      if(i - 1 >= 1 && j - 2 >= 1) return true;
      if(i - 1 >= 1 && j + 2 <= m) return true;
      if(i + 1 <= n && j - 2 >= 1) return true;
      if(i + 2 <= n && j - 1 >= 1) return true;
      if(i + 2 <= n && j + 1 <= m) return true;
      if(i + 1 <= n && j + 2 <= m) return true;
      return false;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--) {
         int n, m;
         cin>>n>>m;
         int x = 1, y = 1;
         bool flag = false;
         for(int i = 1; i <= n ; i++) {
             for(int j = 1; j <= m; j++) {
                 if(check(i, j, n, m) == false) {
                     x = i, y = j;
                     flag = true;
                     break;
                 } 
             }
             if(flag) break;
         }
         
         cout<<x<<" "<<y<<endl;
    }

    return 0;
}