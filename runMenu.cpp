#include<iostream>
#include<cmath>
#include<string>
#include<limits>
#include<iomanip>
#include<stdlib.h>
#include <vector>
#include"runMenu.hpp"
#include"utilities.hpp"

using namespace std;


runMenu(){
  int numSpace = 16;


  //Create begining menu screen
  generateHorizontalBorder();
  generateVerticalBorder(1);
        cout << setw(21) << left <<"|"<< "Main Menu" << setw(21) << right <<"|"<< endl;// Total = 18 + 23
  generateVerticalBorder(2);
        cout << setw(numSpace) << left << "|" << setw(setDisplayWidth()-numSpace) << left << "1. Backwards String" << "|" << endl;// Total = 18 + 23
        cout << setw(numSpace) << left << "|" << setw(setDisplayWidth()-numSpace) << left << "2. Sum of Ints" << "|" << endl;// Total = 18 + 23
        cout << setw(numSpace) << left << "|" << setw(setDisplayWidth()-numSpace) << left << "3. Triangular" << "|" << endl;// Total = 18 + 23
        cout << setw(numSpace) << left << "|" << setw(setDisplayWidth()-numSpace) << left << "4. Exit" << "|" << endl;// Total = 18 + 23
  generateVerticalBorder(2);

}
