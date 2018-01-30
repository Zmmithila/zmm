float temp;
int tempPin = 0;

void setup()

{

Serial.begin(9600);

}

void loop()

{

temp = analogRead(tempPin);

temp = (temp/1024)*5000;

Serial.print("TEMPRATURE = ");

Serial.print(temp);

Serial.print("*C");

Serial.println();

delay(1000);

}
