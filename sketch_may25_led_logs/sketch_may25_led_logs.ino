// Tutorial: Blink
// This sketch uses the on-board LED that most ESP32 development boards have. 
// This LED is connected to digital pin D2, and its number may vary from board to board.
// https://lastminuteengineers.com/esp32-arduino-ide-tutorial/

// Start by connecting the LED and the resistor to the ESP32 development board.
// The LED has two legs: the anode and cathode. 
// The anode (positive) is connected to the digital pin and the cathode (negative) is connected to the resistor. 
// The other end of the resistor is connected to the ground pin.

// LED on GPIO2 (D2)
int ledPin = 2;

void setup()
{
    // Set LED as output
    pinMode(ledPin, OUTPUT);
    
    // Serial monitor setup
    Serial.begin(115200);
}

void loop()
{
    Serial.print("Loop: High");
    digitalWrite(ledPin, HIGH);
    
    delay(500);
    
    Serial.println(" Low");
    digitalWrite(ledPin, LOW);
    
    delay(500);
}
