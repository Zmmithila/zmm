float temp;
int tempPin = 0;


void setup()

{
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
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


if(temp<=40)
{
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
}
else
{
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
}
delay(2000);
}






