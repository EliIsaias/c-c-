#include <bits/stdc++.h>

using namespace std;

bool encontrar(string cadena, string str);

int main(){
    string cadena;
    string str;

    cout << "Ingresa una cadena: " << endl;
    cin >> cadena;
    cout << "Ingresa el str de la cadena: " << endl;
    cin >> str;

    cout << "El str pertenece a la cadena?: " << endl;

    bool respuesta = encontrar(cadena, str);
    cout << respuesta;
    return 0;
}

bool encontrar(string cadena, string str){
    bool flag = true;
    int cont = 0;
    for (int i = 0; i < cadena.size(); i++){
        if (cadena[i] == str[cont]){
            cont++;
        }
    }
    if (cont < 2){
        flag = false;
    }
    return flag;
}
