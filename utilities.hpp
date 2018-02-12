#ifndef  UTILITIES_HPP
#define UTILITIES_HPP


int checkValidRangeInput( int menuMin, int menuMax);
double doubleCheckValidRangeInput(double menuMin, double menuMax);
int checkValidPositiveNumber();
double doubleCheckValidPositiveNumber();
int checkValidNumber();
int randomNumberGenerator(int startNUm, int endNum);
bool checkYesNoResponse();
void clearAndIgnore();
int checkGreaterNumber(int compareOne, int compareTwo);
int setDisplayWidth();
std::string getFullString();
void generateHorizontalBorder();
void generateVerticalBorder(int numOfBorders);
void pressEnterToReturn();
#endif
