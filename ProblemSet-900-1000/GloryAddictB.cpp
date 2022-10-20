#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; 
    cin >> n;
    vector<int> va(n);  //to store the skills, i.e. ai 
    for(int i = 0; i < n; i++){
        cin >> va[i];
    }
    map<int, int> skills;
    for (int i = 0; i < n; i++)
    {
      skills[va[i]]++;
    }
    
    vector<int> vb(n);  //to store the initial damage, i.e. bi
    for(int i = 0; i < n; i++){
        cin >> vb[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}

    
//     map<int, int>::iterator itr;
//   for (itr = skills.begin(); itr != skills.end(); ++itr) {
//         cout << '\t' << itr->first << '\t' << itr->second
//              << '\n';
//     }

    // for(map<int, int>::const_iterator it = skills.begin();
    // it != skills.end(); ++it)
    // {
    // std::cout << it->first << " " << it->second.first << " " << it->second.second << "\n";
    // }


    
        // for(auto var : va){
    //     cout << var << " ";
    // }
    
    // cout << "\n";
    
    // for(auto var : vb){
    //     cout << var << " ";
    // }