#ifndef Timers_h
#define Timers_h

#include <Arduino.h>
#include <inttypes.h>

class Timers
{
  public:
    Timers() {}
	
	void start(uint32_t waitTime);
	void restart();
	void stop();
	bool available();
	bool running();
	
  private:
	uint32_t _waitTime = 0;
	uint32_t _destTime = 0;
};
#endif
