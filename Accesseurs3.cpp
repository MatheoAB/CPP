#include <iostream>
using namespace std;

class MaClasse
{
    public:         //Spécification de l'accès "PUBLIC"
        int x;      //Attribut public
    private:        //Spécification de l'accès "PRIVE"
        int mois;   //Attribut privé

    public:
        void setMois(int a)
            {
                if (a > 0 and a <= 12)
                {
                    mois = a;
                }
                else
                {
                    mois = 1;
                }
            }
        int getMois()
            {
                return mois;
            }
};

int main()
{
    MaClasse objet;
    objet.x = 2025;     //Autorisé (x est public)
    objet.setMois(100);    //Autorisé (y est privé)
    cout << "x = " << objet.x << endl;
    cout << "mois = " << objet.getMois() << endl;
    return 0;
}