#ifndef ADRESACIMENEDZER_H
#define ADRESACIMENEDZER_H
#include <iostream>
#include <vector>
#include "Adresat.h"

#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresaciMenedzer
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    MetodyPomocnicze metodyPomocnicze;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
public:
   AdresaciMenedzer(string nazwaPlikuZAdresatami, int idUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami, idZalogowanegoUzytkownika), idZalogowanegoUzytkownika(idUzytkownika){
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
   };
    void dodajAdresata();
    void wyswietlAdresatow();
};
#endif
