#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Uzytkownik
{
    int id;
    string login, haslo;
public:
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};
