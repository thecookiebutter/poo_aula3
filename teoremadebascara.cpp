// Dados e funcoes importadas relacionadas a input do usuario
#include <iostream>
// Dados e funcoes importadas relacionadas a matematica
#include <cmath>
using namespace std;

// Codigo 
int main() {
    // Variaveis
    float a, b, c, x1, x2, delta;
    // Interface pedindo input do usuario para primeira variavel
    cout << "Digite o valor de a: ";
    // Salvando input do usuario para primeira variavel
    cin >> a;
    // Interface pedindo input do usuario para segunda variavel
    cout << "Digite o valor de b: ";
    // Salvando input do usuario para segunda variavel
    cin >> b;
    // Interface pedindo input do usuario para terceira variavel
    cout << "Digite o valor de c: ";
    // Salvando input do usuario para terceira variavel
    cin >> c;
    // Calculando variavel delta baseado no input
    delta = pow(b, 2) - 4*a*c;
    // Calculando raizes reais da equacao
    if(delta >= 0){
    // Formula matematica para uma das duas raizes reais
        x1 = (-b + sqrt(delta)) / (2 * a);
    // Formula matematica para outra das duas raizes reais
        x2 = (-b - sqrt(delta)) / (2 * a);
    // Interface mostrando resultados reais para o usuario
    cout << "As raizes da equacao sao: " << x1 << " e " << x2;
    }
    // Pelos fundamentos da matematica, se delta for negativo nao existem resultados reais
    else{
    // Interface mostrando que nao ha resultados reais para o usuario
        cout << "A equacao nao tem raizes reais" << endl;
    }
    return 0;
}