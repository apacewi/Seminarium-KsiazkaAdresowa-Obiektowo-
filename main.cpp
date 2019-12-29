#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main() {
    char wybor;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    while (true) {
        if(ksiazkaAdresowa.pobierzIdUzytkownika() == 0) {
            wybor = ksiazkaAdresowa.wyswietlMenuLogowania();
            if (wybor == '1') {
                ksiazkaAdresowa.rejestracjaUzytkownika();
            } else if (wybor == '2') {
                ksiazkaAdresowa.logowanieUzytkownika();
                ksiazkaAdresowa.wyswietlAdresatow();
            } else if (wybor == '9') {
                exit(0);
            }
        } else if (ksiazkaAdresowa.pobierzIdUzytkownika() > 0) {
            wybor = ksiazkaAdresowa.wyswietlMenuAdresata();

            if (wybor == '1') {
                ksiazkaAdresowa.dodajAdresata();
            }
            if (wybor == '2') {
                ksiazkaAdresowa.wyszukajAdresataPoImieniu();
            }
            if (wybor == '3') {
                ksiazkaAdresowa.wyszukajAdresataPoNazwisku();
            }
            if (wybor == '4') {
                ksiazkaAdresowa.wyswietlAdresatow();
            }
            if (wybor == '5') {
                ksiazkaAdresowa.usunAdresata();
            }
            if (wybor == '6') {
                ksiazkaAdresowa.edytujAdresata();
            }
            if (wybor == '7') {
                ksiazkaAdresowa.zmienHaslo();
            }
            if (wybor == '8') {
                ksiazkaAdresowa.wylogujUzytkownika();
            }
        }
    }
    return 0;
}
