#include <iostream>
using namespace std;

class MaClasse
{
   public:      //Spécification de l'accès "PUBLIC"
    int x;      //Attribut public
    int mois;   //Attribut public
};

int main()
{
    MaClasse objet;
    objet.x = 2025;
    objet.mois = 15;
    cout << "x = " << objet.x << endl;
    cout << "mois = " << objet.mois << endl;
    return 0;
}