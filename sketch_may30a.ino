const int inputPin = 2;

unsigned long duration;

int counter = 0;

void setup() {
  pinMode(inputPin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  duration = pulseIn(inputPin, LOW);
    Serial.println(duration);
}
