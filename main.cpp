/*********************************************************************
 ** Authors: Cory Schmidt, Adriano Pangelinan, David Pipitone, Patrick Snodval, Eric Sund
 ** Date: 02/18/2018
 ** File Description: "main.cpp" is the main function file
 *********************************************************************/

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


int main(){
srand(time(0));


runStartScreen();
getNumberOfSteps();
assignCritters();
printBoard();
while(nextStep()){
  printBoard();
}
cout << setw(setDisplayWidth()) << left << "| Would you like to simulate again?" << "|" << endl;
if(checkYesNoResponse()){
  main();
}





return 0;
}
