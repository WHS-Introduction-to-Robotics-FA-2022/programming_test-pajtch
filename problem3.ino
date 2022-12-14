int inPin =A2;
int val;

void setup()
{
  pinMode(A2,val);
  Serial.begin(9600);
    // set up your input pin
    // initialize the serial monitor at 9600 baud
}

void loop()
{
  Serial.println(analogRead(inPin));
  delay(250);
    // read your sensor pin A0 and store that in the "val" variable
    // print that value as a hexidecimal number in the serial monitor
    // delay the appropriate amount of time
}
