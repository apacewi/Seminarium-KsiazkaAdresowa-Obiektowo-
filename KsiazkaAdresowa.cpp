#include "KsiazkaAdresowa.h"
#include <windows.h>
#include <fstream>
#include <sstream>

void KsiazkaAdresowa::zmienHaslo()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    adresaciMenedzer = new AdresaciMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdUzytkownika());
}
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjauzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata()
{
    adresaciMenedzer->dodajAdresata();
}
void KsiazkaAdresowa::wyswietlAdresatow()
{
    adresaciMenedzer->wyswietlAdresatow();
}
KsiazkaAdresowa::~KsiazkaAdresowa()
    {
        delete adresaciMenedzer;
        adresaciMenedzer = NULL;
    }

