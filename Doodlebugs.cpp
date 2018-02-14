/*********************************************************************
 ** Authors: Cory Schmidt, Adriano Pangelinan, David Pipitone, Patrick Snodval, Eric Sund
 ** Date: 02/18/2018
 ** File Description: "Doodlebugs.cpp" is the Doodlebugs class implementation file
 *********************************************************************/

//"Doodlebugs.hpp" is the Doodlebugs class header file
#include<iostream>
#include<cmath>
#include<string>
#include<limits>
#include<iomanip>
#include<stdlib.h>
#include <vector>
#include"utilities.hpp"

#include "Doodlebugs.hpp"
#include "Critter.hpp"

Doodlebugs::Doodlebugs():Critter(){
    critterType = "X";
}
