/**@file main.cpp
 * \mainpage Problem Statement
 * Given an RNA structure as a string, we need to find the optimal number of pairings in the secondary structure such that\n 
 * A pairs with U\n 
 * C pairs with G\n 
 * and each pair is atleast at a distance greater than or equal to 4\n 
 * and there are no intersecting pairs\n 
 * \section input Input format
 * Enter the number of test cases\n
 * Enter the the input string for each testcase.\n
 * tc\n
 * string1 \n
 * string2 \n
 *.\n
 *.\n
 * stringtc \n
 * \section output Output
 * This program will report the maximal number of pairings in the secondary structure of the given RNA string .
 * \section Authors
 * Rohith Kumar Gattu - 2019A7PS0049H\n
 * Kasina Satwik - 2019A7PS0011H\n
 * Rohan Rao N - 2019A7PS0048H\n
 * Srikar Sashank M - 2019A7PS0160H\n
 */
#include<bits/stdc++.h>
#include"driver.h"
#include"second.h"
#include"print.h"
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        //a string of length n of chars A,U,C,G
        //A matches U
        //C matches G
        //we need to return secondary structure of RNA
        //set of pairs (i,j) where i<j-4
        string s;
        cin>>s;
        Driver dob;
      
        clock_t start, end;
        start = clock();
        dob.computeSecondaryStructure(s);
        end=clock();
        double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
        cout<<"time taken to run this test case : "<<time_taken<<endl;
  }
}