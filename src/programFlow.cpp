#include <iostream>
#include <conio.h>
#include <windows.h>
#include "programFlow.h"
#include "titlescreen.h"

int input;

void programFlow::displayManager() {

    titlescreen titleScreen;

    titleScreen.splash();
    titleScreen.mainMenu();
}
