#include <bits/stdc++.h>

using namespace std;

vector <int>ordenar(vector<int> array);

int main(){
    int n;
    cout << "Ingresa el tamaño del vector: " << endl;
    cin >> n;
    vector <int> array(n);

    cout << "Ingresa los elementos del vector: ";
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    vector <int> orden = ordenar(array);

    cout << "El vector ordenado es: " << endl;
    for(int i = 0; i < orden.size(); i++){
        cout << orden[i] << endl;
    }

    return 0;
}

vector <int> ordenar(vector<int> array){
    int aux = 0;
    for(int i = 0; i <= array.size(); i++){
        for (int j = i; j < array.size(); j++){
            if (array[i] > array[j]){
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    return array;
}

