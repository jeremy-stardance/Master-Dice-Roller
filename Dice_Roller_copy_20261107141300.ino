int buttonPin[] = {7,8,9,10};

int ledPin[] = {14, 15, 16, 17, 18, 19, 20};

int minValue[] = {1, 1, 1, 1};
int maxValue[] = {4, 6, 8, 10};

int numButtons = sizeof(buttonPin) / sizeof(int);
int numLeds = sizeof(ledPin) / sizeof(int);

int randomNumber[4] = {0, 0, 0, 0};

int lastButtonState[4] = {HIGH, HIGH, HIGH, HIGH};

void setup() {

  Serial.begin(9600);

  randomSeed(analogRead(A0));

  for (int i = 0; i < numButtons; i++) {
    pinMode(buttonPin[i], INPUT_PULLUP);
  }

  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}
void loop() {
  
  for (int i = 0; i < numButtons; i++) {

    int currentButtonState = digitalRead(buttonPin[i]);

    if (currentButtonState == LOW && lastButtonState[i] == HIGH) {

      randomNumber[i] = random(minValue[i], maxValue[i] + 1);
    
      if (randomNumber[i] == 1) {
      digitalWrite(ledPin[6], HIGH);
      }
      if (randomNumber[i] == 2) {
      digitalWrite(ledPin[5], HIGH);
      }
      if (randomNumber[i] == 3) {
      digitalWrite(ledPin[6], HIGH);
      digitalWrite(ledPin[5], HIGH);
      }
      if (randomNumber[i] == 4) {
      digitalWrite(ledPin[5], HIGH);
      digitalWrite(ledPin[4], HIGH);
      }
      if (randomNumber[i] == 5) {
      digitalWrite(ledPin[6], HIGH);
      digitalWrite(ledPin[5], HIGH);
      digitalWrite(ledPin[4], HIGH);
      }
      if (randomNumber[i] == 6) {
      digitalWrite(ledPin[5], HIGH);
      digitalWrite(ledPin[4], HIGH);
      digitalWrite(ledPin[3], HIGH);
      }
      if (randomNumber[i] == 7) {
      digitalWrite(ledPin[6], HIGH);
      digitalWrite(ledPin[5], HIGH);
      digitalWrite(ledPin[4], HIGH);
      digitalWrite(ledPin[3], HIGH);
      }
      if (randomNumber[i] == 8) {
      digitalWrite(ledPin[5], HIGH);
      digitalWrite(ledPin[4], HIGH);
      digitalWrite(ledPin[3], HIGH);
      digitalWrite(ledPin[2], HIGH);
      }
      if (randomNumber[i] == 9) {
      digitalWrite(ledPin[6], HIGH);
      digitalWrite(ledPin[5], HIGH);
      digitalWrite(ledPin[4], HIGH);
      digitalWrite(ledPin[3], HIGH);
      digitalWrite(ledPin[2], HIGH);
      }
      if (randomNumber[i] == 10) {
      digitalWrite(ledPin[5], HIGH);
      digitalWrite(ledPin[4], HIGH);
      digitalWrite(ledPin[3], HIGH);
      digitalWrite(ledPin[2], HIGH);
      digitalWrite(ledPin[1], HIGH);
      }
  
      delay(250);
      digitalWrite(ledPin[0], LOW);
      digitalWrite(ledPin[1], LOW);
      digitalWrite(ledPin[2], LOW);
      digitalWrite(ledPin[3], LOW);
      digitalWrite(ledPin[4], LOW);
      digitalWrite(ledPin[5], LOW);
      digitalWrite(ledPin[6], LOW);
    }

    lastButtonState[i] = currentButtonState; 
  }
}
