#include <bits/stdc++.h>

using namespace std;

long long int fat[1000];

void fatorial(int n){

    if(n == 0)
        fat[n] = 1;
    else if(n == 1)
        fat[n] = 1;
    else
        fat[n] = fat[n-1] * n;
}

int main(){

    long long int a, b;

    for(int i = 0; i <= 22; i++){
        fatorial(i);
    }

    while(scanf("%Ld %Ld", &a, &b) != EOF){

        printf("%Ld\n", fat[a] + fat[b]);

    }

    return 0;
}
