// Motor A Control Pins
int enA = 10;  // Enable pin (PWM)
int in1 = 9;   // Direction 1
int in2 = 8;   // Direction 2

void setup() {
  // Set motor control pins as outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  // Start Serial Monitor (optional)
  Serial.begin(9600);
  Serial.println("Enacar booting... 🧠⚙️");
}

void loop() {
  // Spin motor forward
  Serial.println("Motor A: FORWARD");
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200); // Speed (0-255)
  delay(100);

  // Stop motor
  Serial.println("Motor A: STOP");
  analogWrite(enA, 0);
  delay(100);

  // Spin motor reverse
  Serial.println("Motor A: REVERSE");
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 200);
  delay(100);

  // Stop motor again
  Serial.println("Motor A: STOP");
  analogWrite(enA, 0);
  delay(100);
}
