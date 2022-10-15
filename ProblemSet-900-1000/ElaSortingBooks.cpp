#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
ascii value
A = 65 
Z = 90
a = 97
z = 122
*/

int main(){
    long long testCase;
    cin>>testCase;
    while(testCase--){
        int n, k;
        cin>>n>>k;
        string s;
        map<char, int> mp; //mapping the occurences of characters
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        string ans = "";
        for(int i = 1; i <= k; i++){ //traversing compartent by compartment
        int length = n/k;
        for(char ch = 'a'; ch <= 'z'; ch++){ //traversing from a --> z 
            if(length <= 0){ 
                ans += ch;
                break;
            }
            length--;
            if(mp[ch]){
                mp[ch--];
            }
            else{
                ans+= ch;
                break;
            }
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}