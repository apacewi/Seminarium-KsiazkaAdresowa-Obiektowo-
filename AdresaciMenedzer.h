#ifndef ADRESACIMENEDZER_H
#define ADRESACIMENEDZER_H
#include <iostream>
#include <vector>
#include "Adresat.h"

#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"
#include "MenedzerMenu.h"

using namespace std;

class AdresaciMenedzer {
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    MetodyPomocnicze metodyPomocnicze;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    int podajIdWybranegoAdresata();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
  public:
    AdresaciMenedzer(string nazwaPlikuZAdresatami, int idUzytkownika)
        : plikZAdresatami(nazwaPlikuZAdresatami, idZalogowanegoUzytkownika), idZalogowanegoUzytkownika(idUzytkownika) {
        idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
        adresaci = plikZAdresatami.pobierzWektorZAdresatami();
    };
    void dodajAdresata();
    void wyswietlAdresatow();
    int usunAdresata();
    void edytujAdresata();
    void wyszukajPoImieniu();
    void wyszukajPoNazwisku();
};
#endif
