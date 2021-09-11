#include "IRremote.h" //include the library

int receiver = 11;   // where is connected the S pin of infrared sensor 

IRrecv irrecv(receiver); //create a new instance of receiver

decode_results results;

void setup() {

 Serial.begin(9600);
 irrecv.enableIRIn(); //start the receiver

}
void loop() {

 if (irrecv.decode(&results)) 
{ 
//we have received an IR
 Serial.println (results.value, HEX); //display HEX
 irrecv.resume(); //next value
 }
}
