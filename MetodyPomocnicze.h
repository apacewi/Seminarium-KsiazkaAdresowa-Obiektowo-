#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>

using namespace std;

class MetodyPomocnicze
{
    public:
    static string konwerjsaIntNaString(int liczba);
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    int konwersjaStringNaInt(string liczba);
    int wczytajLiczbeCalkowita();
    char wczytajZnak();
};
#endif
