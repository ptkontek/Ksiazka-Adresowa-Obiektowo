#include "Uzytkownik.h"

// HERMETYZACJA ustawienie metod, za pomoca inne klasy moga pobierac wartosci prywatne z tej klasy
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
