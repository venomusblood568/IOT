// C++ code
//
int mositure = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  mositure = analogRead(A0);
  Serial.println(mositure);
  if (mositure > 150) {
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}