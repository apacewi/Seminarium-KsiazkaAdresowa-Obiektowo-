#include "Adresat.h"

void Adresat::ustawIdAdresata(int noweId) {
    if (noweId >= 0)
        idAdresata = noweId;
}
void Adresat::ustawIdUzytkownika(int noweId) {
    if (noweId >= 0)
        idUzytkownika = noweId;
}
void Adresat::ustawImie(string noweImie) {
    imie = noweImie;
}
void Adresat::ustawNazwisko(string noweNazwisko) {
    nazwisko = noweNazwisko;
}
void Adresat::ustawEmail(string nowyEmail) {
    email = nowyEmail;
}
void Adresat::ustawAdres(string nowyAdres) {
    adres = nowyAdres;
}
void Adresat::ustawNumerTelefonu(int nowyNumerTelefonu) {
    numerTelefonu = nowyNumerTelefonu;
}
int Adresat::pobierzIdAdresata() {
    return idAdresata;
}
int Adresat::pobierzIdUzytkownika() {
    return idUzytkownika;
}
string Adresat::pobierzImie() {
    return imie;
}
string Adresat::pobierzNazwisko() {
    return nazwisko;
}
string Adresat::pobierzEmail() {
    return email;
}
string Adresat::pobierzAdres() {
    return adres;
}
int Adresat::pobierzNumerTelefonu() {
    return numerTelefonu;
}
