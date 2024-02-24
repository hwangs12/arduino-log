/* with potentiometer, you can see the voltage change and read it */
/* analog pin value range from 0 - 1023 */

int readPin = A1;
float calcVol = 0.0;
void setup()
{
    // put your setup code here, to run once:
    pinMode(readPin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    // put your main code here, to run repeatedly:
    calcVol = 5.0 / 1023 * analogRead(readPin);
    Serial.println(calcVol);
    delay(500);
}
