#include <iostream>
#include <fstream>
//#include <conio.h>
void print(int liczba[], int i2)
{
    i2 = i2 + 1; //dołożenie 1 pozycji
    for (int licznik = 0; licznik < i2; licznik++)
    {
        std::cout << liczba[licznik] << " ";
    }
    std::cout << "" << std::endl;
    /*
    int licznik = 0;
    do
    {
        std::cout << liczba[licznik] << ", ";
        licznik++;
    } while (licznik < i);
    std::cout << std::endl;
    */
}

void write(int liczba[], int i3)
{
    for(int licznik = 0; licznik < i3; licznik++)
    {
        std::cout << "Wprowadz liczbe calkowita nr " << (licznik+1) << ": ";
        std::cin >> liczba[licznik];
    }
}

int main()
{
    int liczba[100];
    int i;
    std::cout << "Maksymalna ilosc liczb ktora mozna postowac to 100." << std::endl;
    std::cout << "Wprowadz liczby calkowite ktore chcesz posortowac: ";
    std::cin >> i;
    write(liczba, i);
    i = i - 1; //usunięcie 1 pozycji z tablicy ponieważ zaczyna się od 0,1,2... a nie od 1,2,3...
    int i1;
    int w = 1;
    int f = 1;
    for (i1 = 0; i1 <= i; i1++)
    {
        if (i1 == 0)
        {
            std::cout << "===========================================" << std::endl;
            std::cout << "Podales nastepujace liczby do posortowania:" << std::endl;
            print(liczba, i);
            std::cout << "===========================================" << std::endl;
            std::cout << "Trwa proces sortowania liczb..." << std::endl;
        }
        std::cout << "for " << f << ": " << std::endl;

        int s1 = w;
        int a1 = i;
        int a2 = i - 1;
        do
        {
            if (liczba[a1] < liczba[a2])
            {
                int p1 = liczba[a1];
                int p2 = liczba[a2];
                liczba[a1] = p2;
                liczba[a2] = p1;
                a1 = a1 - 1;
                a2 = a2 - 1;

                std::cout << "while " << w << ": ";
                print(liczba, i);
                w = w + 1;
                if (a2 < 0)
                {
                    break; 
                }
            }
            if (liczba[a1] >= liczba[a2])
            {
                a1 = a1 - 1;
                a2 = a2 - 1;
                if (a2 < 0)
                {
                    break; 
                }
            }
        } while (a2 >= 0);

        f = f + 1;
        int s2 = w;
        if (s1 == s2)
        {
            break; 
        }
    }
    std::cout << "======================" << std::endl;
    std::cout << "Sortowanie zakonczone: " << std::endl;
    print(liczba, i);
    std::cout << "" << std::endl;
    system("pause");
//    getchar();
    return 0;
}
