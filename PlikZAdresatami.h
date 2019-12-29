#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "PlikTekstowy.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami:public PlikTekstowy {
    string nazwaTymczasowegoPlikuZAdresatami;
    fstream plikTekstowy;
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    MetodyPomocnicze metodyPomocnicze;
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void wyswietlDaneAdresata(Adresat adresat);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
  public:
    PlikZAdresatami(string nazwaPlikuZAdresatami, int idUzytkownika) : PlikTekstowy(nazwaPlikuZAdresatami), idZalogowanegoUzytkownika(idUzytkownika) {
        nazwaTymczasowegoPlikuZAdresatami = "Adresaci_tymczasowy.txt";
    };
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void edytujWybranaLinieWPliku(int idAdresata, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> pobierzWektorZAdresatami();
    void usunWybranaLinieWPliku(int idAdresata);

};
#endif
