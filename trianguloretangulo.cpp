// Dados e funcoes importadas
#include <iostream>
using namespace std;
// Codigo 
int main() {
    // Variaveis
    float base, altura, area;
    // Interface pedindo input do usuario para primeira variavel
    cout << "Digite a base do triangulo retangulo: ";
    // Salvando input do usuario para primeira variavel
    cin >> base;
    // Interface pedindo input do usuario para segunda variavel
    cout << "Digite a altura do triangulo retangulo: ";
    // Salvando input do usuario para segunda variavel
    cin >> altura;
    // Formula da area do triangulo retangulo
    area = base * altura * 0.5;
    // Interface mostrando resultado
    cout << "A area do triangulo retangulo resulta em: " << area << endl;
    
    return 0;
}