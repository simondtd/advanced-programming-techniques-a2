#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <memory>
#include "Player.h"
#include "Bag.h"
#include "Board.h"

class Menu {

    public:
        Menu();
        ~Menu();

        void startMenu();

    private:
        void printMenu();

        int getMenuSelection();

        void executeOption(int selection);

        void newGame();

        std::string getPlayerName();

        void loadGame();

        void showStudents();

        void gameplayLoop();

        void quitGame();

        int getInputInt();

        std::string getInputStr();

        std::string deleteReturnChar(std::string string);

        int selection = 0;
        int numPlayers = 2;
        int boardSize = 6;
        Player* players[2];
        Player* players[2];
        Bag* bag = nullptr;
        Board* board = nullptr;

        /* Team members */
        const std::string students[3][3] = {
            {"Kyle Condron", "s3717110", "s3717110@student.rmit.edu.au"},
            {"Simon Helsinki", "s3694451", "s3694451@student.rmit.edu.au"},
            {"Luke Shuster", "s3725150", "s3725150@student.rmit.edu.au"}
        };
};
