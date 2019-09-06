#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS;
    int x = 3, y = 2;
    //scanf("%f %f", &x, &y);

    cout << "Primeira" << endl;
    int s = y + x, r = 0;
    int d = 0;
    r = s % 2;
    d = s / 2;

    if(r!=0) d++;

    cout << "Essa é a resposta: " << d << endl;
    cout << endl;
    cout << "Segunda" << endl;
    r = s % 2;

    d = (r!=0) ? d++ : d+=2;
    cout << "Essa é a resposta: " << d << endl;
    cout << endl;

    cout << "Terceira" << endl;
    r = s % 2;

    d+=(r!=0);
    cout << "Essa é a resposta: " << d << endl;
    cout << endl;

    return 0;
}
