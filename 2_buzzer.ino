/* working with passive buzzer and controlling volume by writing code */

int passiveBuzz = 9; // pin number used for special analog write

void setup()
{
    // put your setup code here, to run once:
    pinMode(passiveBuzz, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    // put your main code here, to run repeatedly:
    analogWrite(passiveBuzz, 10); // turn on buzz. value larger volume gets larger
    delay(500);
    analogWrite(passiveBuzz, 0); // turn off buzz.
    delay(500);
    analogWrite(passiveBuzz, 8);
    delay(500);
    analogWrite(passiveBuzz, 0); // turn off buzz.
    delay(500);
    analogWrite(passiveBuzz, 6);
    delay(500);
    analogWrite(passiveBuzz, 0); // turn off buzz.
    delay(500);
    analogWrite(passiveBuzz, 4);
    delay(500);
    analogWrite(passiveBuzz, 0); // turn off buzz.
    delay(500);
    analogWrite(passiveBuzz, 2);
    delay(500);
}
