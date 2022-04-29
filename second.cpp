#include<bits/stdc++.h>
#include"second.h"
#include"driver.h"
#include"print.h"
using namespace std;

///it just checks if two chars are correct pairings or not ie A-U AND C-G
/// @param char a, char b and checking if two chars can pair
/// @return true if two chars can be paired else false

bool Second:: canPair(char a,char b){
    if((a=='A'&&b=='U')||(a=='C'&&b=='G'))return true;
    if((a=='U'&&b=='A')||(a=='G'&&b=='U'))return true;

    return false;
}

///this computes the dp table based on the reccurence 
///dp[i][j]=max(dp[i][k-1]+dp[k+1][j-1]+1) if canpair(s[k],s[j])
/// @param vector<vector<int>> dp table and vector<vector<pair<int,int>>> store table
/// @return pairs

int  Second:: computeDpTable(string s,vector<vector<int> >& dp,vector<vector<pair<int,int> > >& store){
    int n=s.length();
    for(int d=0;d<n;d++){
        for(int i=0,j=d;i<n&&j<n;j++,i++){
            if(i>j-4){
                dp[i][j]=0;
                continue;
            }
            dp[i][j]=max(dp[i][j],dp[i][j-1]);
            if(dp[i][j-1]>=dp[i][j]){
                store[i][j]=store[i][j-1];
            }
            for(int k=i;k<=j;k++){
                if(this->canPair(s[k],s[j])){
                    int left=k-1>=0?dp[i][k-1]:0;
                    int right=k+1<n?dp[k+1][j-1]:0;
                    if(k<=j-4){
                        if(dp[i][j]<=1+left+right){
                            store[i][j]={k,j};
                        }
                        dp[i][j]=max(dp[i][j],1+left+right);
                        
                    }
                }
            }
        }
    }
    return dp[0][n-1];
}

///this function computes the actual pairs which are in the optimal pairing and reports them
/// @param int x, int y, vector<vector<pair<int,int>>> store table and vector<pair<int,int>> ans
/// @return void 

void Second:: computePairs(int x,int y,vector<vector<pair<int,int> > >& store,vector<pair<int,int> >& ans){
    if(x>y-4){
        return;
    }
    
    pair<int,int> val=store[x][y];
    if(store[x][y].first==-1&&store[x][y].second==-1){
        return;
    }
    ans.push_back(store[x][y]);
    this->computePairs(x,val.first-1,store,ans);
    this->computePairs(val.first+1,val.second-1,store,ans);
    this->computePairs(val.second+1,y,store,ans);
    return ;
}
