#ifndef element_hpp
#define element_hpp

//#include <iostream>
#include <string>


class Element;
class Position;

/** classe pour gerer la position et le deplacement des unités **/

class Position {
private:
  int _x;
  int _y;
public:
  Position ();
  virtual ~Position ();
  /** Getter **/
  int getX()const;
  int getY()const;
  /** Setter **/
  void setX(int);
  void setY(int);
};


/****** Classe d'element, classe mère des unites et des décors, *********/


class Element {
protected:
  Position _pos;
public:
  Element ();
  virtual ~Element ();
  Position getElementOnPos()const;
  void setElementPosition(Position,Element);

  Element &operator=(const Element &e){
    this->_pos = e._pos;
    return (*this);
  }
};
#endif
