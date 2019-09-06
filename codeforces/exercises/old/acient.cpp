#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;


int main() {
    double N= 0,M = 0,A = 1;
    cin>>N>>M>>A;
    N = ceil(N/A);
    M = ceil(M/A);
    long long res = N*M;
    cout<<res<<endl;

    return 0;
}
