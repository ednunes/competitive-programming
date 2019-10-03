#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using mp = map<int, int>;
using vct = vector<int>;

bool is_triangle(int a, int b, int c){
    return (a <= b+c && b <= a+c && c <=a+b);
}

bool area_positive(int a, int b, int c){
    double s = (a+b+c)/2.;
    double area = sqrt(s)*sqrt(s-a)*sqrt(s-b)*sqrt(s-c);
    if(area!=0) return true;
    return false;
}

void resolve(int a, int b, int c){
    if(is_triangle(a,b,c) && area_positive(a,b,c)) {
        cout << "YES\n";
        exit(0);
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n; 
    vct v(n);
    REP(i,0,n-1){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < n-2; i++){
        resolve(v[i],v[i+1],v[i+2]);
    }
    cout << "NO\n";
    

    return 0;
}
