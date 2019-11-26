#include <iostream>
#include <vector>
#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    string nazwaPlikuZUzytkownikami;
    vector <Uzytkownik> uzytkownicy;

   Uzytkownik podajDaneNowegoUzytkownika();
   int pobierzIdNowegoUzytkownika();
   bool czyIstniejeLogin(string login);
   void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
   string konwerjsaIntNaString(int liczba);
   string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
   bool czyPlikJestPusty(fstream &plikTekstowy);
public:
    KsiazkaAdresowa();
    void rejestracjauzytkownika();
    void wypiszWszystkichUzytkownikow();
};
