#include <iostream>
#include "programFlow.h"
#include "titlescreen.h"



void programFlow::displayManager() {
    titlescreen titleScreen;

    titleScreen.splash();
    titleScreen.mainMenu();
}
