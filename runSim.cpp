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
int numOfSteps;
int timeStep = 0;
Critter *board[20][20];

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


void getNumberOfSteps(){
    cout << setw(setDisplayWidth()) << left << "| Enter the number of steps:" << "|" <<  endl;
    numOfSteps = checkValidPositiveNumber();
    generateHorizontalBorder();
}



//Randomly Assigns critters
void assignCritters(){
  int numOfCritters = 400;
    //Assign ants
    while(numOfCritters>395){
      int x = randomNumberGenerator(0,20);
      int y = randomNumberGenerator(0,20);
      if( board[y][x] == NULL){
          board[y][x] = new Doodlebugs;
          numOfCritters --;
        }
    }

    while(numOfCritters>295){
      int x = randomNumberGenerator(0,20);
      int y = randomNumberGenerator(0,20);
      if(board[y][x] == NULL){
          board[y][x] = new Ant;
          numOfCritters --;
        }
    }

}


void printBoard(){
  cout << "----------------------" << endl;
    for(int i=0; i < 20; i++){
      cout << "|";
        for(int j=0; j< 20; j++){
          if(board[i][j] != NULL ){
              cout << board[i][j]->getName();
          }else if(board[i][j] == NULL ){
              cout << ' ';
          }
        }
        cout << "|" <<  endl;
    }
  cout << "----------------------" << endl;
}


bool nextStep(){
    if(timeStep!=numOfSteps){
      //run the next step, increment make move for critters,
      increaseStepsAlive();
      //breed if needed
      //starve if needed
      timeStep++;
      return true;
    }else{
      return false;
    }
}


/*
void makeNewBug(){
  if( board[y][x] == NULL){
      board[y][x] = new Doodlebugs;
      numOfCritters --;
    }
}*/

void increaseStepsAlive(){
    for(int i=0; i < 20; i++){
        for(int j=0; j< 20; j++){
          if(board[i][j] != NULL ){
              board[i][j]->addStep();
          }
        }
    }
  }
