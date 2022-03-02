
# arduino-simple-timers
Simple timer library for Arduino

This library was created make it a little bit easier to monitor elapsed time.

## Examples
### Simple usage

    #include "Timers.h"
    
    Timers timer;
        
    void setup() {
		timer.start(5000); //time in ms
    }
    
    void loop() {
		if (timer.available()) {
			timer.stop();
			//Do something
			timer.restart();
		}
    }
	
As you can see, usage is pretty basic. Please remember to stop timer after available function return `true`. Without that `available()` will return `true` indefinitely.

## Limitations
1. uin32_t types which are used will overflow eventually, after a little bit more than 49 days