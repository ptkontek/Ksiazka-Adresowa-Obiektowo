#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include <iostream>
#include <vector>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
using namespace std;

class AdresatMenager {
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA; // nie chcê aby jakas metoda zmieni³a t¹ dan¹
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami; //kilka razy bedziemy korzystac z obiektu, wiec mozemy go tutaj utworzyc, zamiast w .cpp

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();

public:
    AdresatMenager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {

        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    int usunAdresata();
    void edytujAdresata();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);

};

#endif
