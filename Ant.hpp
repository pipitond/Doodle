/*********************************************************************
 ** Authors: Cory Schmidt, Adriano Pangelinan, David Pipitone, Patrick Snodval, Eric Sund
 ** Date: 02/18/2018
 ** File Description: "Ant.hpp" is the Ant class header file
 *********************************************************************/

//include guards
#ifndef ANT_HPP
#define ANT_HPP
#include "Critter.hpp"

class Ant : public Critter {

protected:

public:
  Ant();
  int makeMove();
};

#endif /* Ant_hpp */
