

#include <iostream>
using namespace std;

int main()
{
    string nome = "";
    double P1 = 0;
    double P2 = 0;
    double media = 0;
    cout << "Digite seu nome" << endl;
    cin >> nome;
    cout << "Digite a nota da P1" << endl;
    cin >> P1;
    cout << "Digite a nota da P2" << endl;
    cin >> P2;
    media = (P1 + P2)/2; 
    if (media >= 6)
    {
        cout << "Aprovado";
    }
    else
    {
        cout << "Reprovado";
    }
}

