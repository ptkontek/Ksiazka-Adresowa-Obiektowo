#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenager.h"
#include "AdresatMenager.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenager uzytkownikMenager; // obiekt tworzy siê od razu po utworzeniu klasy KsAdr, wiec mozemy wczytaæ uzytkownikow w konstruktorze klasy UzMen
    AdresatMenager *adresatMenager; // wskaŸnik na klasê AdrMen, operatorem new - stworzenie obiektu danej klasy
    const string NAZWA_PLIKU_Z_ADRESATAMI; // zadna metoda w tej klasie nie zmieni nazwy zmiennej

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikMenager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        adresatMenager = NULL;
    };
    ~KsiazkaAdresowa() { //sprz¹tanie po klasie
        delete adresatMenager;
        adresatMenager = NULL;
    };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    //void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();
    void edytujAdresata();


    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
};

#endif
