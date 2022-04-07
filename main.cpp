#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    float f, c;

    cout << "\n Informe a temperatura em graus Fahrenheit: ";
    cin >> f;

    c = (f - 32) * (5.0 / 9.0);

    cout << "\n A temperatura informada em graus Celsius é: " << c << endl;
    
    return 0;
}
