

#include "Joy.h"

Joy::Joy(int URX1, int URY1, int SW1){
  _URX1 = URX1;
  _URY1 = URY1;
  _SW1 = SW1;
  pinMode(SW1, INPUT_PULLUP);
}

int Joy::readURY(){
  
int s = analogRead(_URY1);

return s;
}
int Joy::readURX(){

int k = analogRead(_URX1);

return k;
}
int Joy::readSW(){
  
int v = digitalRead(_SW1);

return v;
}
