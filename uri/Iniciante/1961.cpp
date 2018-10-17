#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p;
    int current, nex;
    bool gameover = false;

    scanf("%d %d", &p, &n);
    n-=1;
    scanf("%d", &current);

    while(n--)
    {
        scanf("%d", &nex);
        if(abs(current-nex)>p) gameover = true;
        current = nex;
    }

    gameover ? cout << "GAME OVER" << endl : cout << "YOU WIN" << endl;

    return 0;
}
