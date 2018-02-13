#include<iostream>
#include<cmath>
#include<string>
#include<limits>
#include<iomanip>
#include<stdlib.h>
#include <vector>
#include"Ant.hpp"
#include"Critter.hpp"
#include"Doodlebugs.hpp"
#include"runSim.hpp"
#include"utilities.hpp"

using namespace std;

int numOfRows = 20;
int numOfColumns = 20;
std::vector<Critter*> board;

//Create begining menu screen
void runStartScreen(){
  int numSpace = 16;
  generateHorizontalBorder();
  generateVerticalBorder(3);
        cout << setw(16) << left <<"|"<< "Predatory-Prey Game" << setw(16) << right <<"|"<< endl;
  generateVerticalBorder(3);
  generateHorizontalBorder();

  pressEnterToContinue();
  generateHorizontalBorder();
}

//Generate Board with borders
void generateBoard(){
  for(int i=0; i < numOfRows; i++){
      for(int j=0; j< numOfColumns; j++){
      Critter *pointer = new Critter;
      board.push_back(pointer);
      }
  }
}


//Randomly Assigns critters
void assignCritters(){
  int numOfCritters = 105;
    //Assign ants
    while(numOfCritters>100){
      int x = randomNumberGenerator(1,21);
      int y = randomNumberGenerator(1,21);
      if(board[y][x].getName() == "Hello"){
          //board[y][x] = new Doodlebugs;
          numOfCritters --;
        }
    }

    while(numOfCritters>0){
      int x = randomNumberGenerator(1,21);
      int y = randomNumberGenerator(1,21);
      if(board[y][x].getName() == "Hello"){
          //board[y][x] = new Ant;
          numOfCritters --;
        }
    }
}


void printBoard(){
  for(int i=0; i < numOfRows; i++){
      for(int j=0; j< numOfColumns; j++){
        cout << board[1][1].getName();
      }
      cout << endl;
  }
  cout << endl;
}
