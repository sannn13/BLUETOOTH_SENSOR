char Incoming_value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available() > 0)
  {
    Incoming_value = Serial.read();
    Serial.print(Incoming_value);
    Serial.print("\n");
    if(Incoming_value == '1')
    {
      digitalWrite(8, HIGH);
    }
    else if(Incoming_value == '0')
    digitalWrite(8, LOW);
  }
  // put your main code here, to run repeatedly:

}
