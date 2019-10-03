#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, l, x; cin >> n >> l;
    vector<long long> v;

    for(int i = 0; i < n; i++) { cin >> x; v.push_back(x); }

    sort(v.begin(), v.end());

    long long dist = 2*max(v[0],(l-v[n-1]));

    for(unsigned int i = 0; i < v.size()-1; i++)
        dist = max(dist, v[i+1] - v[i]);

    printf("%.10f\n", dist/2.0);

    return 0;
}
