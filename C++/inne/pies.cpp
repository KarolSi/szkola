#include <bits/stdc++.h>
using namespace std;

enum class Roof
{
    plaski,
    czterospadowy
};
enum class Rasa
{
    Jamnik,
    Husky,
    Baset,
    GoldenRetriver
};

class Pies
{
    public:
        Pies::Pies()
            : rasa(Rasa::GoldenRetriver)
            , wysokosc(40)
            , imiePieska("Fafik")
        {
            cout<< "Urodził się mały piesek" << "\n";
        }

        Pies::Pies(Rasa r, string i , int w = 40)
            : rasa(r)
            , wysokosc(w)
            , imiePieska(i)


        int getWysokosc()
        {
            rasa = Rasa::Husky;
            return wysokosc;
        }

    private:
        Rasa rasa;
        int wysokosc;
        string imiePieska;
        const int iloscLap{ 4 }

}



int main()
{
    Pies piesek;
    piesek.getWysokosc();
 
    unique_ptr<Pies> mojPiesek = make_unique<mojPiesek>();
    cout << mojPiesek->getWysokosc() << "\n";;

    Pies azor{Rasa::Husky, "Azor"};

    return 0;
}
