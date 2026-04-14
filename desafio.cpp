#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    string n1, n2, n3;
    int g1, g2, g3;
    double v1, v2, v3;
    double p1, p2, p3;

    if (!(cin >> n1 >> v1 >> g1 >> n2 >> v2 >> g2 >> n3 >> v3 >> g3)) {
        cout << "Entrada de dados inválida" << endl;
        return 0;
    }

    cout << "---------------------------------" << endl;

    // Condição de tamanho da String e Nomes Diferentes:
    if ((n1.length() > 0 && n1.length() <= 15) &&
        (n2.length() > 0  &&  n2.length() <= 15) &&
        (n3.length() > 0 && n3.length() <= 15)){
            if((n1 != n2) && (n1 != n3) && (n2 != n3)){
                cout << "Nomes Válidos!" << endl;
            }else{
                cout << "Nomes Repetidos!" << endl;
                return 0;
            }
    }else{
        cout << "Nomes com Tamanho invalido!" << endl;
        return 0;
    }

    cout << "---------------------------------" << endl;

    // Cpndição de Tamanho do valor Inteiro:
    if ((g1 >= 1 && g1 <= 25000)&&
        (g2 >= 1 && g2 <= 25000)&&
        (g3 >= 1 && g3 <= 25000)){
            cout << "Pesos Válidos!" << endl;
    }else{
        cout << "Pesos com Tamanho Invalido!" << endl;
    }

    cout << "---------------------------------" << endl;

    // Condição dos valores válidos (0.01 a 1000).
    if ((v1 >= 0.01 && v1 <= 1000)&&
        (v2 >= 0.01 && v2 <= 1000)&&
        (v2 >= 0.01 && v3 <= 1000)){
        cout << "Valores Válidos!" << endl;
        }else{
        cout << "Valores não correspondem ao limite!" << endl;
        return 0;
    }

    cout << "---------------------------------" << endl;

    // Cálculo do peso por kg.
    p1 = (v1 * 1000.0) / g1;
    p2 = (v2 * 1000.0) / g2;
    p3 = (v3 * 1000.0) / g3;

    // Condição de valor por kg diferente.
    if (p1 != p2 && p1 != p3 && p2 != p3){
        cout << "Valor/Kg diferentes!" << endl;
    }else{
        cout << "Valores Repetidos!" << endl;
        return 0;
    }

    cout << "---------------------------------" << endl;

    // Condição da Ordem Decrescente de valores (obs: falta colocar o nome de acordo com o pdf lá).
    if (p1 > p2 && p1 > p3){
        cout << n1 << endl;
        if (p2 > p3) cout << n2 << endl << n3 << endl;
        else cout << n3 << endl << n2 << endl;
    }else if (p2 > p3 && p2 > p1){
        cout << n2 << endl;
        if (p1 > p3) cout << n1 << endl << n3 <<endl;
        else cout << n3 << endl << n1 << endl;
    }else{
        cout << n3 << endl;
        if (p2 > p1) cout << n2 << endl << n1 << endl;
        else cout << n1 << endl << n2 << endl;
    }

    return 0;
}
