#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownicyMenedzer.h"
#include "AdresaciMenedzer.h"
#include "MenedzerMenu.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    MenedzerMenu menedzerMenu;
    AdresaciMenedzer *adresaciMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    char wybor;
  public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
        adresaciMenedzer = NULL;
        wybor = 0;
    };
    ~KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    char wyswietlMenuLogowania();
    char wyswietlMenuAdresata();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmienHaslo();
    void wyszukajAdresataPoImieniu();
    void wyszukajAdresataPoNazwisku();
    void wylogujUzytkownika();
    void dodajAdresata();
    void wyswietlAdresatow();
    void usunAdresata();
    void edytujAdresata();
    int pobierzIdUzytkownika();
};

#endif // KSIAZKAADRESOWA_H
