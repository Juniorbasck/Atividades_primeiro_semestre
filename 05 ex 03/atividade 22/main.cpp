#include <iostream>
#include <locale>

using namespace std;

int main()
{
     setlocale (LC_ALL, "Portuguese");

     float fahrenheit, resultado;

     cout << "Digite um valor em graus fahrenheit para ser convertido em celsius: ";
     cin >> fahrenheit;

     resultado = (fahrenheit - 32) * (5.0 / 9.0);

     cout << "\nConvertendo " << fahrenheit << " graus fahrenheit em graus Celsius dará: " << resultado;

     return 0;
}
