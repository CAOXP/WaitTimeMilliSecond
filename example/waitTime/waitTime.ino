// Do not remove the include below
#include "WaitTimeMSec.h"

WaitTimeMSec wait5second(5000);
//The setup function is called once at startup of the sketch
void setup()
{
    // Start serial communication, baud rate 115200
    Serial.begin(115200);
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
	if( wait5second.bCheckTimeUp() ) Serial.println("Test5sec");

}


