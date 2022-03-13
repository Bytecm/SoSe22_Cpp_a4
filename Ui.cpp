#include <iostream>
#include <list>
#include "Ui.h"
#include "Koordinate.h"
#include "Rechteck.h"
#include "Kreis.h"

void Ui::anwendung() {
    Koordinate koordinate = Koordinate(1, 5);
    std::cout << koordinate.toString() << std::endl;

    // Zu Aufgabe 4: Wenn die Basisklasse Graf einen Konstruktor im protected Bereich hat, lässt dieser sich nicht von außerhalb aufrufen.
    // Er lässt sich aber innerhalb der erbenden Klassen aufrufen, weshalb deren Funktion nicht beeinträchtigt wird

    //Graf graf = Graf(Koordinate(2,7));
    //std::cout << graf.toString() << " Flaeche: " << graf.flaeche() << std::endl;

    Graf *graf;

    Kreis kreis = Kreis(Koordinate(9, 1), 5);
    graf = &kreis;
    std::cout << graf->toString() << " Flaeche: ";
    std::cout << graf->flaeche() << std::endl;

    Rechteck rechteck = Rechteck(Koordinate(56, 69), 88, 187);
    graf = &rechteck;
    std::cout << graf->toString() << " Flaeche: " << graf->flaeche() << std::endl;

//Object Lists
    std::list<Graf *> grafen;
    std::list<Kreis> kreise;
    std::list<Rechteck> rechtecke;

    std::cout << std::endl << std::endl << "------------------------------------------------------------------"
              << std::endl;
    std::cout << "Willkommen beim Zeichenelemente Programm." << std::endl;

    bool running = true;
    while (running) {
        int operation = 0;
        int mode = 0;
        //Kreis k = Kreis(Koordinate(0, 0), 0);
        //Rechteck r = Rechteck(Koordinate(0, 0), 0, 0);



        std::cout << "Folgende Operationen stehen zur Verfuegung:" << std::endl << "1. Zeichenelement erstellen"
                  << std::endl << "2. Zeichenelemente anzeigen" << std::endl << "3. Programm beenden" << std::endl
                  << "Welche Operation moechten Sie durchfuehren? (1/2/3)";
        std::cin >> operation;
        std::cout << std::endl;
        switch (operation) {
            case 1:
                std::cout << "Folgende Zeichenobjekte stehen zur auswahl:" << std::endl << "1. Kreis" << std::endl
                          << "2. Rechteck" << std::endl << "Welches Zeichenobjekt moechten Sie erstellen? (1/2)";
                std::cin >> mode;
                switch (mode) {
                    case 1: {
                        int x, y, r;
                        std::cout << "Bitte geben Sie die X Koordinate ein: ";
                        std::cin >> x;
                        std::cout << "Bitte geben Sie die Y Koordinate ein: ";
                        std::cin >> y;
                        std::cout << "Bitte geben Sie den Radius ein: ";
                        std::cin >> r;
                        try {
                            kreise.push_back(Kreis(Koordinate(x, y), r));
                            grafen.push_back(&kreise.back());
                        } catch (invalidValueInputException e){
                            std::cout << e.getError() << std::endl;
                        }
                        break;
                    }
                    case 2: {
                        int x, y, w, h;
                        std::cout << "Bitte geben Sie die X Koordinate ein: ";
                        std::cin >> x;
                        std::cout << "Bitte geben Sie die Y Koordinate ein: ";
                        std::cin >> y;
                        std::cout << "Bitte geben Sie die Hoehe an: ";
                        std::cin >> h;
                        std::cout << "Bitte geben Sie die Breite an: ";
                        std::cin >> w;
                        rechtecke.push_back(Rechteck(Koordinate(y, x), w, h));
                        grafen.push_back(&rechtecke.back());
                        break;
                    }
                    default:
                        std::cout << "Eingabe nicht erkannt, bitte erneut probieren." << std::endl;
                        break;
                }
                break;
            case 2:
                std::cout << "Folgende Ausgaben stehen zur auswahl:" << std::endl << "1. gemischt" << std::endl
                          << "2. Erst Kreise dann Rechtecke" << std::endl << "Welches Ausgabe moechten Sie? (1/2)";
                std::cin >> mode;
                switch (mode) {
                    case 1: {
                        double gesammt_flaeche = 00.00;
                        std::cout << "-----------------------Zeichenobjekte-----------------------------" << std::endl;
                        for (auto const &it: grafen) {
                            std::cout << it->toString() << " Hat die Flaeche:" << it->flaeche() << std::endl;
                            gesammt_flaeche += it->flaeche();
                        }
                        std::cout << "Gesammt Flaeche: " << gesammt_flaeche << std::endl;
                        std::cout << "------------------------------------------------------------------" << std::endl;
                        break;
                    }
                    case 2: {
                        double gesammt_flaeche = 00.00;
                        std::cout << "-------------------------------Kreise-----------------------------" << std::endl;
                        for (auto const &it: kreise) {
                            std::cout << it.toString() << " Hat die Flaeche:" << it.flaeche() << std::endl;
                            gesammt_flaeche += it.flaeche();
                        }
                        std::cout << "-------------------------Rechtecke--------------------------------" << std::endl;
                        for (auto const &it: rechtecke) {
                            std::cout << it.toString() << " Hat die Flaeche:" << it.flaeche() << std::endl;
                            gesammt_flaeche += it.flaeche();
                        }
                        std::cout << "Gesammt Flaeche: " << gesammt_flaeche << std::endl;
                        std::cout << "------------------------------------------------------------------" << std::endl;
                        break;
                    }
                    default:
                        break;
                }


                break;
            case 3:
                std::cout << "Auf wiedersehen!" << std::endl;
                running = false;
                break;
            default:
                std::cout << "Eingabe nicht erkannt, bitte erneut probieren." << std::endl;
                break;
        }

    }

}

