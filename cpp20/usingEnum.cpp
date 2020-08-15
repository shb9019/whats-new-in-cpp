#include <iostream>
#include <string>

enum class SoldierState { MOVE, ATTACK, IDLE, DEAD };

std::string getValue(SoldierState soldierState) {
  switch (soldierState) {
    using enum SoldierState;
    case MOVE: return "MOVE";
    case ATTACK: return "ATTACK";
    case IDLE:  return "IDLE";
    case DEAD: return "DEAD";
  }
}

int main() {
    return 0;
}
