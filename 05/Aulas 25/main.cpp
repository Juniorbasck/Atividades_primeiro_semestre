#include <iostream>
#include <locale>

using namespace std;

int main()
{
     setlocale(LC_ALL,  "Portuguese");


 int  golsSaopaulo, golsPalmeiras;
 cout << "\n*** Placar são paulo X Palmeiras ***\n";
 cout << "Digite a quantidade de gols do São Paulo: ";
 cin  >> golsPalmeiras;
 if(golsSaoPaulo > golsPalmeiras)
  cout << "A festa é tricolor! ! !\n";

 return 0;
}
