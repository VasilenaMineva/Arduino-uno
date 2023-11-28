const int voltagePin = A5;
int val;
float voltage;

void setup() {
Serial.begin(9600);
}

void loop() {
 val=analogRead(voltagePin);
 voltage=(val*55.0)/1024;
 Serial.println(voltage);
 delay(100);
}
