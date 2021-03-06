#ifndef element_hpp
#define element_hpp

//#include <iostream>
#include <string>
// #include "map.hpp"
#include <SFML/Graphics.hpp>


class Element;
class Position;

/** classe pour gerer la position et le deplacement des unités **/

class Position {
private:
  int _x;
  int _y;
public:
  Position ();
  Position (int,int);
  virtual ~Position ();
  /** Getter **/
  int getX()const;
  int getY()const;
  /** Setter **/
  void setX(int);
  void setY(int);
  Position& operator=(Position& pos){
    this->_x = pos.getX();
    this->_y = pos.getY();
    return(*this);
  }
  bool operator!=(Position& pos){
    if((this->getX()==pos.getX())&&(this->getY()==pos.getY())){
      return(false);
    } else {
      return(true);
    }
  }
  friend std::ostream &operator<<(std::ostream &os,const Position &pos){
       os << "------- Position \n";
       os << "X: " << pos.getX() << " Y: " << pos.getY() << '\n';
       return os;
 }
};


/****** Classe d'element, classe mère des unites et des décors, *********/


class Element {                                                                                       // class mere des unit et scenery, elle a en variable privé la position des objets qui sont derivé d'elle
protected:
  Position _pos;
public:
  Element ();
  virtual ~Element ();
  Position getPosition()const;
  void setPosition(Position);
  Element getElementOnPos(Position);
  void setElementPosition(Position);
  // friend class Map;

 //virtual std::string getName()const=0;
  Element &operator=( Element &e){
    this->_pos = e._pos;
    return (*this);
  }


};
#endif
