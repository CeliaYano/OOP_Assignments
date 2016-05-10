#include'roller.h'

virtual std::string drawLine() {
    return getName().append(" draws a line.");
  }
  virtual std::string drawCircle(){
    return getName().append(" draws a circle.");
  }