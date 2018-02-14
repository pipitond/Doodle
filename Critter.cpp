/*********************************************************************
 ** Authors: Cory Schmidt, Adriano Pangelinan, David Pipitone, Patrick Snodval, Eric Sund
 ** Date: 02/18/2018
 ** File Description: "Critter.hpp" is the Critter class header file
 *********************************************************************/

//"Critter.hpp" is the Critter class header file
#include<iostream>
#include<cmath>
#include<string>
#include<limits>
#include<iomanip>
#include<stdlib.h>
#include <vector>
#include"utilities.hpp"

#include "Critter.hpp"

Critter::Critter(){
  stepsAlive = 0;
}

std::string Critter::getName(){
  return critterType;
}

void Critter::addStep(){
  stepsAlive ++;
}

int Critter::getStep(){
  return stepsAlive;
}
