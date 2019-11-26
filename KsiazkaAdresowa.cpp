#include "KsiazkaAdresowa.h"

using namespace std;

void KsiazkaAdresowa::rejestracjaUzytkownika() { //aby wywolac metofy z klasy uzytkownikmenager, tworze obiekt uzytk menager

    uzytkownikMenager.rejestracjaUzytkownika(); // dzialania na obiekcie uzytkownikMenager, a nie na klasie Uzytkownik.Menager
}

void KsiazkaAdresowa::logowanieUzytkownika() {

    uzytkownikMenager.logowanieUzytkownika();
    if (uzytkownikMenager.czyUzytkownikJestZalogowany()) {
        adresatMenager = new AdresatMenager(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenager.pobierzIdZalogowanegoUzytkownika()); //gdy wiem, ze uzytkownik jest zalogowany mogê utworzyæ obiekt adrmen
        //wstrzykiwanie zaleznoœci - albo przez konstruktor albo za pomoc¹ metod, dependence injection
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {

    uzytkownikMenager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {

    uzytkownikMenager.wylogowanieUzytkownika();
    delete adresatMenager; //WAZNE, zeby nie bylo wyciekow pamieci
    adresatMenager = NULL;
}

void KsiazkaAdresowa::dodajAdresata() {
    if (uzytkownikMenager.czyUzytkownikJestZalogowany()) {
        adresatMenager->dodajAdresata(); //jesli pracujê na wska¿niku to zeby wywo³ac metodê, na któr¹ wskazuje wskaŸnik -> zamiast kropki
    } else {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    if (uzytkownikMenager.czyUzytkownikJestZalogowany()) {
        adresatMenager->wyswietlWszystkichAdresatow();
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {
    adresatMenager->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku() {
    adresatMenager->wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::usunAdresata() {
    adresatMenager->usunAdresata();
}

//void KsiazkaAdresowa::edytujAdresata() {
  //  adresatMenager->edytujAdresata();
//}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
    uzytkownikMenager.czyUzytkownikJestZalogowany();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
