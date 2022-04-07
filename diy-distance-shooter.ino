const int trig = 9;
const int echo = 10;

float uS, cm, inches, reading, del, mov_avg, reading_cnt;


void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delay(20);
  digitalWrite(trig, HIGH);
  delay(20);
  digitalWrite(trig, LOW);
  uS = pulseIn(echo, HIGH);
  cm = uS / 58;

  Serial.print("distance: ");
  Serial.println(cm);
  reading = constrain(cm, 3, 400);

  Serial.println(reading);

  int max_value = 400;

  if (reading < max_value) {
//    Serial.print("reading: ");
//    Serial.println(reading);
    // del = mapIt(reading);
    del = sqrt(10) * sqrt(reading);
//    Serial.print("delay: ");
//    Serial.println(del);
    
    if (reading > 300) {
      
    } else if (reading < 10 && reading > 0.1) {
      digitalWrite(6, HIGH);
      del = 100;
      delay(int(del));
      digitalWrite(6, LOW);
      delay(5);
    } else if ((reading < 25 && reading >=10) || reading > 1200) {
      digitalWrite(6, HIGH);
      del = 100;
      delay(int(del));
      digitalWrite(6, LOW);
      delay(100);
    } else if (reading < 40 && reading >=25) {
      digitalWrite(6, HIGH);
      del = 100;
      delay(int(del));
      digitalWrite(6, LOW);
      delay(150);
    } else if (reading < 70 && reading >= 40) {
      digitalWrite(6, HIGH);
      del = 100;
      delay(int(del));
      digitalWrite(6, LOW);
      delay(200);
    } else if (reading < 100 && reading >= 70) { 
      digitalWrite(6, HIGH);
      del = 100;
      delay(int(del));
      digitalWrite(6, LOW);
      delay(250);
    } else if (reading < 150 && reading >= 100) { 
      digitalWrite(6, HIGH);
      del = 100;
      delay(int(del));
      digitalWrite(6, LOW);
      delay(350);
    } else if (reading < 200 && reading >= 150) { 
      digitalWrite(6, HIGH);
      del = 100;
      delay(int(del));
      digitalWrite(6, LOW);
      delay(500);
    } else if (reading < 300 && reading >= 200) { 
      digitalWrite(6, HIGH);
      del = 100;
      delay(int(del));
      digitalWrite(6, LOW);
      delay(800);
    } else if (reading > 300) {
      digitalWrite(6, LOW);
    }
    
//    digitalWrite(6, LOW);
  }
//  delay(200);
}

float mapIt(float val) {
  float return_val;

  return_val = val * 5;

}
