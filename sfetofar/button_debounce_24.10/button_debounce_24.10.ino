int led=11;
int button=7;
int buttonState;
int ledState = HIGH;
int lastButtonState = LOW;


unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50; 

void setup() {
pinMode(led,OUTPUT);
pinMode(button,INPUT);
digitalWrite(led, ledState);
}

void loop() {
  int reading = digitalRead(button);
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
     if (reading != buttonState) {
      buttonState = reading;

      if (buttonState == HIGH) {
        ledState = !ledState;
      }
    }
  }

  digitalWrite(led, ledState);
  lastButtonState = reading;
//buttonState = digitalRead(button);
//if (buttonState == HIGH){
//  digitalWrite(led, HIGH);
//  } else {
//    digitalWrite(led, LOW);
//  }
  
}
