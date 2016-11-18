#include <iostream>
#include <windows.h>
#include <conio.h>
#include "titlescreen.h"

programFlow programFlow;

void titlescreen::splash() {
    int loopAmmount = 0;
    while (loopAmmount <= 4) {
            std::cout << "\n\n\n\n\n\n\n\n\n\n";
            std::cout << "                               CHRONICLES OF JONNE:" << std::endl;
            std::cout << "                               QUEST FOR THE GOLDEN" << std::endl;
            std::cout << "                                       ES" << std::endl;
            loopAmmount++;
            Sleep(750);
            system("CLS");
            std::cout << "\n\n\n\n\n\n\n\n\n\n\n";                                                  //Creates one extra line than above
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

        std::cout << "\n\n\n";
        std::cout << "   '*'    -    '*'    -    '*'    -    '*'    -    '*'    -    '*'    -    '*'" << std::endl; //Top line
        std::cout << "   '*'                                                                     '*'" << std::endl;
        std::cout << "   '*'    PLAY 'P'                                                         '*'" << std::endl;
        std::cout << "   '*'                                                                     '*'" << std::endl;
        std::cout << "   '*'    OPTIONS 'O'                                                      '*'" << std::endl;
        std::cout << "   '*'                                                                     '*'" << std::endl;
        std::cout << "   '*'    QUIT 'Q'                                                         '*'" << std::endl;
        std::cout << "   '*'                                                                     '*'" << std::endl;
        std::cout << "   '*'    -    '*'    -    '*'    -    '*'    -    '*'    -    '*'    -    '*'" << std::endl; //Bottom line

        switch(programFlow.input) {
        case 'q':
            programFlow.clr;
            std::cout << "\n\n\n\n\n\n\n\n\n\n\n                                       Thanks for playing!";
            Sleep(500);
        }
    }
