#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenager.h"
#include "AdresatMenager.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenager uzytkownikMenager; //stworzenie obiektu
    AdresatMenager adresatMenager;
    MetodyPomocnicze metodyPomocnicze;
    vector <Adresat> adresaci;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenager(nazwaPlikuZUzytkownikami), adresatMenager(nazwaPlikuZAdresatami) {
        uzytkownikMenager.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    //void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow(vector <Adresat> &adresaci);
};

#endif
