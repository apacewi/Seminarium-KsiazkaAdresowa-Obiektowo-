#ifndef ADRESAT_H
#define ADRESAT_H
#include <iostream>

using namespace std;

class Adresat {
  public:
    int idAdresata, numerTelefonu, idUzytkownika;
    string imie, nazwisko, adres, email;
  public:
    void ustawIdAdresata(int noweId);
    void ustawIdUzytkownika(int noweId);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(int nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);

    int pobierzIdAdresata();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzAdres();
    string pobierzEmail();
    int pobierzNumerTelefonu();


};
#endif // ADRESAT_H
