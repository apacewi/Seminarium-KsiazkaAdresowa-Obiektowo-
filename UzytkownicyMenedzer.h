#ifndef UZYTKOWNICYMENEDZER_H
#define UZYTKOWNICYMENEDZER_H
#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include "PlikZUzytkownikam.h"

using namespace std;

class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;
public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
    void wczytajUzytkownikowZPliku();
    void rejestracjauzytkownika();
    void wypiszWszystkichUzytkownikow();
};
#endif
