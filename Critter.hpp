/*********************************************************************
 ** Authors: Cory Schmidt, Adriano Pangelinan, David Pipitone, Patrick Snodval, Eric Sund
 ** Date: 02/18/2018
 ** File Description: "Critter.hpp" is the Critter class header file
 *********************************************************************/

//include guards
#ifndef CRITTER_HPP
#define CRITTER_HPP

class Critter {

protected:
  std::string critterType;
public:
  Critter();
  std::string getName();
  virtual int makeMove(){
    return 0;
  };
};

#endif /* Critter_hpp */
