#include "Uzytkownik.h"

// HERMETYZACJA ustawienie metod, za pomoc¹ inne klasy mogê pobierac wartoœci prywatne z tej klasy
// settery
void Uzytkownik::ustawId(int noweId) {
    //walidacja, zabezpieczenie programu przed z³ym wprowadzeniem danych
    if (noweId>=0)
        id = noweId;
}
void Uzytkownik::ustawLogin(string nowyLogin) {
    login = nowyLogin;
}
void Uzytkownik::ustawHaslo(string noweHaslo) {
    haslo = noweHaslo;
}

//gettery
int Uzytkownik::pobierzId() {
    return id;
}
string Uzytkownik::pobierzLogin() {
    return login;
}
string Uzytkownik::pobierzHaslo() {
    return haslo;
}
