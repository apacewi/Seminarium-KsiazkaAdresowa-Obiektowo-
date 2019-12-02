#include "KsiazkaAdresowa.h"
#include <windows.h>
#include <fstream>
#include <sstream>
KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
}
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjauzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

