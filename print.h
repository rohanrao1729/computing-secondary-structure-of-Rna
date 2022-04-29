// Rectangle.hpp
#include<bits/stdc++.h>
using namespace std;
#ifndef PRINT_HPP
#define PRINT_HPP

class Print{
public:
   void printDpTable(vector<vector<int> >& dp,int n);
   void printStoreTable(vector<vector<pair<int,int> > >& dp,int n);
   void printPairs(string s,vector<pair<int,int> > ans);

};

#endif