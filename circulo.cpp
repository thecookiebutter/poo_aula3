// Dados e funcoes importadas
#include <iostream>
using namespace std;
// Codigo 
int main() {
    // Variaveis
    float raio, area;
    // Constante matematica
    const float PI = 3.14159;
    // Interface pedindo input do usuario
    cout << "Digite o raio do circulo: ";
    // Salvando input do usuario
    cin >> raio;
    // Formula da area do circulo
    area = PI * raio * raio;
    // Interface mostrando resultado
    cout << "A area do círculo resulta em: " << area << endl;
    
    return 0;
}