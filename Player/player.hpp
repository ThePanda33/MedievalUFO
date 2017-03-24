#ifndef player_hpp
#define player_hpp

//#include "../Element/map.hpp"
#include <iostream>
#include <string>

class Player {
private:
  int _energy;
  bool  _lost;
  std::string _name;
public:
  Player (std::string);
  ~Player ();

  int getEnergy()const;
  bool getLost()const;
  std::string getName()const;

  void setEnergy(int);
  void setLost(bool);
  void setName(std::string);

  //void EndOfTurn(Map*);
};

#endif
