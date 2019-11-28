#include "KsiazkaAdresowa.h"
#include <windows.h>
#include <fstream>
#include <sstream>
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjauzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

