#include <iostream>
#include <locale.h>

using namespace std;


bool primo(int v){
    if (v <= 1) return false;
    for (int i = 2; i * i <= v; i++){
        if (v % i == 0) return false;
    }
    return true;
}

int primop (int v){

    if (primo(v)) return v;

    int b = v - 1;
    int a = v + 1;

    while (true){
        bool pb = (b >= 2) && primo(b);
        bool pa = primo(a);

        if (pb) return b;
        if (pa) return a;

        b--;
        a++;
    }
}

int main(){

    setlocale(LC_ALL,"Portuguese");

    int v;

    while (true){
        cout << "Digite um valor inteiro (1 a 1000) ou 0 para finalizar: " << endl << endl;
        cin >> v;

        if (v == 0) break;

        if (v < 1 || v > 1000){
            cout << "Valor Inválido!";
            continue;
        }

        cout << primop(v) << endl << endl;
    }

    return 0;
}
