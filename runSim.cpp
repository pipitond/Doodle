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
char** board;


void runStartScreen(){
  int numSpace = 16;
  //Create begining menu screen
  generateHorizontalBorder();
  generateVerticalBorder(3);
        cout << setw(16) << left <<"|"<< "Predatory-Prey Game" << setw(16) << right <<"|"<< endl;// Total = 18 + 23
        //cout << setw(numSpace) << left << "|" << setw(setDisplayWidth()-numSpace) << left << "1. Backwards String" << "|" << endl;// Total = 18 + 23
        //cout << setw(numSpace) << left << "|" << setw(setDisplayWidth()-numSpace) << left << "2. Sum of Ints" << "|" << endl;// Total = 18 + 23
        //cout << setw(numSpace) << left << "|" << setw(setDisplayWidth()-numSpace) << left << "3. Triangular" << "|" << endl;// Total = 18 + 23
        //cout << setw(numSpace) << left << "|" << setw(setDisplayWidth()-numSpace) << left << "4. Exit" << "|" << endl;// Total = 18 + 23
  generateVerticalBorder(3);
  generateHorizontalBorder();
  pressEnterToContinue();
  generateHorizontalBorder();
}

void generateBoard(){
  board = new char*[numOfRows];
  for(int i = 0; i < numOfRows; ++i){
        board[i] = new char[numOfColumns];
    }
  for(int i = 0; i < numOfRows; i++) {
    for(int j = 0; j < numOfColumns; j++) {
      if(i == 0 || i == (numOfRows - 1)) {
        board[i][j] = '-';
      } else if (j == 0 || j == (numOfColumns - 1)) {
        board[i][j] = '|';
      } else {
        board[i][j]= 'x';
      }
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
