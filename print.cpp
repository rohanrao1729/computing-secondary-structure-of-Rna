#include<bits/stdc++.h>
#include"print.h"
#include"driver.h"
#include"second.h"
using namespace std;

///this just prints the dp table computed
/// @param vector<vector<int>> dp table and int n
/// @return void

void Print::printDpTable(vector<vector<int>>& dp,int n){
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<dp[i][j]<<" ";
      }
      cout<<endl;
  }
}

///this just prints the pairings or an auxiliary structure which is required to
///report the actual pairings
/// @param vector<vector<pair<int,int>>> dp table and int n
/// @return void

void Print::printStoreTable(vector<vector<pair<int,int>>>& dp,int n){
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<"{"<<dp[i][j].first<<","<<dp[i][j].second<<"}"<<" ";
      }
      cout<<endl;
  }

}

///this function prints all the pairs in the secondary structure.
/// @param string s, vector<pair<int,int>> ans
/// @return void

void Print::printPairs(string s,vector<pair<int,int>> ans){
    cout<<"no of pairs in secondary structure:"<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<"{"<<ans[i].first<<","<<ans[i].second<<"}"<<endl;
        cout<<"{"<<s[ans[i].first]<<","<<s[ans[i].second]<<"}"<<endl;
    }
}

