#include <iostream>
#include <locale>

using namespace std;

int main()
{
     setlocale(LC_ALL,  "Portuguese");


 int  golsSaopaulo, golsPalmeiras;
 cout << "\n*** Placar s�o paulo X Palmeiras ***\n";
 cout << "Digite a quantidade de gols do S�o Paulo: ";
 cin  >> golsPalmeiras;
 if(golsSaoPaulo > golsPalmeiras)
  cout << "A festa � tricolor! ! !\n";

 return 0;
}
