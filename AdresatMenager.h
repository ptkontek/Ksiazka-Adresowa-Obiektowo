#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include <iostream>
#include <vector>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
using namespace std;

class AdresatMenager {
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami; //kilka razy bedziemy korzystac z obiektu, wiec mozemy go tutaj utworzyc, zamiast w .cpp
    MetodyPomocnicze metodyPomocnicze;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenager(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};

    int dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow(vector <Adresat> &adresaci);
};

#endif
