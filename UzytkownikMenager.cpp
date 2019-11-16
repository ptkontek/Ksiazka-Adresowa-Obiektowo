# include "UzytkownikMenager.h"

void UzytkownikMenager::rejestracjaUzytkownika() {
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

void UzytkownikMenager::wypiszWszystkichUzytkownikow() {
    for (int i = 0; i < uzytkownicy.size(); i++) {
        cout <<uzytkownicy[i].pobierzId() << endl;
        cout <<uzytkownicy[i].pobierzLogin() << endl;
        cout <<uzytkownicy[i].pobierzHaslo() << endl;
    }
}

Uzytkownik UzytkownikMenager::podajDaneNowegoUzytkownika() {
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());  // uzytkownik.id = pobierzIdNowegoUzytkownika();
    string  login;
    do {
        cout << "Podaj login: ";
        cin >> login;
        //uzytkownik.login = wczytajLinie();
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin())== true);

    string haslo;
    cout << "Podaj haslo: ";
    cin >> haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}

int UzytkownikMenager::pobierzIdNowegoUzytkownika() {
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool UzytkownikMenager::czyIstniejeLogin(string login) {
    for (int i = 0; i < uzytkownicy.size(); i++) {
        if (uzytkownicy[i].pobierzLogin() == login) {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }
    return false;
}

void UzytkownikMenager::wczytajUzytkownikowZPliku() {

    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}

int UzytkownikMenager::logowanieUzytkownika() {
    Uzytkownik uzytkownik;
    string login = "", haslo = "";

    cout << endl << "Podaj login: ";
    cin >> login;
    uzytkownik.ustawLogin(login);

    for (int i = 0; i < uzytkownicy.size(); i++) {

        if (uzytkownicy[i].pobierzLogin() == login) {

            for (int iloscProb = 3; iloscProb > 0; iloscProb--) {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                cin >> haslo;
                uzytkownik.ustawHaslo(haslo);

                if (uzytkownicy[i].pobierzHaslo() == haslo) {
                    {
                        cout << endl << "Zalogowales sie." << endl << endl;
                        system("pause");
                        return uzytkownicy[i].pobierzId();
                    }
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
    }
}

void UzytkownikMenager::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    cout << "zmieniasz haslo, id wyonosi:" << idZalogowanegoUzytkownika << endl;
    Sleep(2000);
    Uzytkownik uzytkownik;
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    cin >> noweHaslo;
    uzytkownik.ustawHaslo(noweHaslo);

    for (int i = 0; i < uzytkownicy.size(); i++) {
        if (uzytkownicy[i].pobierzId() == idZalogowanegoUzytkownika)
        {
           // uzytkownicy[i].pobierzHaslo() = noweHaslo;
           uzytkownicy[i].ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}
