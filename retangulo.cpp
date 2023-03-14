// Dados e funcoes importadas
#include <iostream>
using namespace std;
// Codigo 
int main() {
    // Variaveis
    float base, altura, area;
    // Interface pedindo input do usuario para primeira variavel
    cout << "Digite a base do retangulo: ";
    // Salvando input do usuario para primeira variavel
    cin >> base;
    // Interface pedindo input do usuario para segunda variavel
    cout << "Digite a altura do retangulo: ";
    // Salvando input do usuario para segunda variavel
    cin >> altura;
    // Formula da area do retangulo
    area = base * altura;
    // Interface mostrando resultado
    cout << "A area do retangulo resulta em: " << area << endl;
    
    return 0;
}