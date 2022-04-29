#include <bits/stdc++.h>
using namespace std;

double frand(double fMin = -100, double fMax = 100){
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

string printRandomString(int n){
    char alphabet[4] = {'A', 'G', 'U', 'C'};

    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 4];

    return res;
}

// Driver code
int main(){
    freopen("input.txt", "w", stdout);

    srand(time(NULL));
    int n, t;

    t = (int)frand(1, 10);
    cout << t << endl;
    for (int i = 0; i < t; ++i){
        n = (int)frand(1, 20);
        cout << printRandomString(n) << endl;
    }

    return 0;
}