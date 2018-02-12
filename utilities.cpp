/*********************************************************************
** Author: Patrick Sandoval
** Date: 00/00/00
** Description: This is a utilities folder intended to reduce redundencies
**              in code.
*********************************************************************/

#include<iostream>
#include<cmath>
#include<string>
#include<limits>
#include<iomanip>
#include<stdlib.h>
#include <vector>
#include"utilities.hpp"
using namespace std;


//A menu number check to determine wether input was valid for the menu
int setWidthRange = 50;
char border = '|';

int setDisplayWidth(){
  return setWidthRange;
}

void generateHorizontalBorder(){
  for(int i=-1; i <setWidthRange;i++){
    cout << "-";//50
  }
    cout << endl;
}

void generateVerticalBorder(int numOfBorders){
  for(int i = 0; i < numOfBorders; i++) {
    cout << border << setw(setWidthRange) << right << border << endl;//39
  }
}

int checkValidRangeInput( int menuMin, int menuMax){
  int input;
  bool validInput = false;
  generateHorizontalBorder();
  while(!validInput){
        cout << "| Please Enter Your Choice: ";
        cin >> input;
    if(input > 0 && input >= menuMin && input <= menuMax){
      validInput = true;
      clearAndIgnore();
    }else{
        clearAndIgnore();
        generateVerticalBorder(1);
        cout << border << setw(setWidthRange-1) << left << " Wrong entry," << border << endl;
        cout << border << setw(setWidthRange-1) << left << " Please enter a valid input."<< border << endl;// 39
        generateVerticalBorder(1);
    }
  }
  generateHorizontalBorder();
  return input;
}


//A menu number check to determine wether input was valid for the menu
double doubleCheckValidRangeInput( double menuMin, double menuMax){
    int input;
    bool validInput = false;
        cout << setw(setDisplayWidth()) << left << "| Please Enter Your Choice:" << "|" << endl;
  while(!validInput){
        cout << border;
        cin >> input;
    if(input > 0 && input >= menuMin && input <= menuMax){
      validInput = true;
      clearAndIgnore();
    }else{
        clearAndIgnore();
        cout << border << setw(setWidthRange-1) << left << " Wrong entry," << border << endl;// 39
        cout << border << setw(setWidthRange-1) << left << " Please enter a valid input: "<< border << endl;// 39
    }
  }
  return input;
}

int checkValidPositiveNumber(){
  int numberInputted;
  bool validInput = false;
  while(!validInput){
        cout << border << " ";
        cin >> numberInputted;

    if(numberInputted >0){
      validInput = true;
      clearAndIgnore();
    }else{
      clearAndIgnore();
        cout << border << setw(setWidthRange-1) << left << " Wrong entry," << border << endl;// 39
        cout << border << setw(setWidthRange-1) << left << " Please Enter a positive number" << "|" << endl;
    }
  }
  return numberInputted;
}

double doubleCheckValidPositiveNumber(){
  double numberInputted;
  bool validInput = false;
        cout << setw(setDisplayWidth()) << left << "| Please Enter your positive number:" << "|" << endl;
  while(!validInput){
        cout << border;
        cin >> numberInputted;
    if(numberInputted >0){
      validInput = true;
      clearAndIgnore();
    }else{
      clearAndIgnore();
        cout << border << setw(setWidthRange-1) << left << " Wrong entry," << border << endl;// 39
        cout << border << setw(setWidthRange-1) << left << " Please enter a valid input: "<< border << endl;// 39
    }
  }
  return numberInputted;
}

int checkValidNumber(){
  int numberInputted;
  bool validInput = false;
        //cout << setw(setDisplayWidth()) << left << "| Please Enter your positive number:" << "|" << endl;
  while(!validInput){
        //cout << border;
    cin >> numberInputted;
    if(cin.fail()){
      clearAndIgnore();
        cout << border << setw(setWidthRange-1) << left << " Wrong entry," << border << endl;// 39
        cout << border << setw(setWidthRange-1) << left << " Please enter a valid input: "<< border << endl;// 39
    }else if(numberInputted > 0||numberInputted < 0 || numberInputted == 0){
      validInput = true;
      clearAndIgnore();
    }
  }
  return numberInputted;
}


//generates number between from one number to a second number;
//Default number is 0 through 5
int randomNumberGenerator(int startNUm, int endNum){
  int randomNumber;
  randomNumber = rand() % endNum + startNUm;
  return randomNumber;
}

// checks yes or no, return true for yes
bool checkYesNoResponse(){
  bool validRestartResponce = false;
  char restartResponce;
  //cout << setw(setWidthRange) << left <<"* Would you like to play again? " << setw(7) << left <<"*"<<  endl;
  while (!validRestartResponce){
      cout << border << setw(setWidthRange-1) << left <<" y/n " << setw(33) << left <<"|"<<  endl;
      cout << border;
      cin >> restartResponce;

      if(restartResponce == 'y' || restartResponce == 'Y'){
        validRestartResponce = true;
        clearAndIgnore();
        return true;
      }else if(restartResponce == 'n' || restartResponce == 'N'){
        cout << border << setw(setWidthRange-1) << left << border << endl;//39
        //cout << "* Game Exiting... " << setw(21) << left <<"*"<< endl;// 18 + 23
        //cout << "* Goodbye world " << setw(23) << left <<"*"<< endl;// 18 + 23
        clearAndIgnore();
        return false;
      }else{
          clearAndIgnore();
          generateVerticalBorder(1);
          cout << border << setw(setWidthRange-1) << left << " Wrong entry," << left << border << endl;// 39
          cout << border << setw(setWidthRange-1) << left << " Please enter a 'y' or 'n' " << border << endl;// 39
          generateVerticalBorder(1);
      }
    }
    return true;
}


//Clears the stream and ignores and input, for accepting new info
void clearAndIgnore(){
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


//Takes two numbers for input and checks which is greater
int checkGreaterNumber(int compareOne, int compareTwo){
  if(compareOne > compareTwo){
    return 1;
  }else if(compareTwo > compareOne){
    return 2;
  }else{
    return 3;
  }

  return 0;
}

string getFullString(){
  string newString;
  cout << "| ";
  std::getline(std::cin , newString);
  return newString;
}

void pressEnterToReturn(){
  cout << border << setw(setWidthRange-1) << left << " Press [ENTER] To Return To Menu" << border;
  clearAndIgnore();
}
