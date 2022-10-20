#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        vector<vector<char>> grid(8,vector<char>(8,'.'));
        for(long long i=0;i<8;i++){
            for(long long j=0;j<8;j++){
                cin>>grid[i][j];
            }
        }
        bool done=false;
        // check all row
        for(int i=0;i<8;i++){
            bool flag=true;
            for(int j=0;j<8;j++){
                if(grid[i][j]!='R'){
                    flag=false;
                    break;
                }
            }
            if(flag){
                done=true;
                cout<<"R"<<endl;
                break;
            }
        }
        if(!done){
            for (int i = 0; i < 8; i++)
            {
                bool flag = true;
                for (int j = 0; j < 8; j++)
                {
                    if (grid[j][i] != 'B')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    done = true;
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    return 0;