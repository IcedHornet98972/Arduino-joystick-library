#include "Arduino.h"

class Joy{
  public:
  Joy(int URX1, int URY1, int SW1);
  int readSW();
  private:
  int _SW1;
  public:
  int readURY();
  private:
  int _URY1;
  public:
  int readURX();
  private:
  int _URX1;
  public:
  int UryForservo();
  int UrxForservo();
  
};
