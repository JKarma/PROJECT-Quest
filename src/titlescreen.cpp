#include <iostream>
#include <windows.h>
#include <conio.h>
#include "titlescreen.h"

void titlescreen::splash() {
    int loopAmmount = 0;
    int input;
    while (loopAmmount <= 4) {
            std::cout << "\n\n\n\n\n\n\n\n\n\n";
            std::cout << "                               CHRONICLES OF JONNE:" << std::endl;
            std::cout << "                               QUEST FOR THE GOLDEN" << std::endl;
            std::cout << "                                       ES" << std::endl;
            loopAmmount++;
            Sleep(750);
            system("CLS");
            std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
            std::cout << "                               CHRONICLES OF JONNE:" << std::endl;
            std::cout << "                               QUEST FOR THE GOLDEN" << std::endl;
            std::cout << "                                       ES" << std::endl;
            Sleep(750);
            loopAmmount++;
            system("CLS");
    }
}

    //The actual main menu

    void titlescreen::mainMenu() {
        std::cout << "***********************************" << std::endl;
    }
