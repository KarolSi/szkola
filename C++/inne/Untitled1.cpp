#include <iostream>
#include <sstream>
int stan_konta = 1000;
int wyplata;
int pin;
int main()
{
    std::cout << "Podaj pin" << std::endl;
    std::cin >> pin;
    if (pin == 1234)
    {
        std::cout << "stan twojego konta to: " << stan_konta << "z³";
        std::cout << std::endl << "Ile chcesz wyp³aciæ?" << std::endl;
        std::cin >> wyplata;
        if (wyplata > stan_konta)
        {
            std::cout << "nie masz tyle na koncie";
            return 0;
    
        }
        else
        {
            stan_konta-=wyplata;
            std::cout << "trzymaj, teraz stan twojego konta to: " << stan_konta << "z³";

        }

    }
    else
    {
        std::cout << "z³y pin";
    }
}
