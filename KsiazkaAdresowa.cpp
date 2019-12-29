#include "KsiazkaAdresowa.h"
#include <windows.h>
#include <fstream>
#include <sstream>

void KsiazkaAdresowa::zmienHaslo() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenedzer.logowanieUzytkownika();
    adresaciMenedzer = new AdresaciMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdUzytkownika());
}
void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjauzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::wylogujUzytkownika() {
    uzytkownikMenedzer.wylogujUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata() {
    adresaciMenedzer->dodajAdresata();
}
void KsiazkaAdresowa::wyswietlAdresatow() {
    adresaciMenedzer->wyswietlAdresatow();
}
KsiazkaAdresowa::~KsiazkaAdresowa() {
    delete adresaciMenedzer;
    adresaciMenedzer = NULL;
}
void KsiazkaAdresowa::usunAdresata() {
    adresaciMenedzer->usunAdresata();
};
void KsiazkaAdresowa::edytujAdresata() {
    adresaciMenedzer -> edytujAdresata();
};
char KsiazkaAdresowa::wyswietlMenuLogowania() {
    wybor = menedzerMenu.wybierzOpcjeZMenuGlownego();
    return wybor;
}
char KsiazkaAdresowa::wyswietlMenuAdresata() {
    wybor = menedzerMenu.wybierzOpcjeZMenuUzytkownika();
    return wybor;
}
int KsiazkaAdresowa::pobierzIdUzytkownika() {
    int idUzytkownika = 0;
    idUzytkownika = uzytkownikMenedzer.pobierzIdUzytkownika();
    return idUzytkownika;
}
void KsiazkaAdresowa::wyszukajAdresataPoImieniu() {
    adresaciMenedzer -> wyszukajPoImieniu();
}
void KsiazkaAdresowa::wyszukajAdresataPoNazwisku() {
    adresaciMenedzer -> wyszukajPoNazwisku();
}
