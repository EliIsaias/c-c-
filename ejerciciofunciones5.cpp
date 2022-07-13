#include <bits/stdc++.h>

using namespace std;
bool comparar(string str1, string str2);

int main(){
    cout << "Ingresa 2 strigns del mismo tamaño (con longitud entre 3 y 100 caracteres): " << endl;
    string str1, str2;
    cout << "String 1: " << endl;
    cin >> str1;
    cout << "String 2: " << endl;
    cin>> str2;

    if (str1.size() == str2.size()){
            if (str1.size() >= 3 && str1.size() <= 100){
                bool respuesta = comparar(str1,str2);
                cout << respuesta;
            }else{
                cout << "La longitud es incorrecta."<< endl;
            }

    }else{
        cout << "Las cadenas no son del mismo tamaño, intenta de nuevo." << endl;
    }
    return 0;
}
bool comparar(string str1, string str2){
    int cont = 0;
    bool flag = true;
    for (int i = 0; i < str1.size(); i++){
        if (tolower(str1[i])== tolower(str2[i])){
            cont++;
        }
    }
    if (cont == 0 || cont > 3){
        flag = false;
    }
    return flag;
}

