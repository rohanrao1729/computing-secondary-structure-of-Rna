#include<bits/stdc++.h>
using namespace std;
#ifndef SECOND_HPP
#define SECOND_HPP

class Second{
public:
    bool canPair(char a,char b);
    int  computeDpTable(string s,vector<vector<int> >& dp,vector<vector<pair<int,int> > >& store);
    void computePairs(int x,int y,vector<vector<pair<int,int> > >& store,vector<pair<int,int> >& ans);

   
};

#endif