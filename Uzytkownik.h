#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>

using namespace std;

class Uzytkownik{
    int id;
    string login;
    string haslo;

    // settery aby dac dostep innym klasom do prywatnych danych
public:
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    //gettery
    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};

#endif
