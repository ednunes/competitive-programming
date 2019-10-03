#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y, i = 1; cin >> x >> y;
    while ((x*=3) <= (y*=2)) i++;
    printf("%d\n", i);
    return 0;
}
