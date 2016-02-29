#include <multiCameraIrControl.h>
 
Nikon D3000(9);
 
int onValue = 10; // specify how long the status LED is turned on
int delayValue = 5000; // specify interval between shots in milliseconds
Nikon D90(9); // specifies the camera model

void setup(){
  pinMode(13, OUTPUT); // initialize pin 13 as an output.
}

void loop(){
  digitalWrite(13, HIGH); // set the LED on
  delay(onValue); // wait
  D3000.shutterNow(); // trigger the shutter
  digitalWrite(13, LOW); // set the LED off
  delay(delayValue-onValue); // wait
}
