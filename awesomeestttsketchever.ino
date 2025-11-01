//LOWER PERCUSSION!!!!!!!!!!!

const int coil1 = 2;
const int coil2 = 3;
const int coil3 = 4;
const int coil4 = 5;

bool goForward = true;

void setup() {
  Serial.begin(19200);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(coil1, OUTPUT);
  pinMode(coil2, OUTPUT);
  pinMode(coil3, OUTPUT);
  pinMode(coil4, OUTPUT);

  // all coils get turned off
  digitalWrite(coil1, LOW);
  digitalWrite(coil2, LOW);
  digitalWrite(coil3, LOW);
  digitalWrite(coil4, LOW);

  Serial.println("LISTENING");
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();

    //character selector thingy 
        if (c == 'a' || c == 'a') {
      if (goForward) {
        runStepperForward();
      } else {
        runStepperReverse();
      }
      goForward= !goForward;  // buonce
    }
    //HIGHER PERCUSSION!!!!!!!!!!!!!!!!!!!. this is like super important a little later because these full note cycles might also have a half note counterpart where it's a little weak on the motor action intentionally so that it can work faster... 
    //although I'm not doing that yet and I have hella ADHD so like, uhm, be prepared to wait forevah for that to come also if you have a smith corona typewriter please don't gut it to do this there are better
    //things to do with it. I just happened to have this. that's ur warning.
         if ( c == 'b'){
        digitalWrite(7, HIGH);
        delay(30);
        digitalWrite(7, LOW);
        delay(60);
        digitalWrite(6, HIGH);
        delay(30);
        digitalWrite(6, LOW);
      }

  }
}

void runStepperForward() {
  digitalWrite(coil1, HIGH);
  digitalWrite(coil3, HIGH);
  delay(5);
  digitalWrite(coil1, LOW);
  digitalWrite(coil3, LOW);
  delay(5);

  digitalWrite(coil1, HIGH);
  digitalWrite(coil4, HIGH);
  delay(5);
  digitalWrite(coil1, LOW);
  digitalWrite(coil4, LOW);
  delay(5);

  digitalWrite(coil2, HIGH);
  digitalWrite(coil4, HIGH);
  delay(5);
  digitalWrite(coil2, LOW);
  digitalWrite(coil4, LOW);
  delay(5);

  digitalWrite(coil2, HIGH);
  digitalWrite(coil3, HIGH);
  delay(5);
  digitalWrite(coil2, LOW);
  digitalWrite(coil3, LOW);
  delay(5);
}

void runStepperReverse() {
// reversed
  digitalWrite(coil2, HIGH);
  digitalWrite(coil3, HIGH);
  delay(5);
  digitalWrite(coil2, LOW);
  digitalWrite(coil3, LOW);
  delay(5);

  digitalWrite(coil2, HIGH);
  digitalWrite(coil4, HIGH);
  delay(5);
  digitalWrite(coil2, LOW);
  digitalWrite(coil4, LOW);
  delay(5);

  digitalWrite(coil1, HIGH);
  digitalWrite(coil4, HIGH);
  delay(5);
  digitalWrite(coil1, LOW);
  digitalWrite(coil4, LOW);
  delay(5);

  digitalWrite(coil1, HIGH);
  digitalWrite(coil3, HIGH);
  delay(5);
  digitalWrite(coil1, LOW);
  digitalWrite(coil3, LOW);
  delay(5);
}