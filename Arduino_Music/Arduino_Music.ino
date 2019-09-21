// Arduino Music Project!
int trig_pin = 2;
int echo_pin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(read_distance(trig_pin, echo_pin));
  delay(500);
}

int read_distance(int trigger, int echo) {
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  return pulseIn(echo, HIGH) * 0.034 / 2;
}

