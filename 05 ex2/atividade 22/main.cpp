#include <iostream>
#include <locale>


using namespace std;

int main()
{
     setlocale (LC_ALL, "Portuguese");

     float n1, n2, n3, media;
     char nome[20];

     cout << "Digite o seu nome: ";
     cin >> nome;
     cout << "\n Digite a primeira nota: ";
     cin >> n1;
     cout << "\n Digite a segunda nota: ";
     cin >> n2;
     cout << "\n Digite a terceira nota: ";
     cin >> n3;


     media = (n1+n2+n3)/3;

     cout << "\n Aluno " << nome << " possui média: " << media ;
      return 0;
}
