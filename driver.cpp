#include<bits/stdc++.h>
#include"driver.h"
#include"second.h"
#include"print.h"
using namespace std;

/// Function that converts string with
///unneeded chars to a string which comtains only A,G,U,C chars
/// @param string s that has to be converted
/// @return string ss, converted string

string Driver:: convert_to_proper(string s){
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='A'&&s[i]!='U'&&s[i]!='G'&&s[i]!='C'){
            continue;
        }
        ans+=s[i];
    }
    return ans;
}

///function which is actually is a driver which
///calls and does all the required work.
///it creates a dp table and computes pairs from it and
///reports the no of pairings in the string.
/// @param string s, to compute the secondary structure
/// @return vector<pair<int,int>> to compute the secondary structure

vector<pair<int,int>> Driver::computeSecondaryStructure(string s){
    vector<pair<int,int> > ans;
    s=this->convert_to_proper(s);
    int n=s.length();
    Print obj;
    Second st;

    vector<vector<int> > dp(n+1,vector<int>(n+1,0));
    vector<vector<pair<int,int> > > store(n+1,vector<pair<int,int> >(n+1,{-1,-1}));
    st.computeDpTable(s,dp,store);
    obj.printDpTable(dp,n);
    cout<<"****************"<<endl;

    //we can reduce running time by stopping to print these dp table and store of pairs
    
    obj.printStoreTable(store,n);
    st.computePairs(0,n-1,store,ans);
    obj.printPairs(s,ans);
    return ans;
}
    
