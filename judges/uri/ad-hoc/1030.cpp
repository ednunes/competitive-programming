#include <bits/stdc++.h>

using namespace std;

class Pessoa{
    public:
        int num;
        char status;
};

int main(){

    int nc;
    int tc = 1;

    scanf("%d", &nc);

    int n, k;

    vector<Pessoa> p;
    Pessoa aux;

    while(nc--){
        scanf("%d %d", &n, &k);

        p.clear();

        // inicializa as pessoas
        for(int i = 1; i <= n; i++){
            aux.num = i;
            aux.status = 'Y';
            p.push_back(aux);
        }

        // realiza eliminações
        int c = -1;
        int a = n;
        int count = 0;

        while(a > 1){

            while(1){
                c++;

                if(c > n)
                    c = c - (n+1);

                if(p[c].status == 'Y'){
                    count++;
                    break;
                }

            }

            if(count >= k){
                p[c].status = 'N';

                a--;
                count = 0;
            }
        }

        for(int i = 0; i < p.size(); i++){
            if(p[i].status == 'Y')
                printf("Case %d: %d\n", tc, p[i].num);
        }

        tc++;
    }

    return 0;
}

