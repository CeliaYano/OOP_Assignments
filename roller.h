#ifndef ROLLER_H
#define ROLLER_H
#include <string>
#include "pen.h"

class RollerBallPen : public Pen{
public:
  RollerBallPen(std::string pen_name)
    : Pen(pen_name) {}  
RollerBallPen() : Pen(std::string("RollerBallPen")){}
  
};
#endif