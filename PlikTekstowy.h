#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H
#include <fstream>

using namespace std;

class PlikTekstowy {
  protected:
    const string NAZWA_PLIKU;
    bool czyPlikJestPusty();
    PlikTekstowy(string nazwa) : NAZWA_PLIKU(nazwa) {};
};

#endif
