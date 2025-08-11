#include <iostream>
#include <string>
using namespace std;



int main() {
    std::string verbe;
    std::cout << "\n\t\t Entrez un verbe a l'infinitif  : ";
    std::cin >> verbe;

    // Si le verbe se termine par "er"


    if (verbe.length() >= 2 && verbe.substr(verbe.length() - 2) == "er") {

        // Exclure le verbe "aller" qui est une exception

        if (verbe == "aller") {
            std::cout << "\n\t\t Le verbe choisi est : " " " << verbe << "\n\n\t\t appartient au 3e groupe." << std::endl;


        } else {


            std::cout << "\n\t\t Le verbe choisi est :" " " << verbe << "\n\n\t\t appartient au 1er groupe." << std::endl;
        }
    }
    // Si le verbe se termine par "ir"

    else if (verbe.length() >= 2 && verbe.substr(verbe.length() - 2) == "ir") {

        std::cout << "\n\t\t Le verbe choisi est : " " " << verbe << "\n\n\t\t appartient au 2e groupe." << std::endl;

    }
    // Si aucune des conditions précédentes n'est remplie, c'est le 3e groupe


    else {


        std::cout << "\n\t\t Le verbe choisi est : " " " << verbe << "\n\n\t\t appartient au 3e groupe." << std::endl;
    }

    return 0;
}
