#include<bits/stdc++.h>

typedef long long ll;
const ll MAXN = 1e5+5;

using namespace std;

int main(){
	int n; cin >> n;
	ll x, ma = 0;
	
    map<ll, ll> m;

    while(n--){
		cin >> x;
		m[x]++;
		ma = max(x, ma);
	}

	ll f[MAXN];
	f[0] = 0; f[1] = 0;
    
	for(int i = 2; i <= ma + 2; i++)
		f[i] = max(f[i-1], f[i-2] + (i-2) * m[i-2]);

	cout << f[ma+2] << "\n";
}

// Galera, eu resolvi a A e C do codeforce, tentei a E mas não consegui kkk. Fiz essas pq ao que parece foi a que vcs mais tentaram resolver. Vou mandar a solução aqui. Aí se não entenderem o código posso tentar explicar melhor kkk. 
//
// Mas basicamente a A: para resolver a tem que achar alguma função que reduza o problema de forma que vc consiga resolver. No caso, do jeito que fiz é o max(f[i-1], f[i-2] + i-2 * m[i-2]). Na qual o m[i-2] representa a quantidade de vezes que o elemento i-2 se repete. 
// Já o C, é só implementar o algoritmo do dij... e fazer algumas modificações para não permitir que não caia em um loop infinito kkkk
