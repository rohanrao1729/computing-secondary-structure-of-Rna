#include<bits/stdc++.h>
using namespace std;
#ifndef DRIVER_HPP
#define DRIVER_HPP

class Driver{
public:
   string convert_to_proper(string s);
   vector<pair<int,int> > computeSecondaryStructure(string s);
};

#endif