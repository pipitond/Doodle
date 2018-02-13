#include<iostream>
#include<cmath>
#include<string>
#include<limits>
#include<iomanip>
#include<stdlib.h>
#include <vector>
#include"utilities.hpp"

using namespace std;

int numOfRows = 22;
int numOfColumns = 22;
char board[22][22];

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
  for(int i = 0; i < numOfRows; i++) {
    for(int j = 0; j < numOfColumns; j++) {
      if(i == 0 || i == (numOfRows - 1)) {
        board[i][j] = '-';
      } else if (j == 0 || j == (numOfColumns - 1)) {
        board[i][j] = '|';
      } else {
        board[i][j]= ' ';
      }
    }
  }
}

void assignCritters(){
  int numOfCritters = 105;
    //Assign ants
    while(numOfCritters>100){
      int x = randomNumberGenerator(1,21);
      int y = randomNumberGenerator(1,21);
      if(board[y][x] == ' '){
          board[y][x] = 'O';
          numOfCritters --;
        }
    }

    while(numOfCritters>0){
      int x = randomNumberGenerator(1,21);
      int y = randomNumberGenerator(1,21);
      if(board[y][x] == ' '){
          board[y][x] = 'X';
          numOfCritters --;
        }
    }
}

void printBoard(){
  for(int i=0; i < numOfRows; i++){
      for(int j=0; j< numOfColumns; j++){
      cout << board[i][j];
      }
      cout << endl;
  }
  cout << endl;
}
