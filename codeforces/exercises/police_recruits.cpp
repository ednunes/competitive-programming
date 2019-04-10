#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, x, police = 0, crime = 0; cin >> n;
    for(long long i = 0; i < n; i++){
        cin >> x;
        if(x > 0) police+=x;
        else {
            if(police > 0) --police;
            else ++crime;
        }
    }
    cout << crime << endl;
    return 0;
}
