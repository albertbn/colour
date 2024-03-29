
/*! \file Object.hpp */

#ifndef OBJECT_HPP
#define OBJECT_HPP

#ifdef __cplusplus

#ifndef SKIP_INCLUDES
#include <opencv2/core/core.hpp>
#endif // SKIP_INCLUDES

using namespace std;
using namespace cv;

class Object {
 public:
  Object();
  ~Object(void);

  Object(string name);

  int getXPos();
  void setXPos(int x);

  int getYPos();
  void setYPos(int y);

  Scalar getHSVmin();
  Scalar getHSVmax();

  void setHSVmin(Scalar min);
  void setHSVmax(Scalar max);

  string getType(){return type;}
  void setType(string t){type = t;}

  Scalar getColor(){
    return Color;
  }
  void setColor(Scalar c){

    Color = c;
  }

 private:

  int xPos, yPos;
  string type;
  Scalar HSVmin, HSVmax;
  Scalar Color;
};

#endif // __cplusplus
#endif /*OBJECT_HPP*/
