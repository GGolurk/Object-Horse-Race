#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <iostream>

class Horse{
  private:
    int position;
    int trackLength;
    int id;
  public:
    Horse();
    void init(int id, int trackLength, int position);
    void advance();
    void printLane();
    bool isWinner();
}; // end class def


#endif
