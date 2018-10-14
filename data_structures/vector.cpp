#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;


// O(n)
void print_vector(vi v){
    for(int i = 0, size = v.size(); i < size; i++)
        (size-1==i) ? cout << v[i] << "\n" : cout << v[i] << " ";
}


int main(){
    // Inicializando um vector com valor tamanho e valor inicial definidos
    vi vinicialization(15, 0); // O(n)
    print_vector(vinicialization);

    vi v {0,1,2,3,4,5,6,7,8,9};
    print_vector(v);

    cout << "First element: " << v.front() << " - Last element: " << v.back() << "\n";
    cout << "Empty: " << v.empty() << "\n";

    // Insere no final do vetor
    v.push_back(10); // O(1)
    v.push_back(11); // O(1)


    // Insere um elemento no vetor antes da posicao passada
    v.insert(v.begin(), -1); // O(n)
    print_vector(v);

    // Remove o ultimo elemento do vetor
    v.pop_back(); // O(1)

    // Remove um elemento dado o endereço dele
    v.erase(v.begin()); // O(n)

    print_vector(v);

    // Reinicializa um vetor
    v.assign(5, -1); // O(n)

    print_vector(v);

    return 0;
}
