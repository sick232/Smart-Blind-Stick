#define trigPin 9
#define echoPin 10

#define irPin 2        
#define buzzerIR 7    
#define buzzerUltra 4  
#define vibMotor 5    

long duration;
int distance;
int irState;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  pinMode(irPin, INPUT);
  pinMode(buzzerIR, OUTPUT);
  pinMode(buzzerUltra, OUTPUT);
  pinMode(vibMotor, OUTPUT);

  Serial.begin(9600);  
}

void loop() {
  
  irState = digitalRead(irPin);  
  Serial.print("IR State: ");
  Serial.println(irState);  
  
  if (irState == LOW) {  
    digitalWrite(buzzerIR, HIGH);   
    digitalWrite(vibMotor, HIGH);   
  } else {
    digitalWrite(buzzerIR, LOW);    
    digitalWrite(vibMotor, LOW);   
  }

  // Ultrasonic Sensor (Pothole detection)
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;  // Convert to cm
  
  
  Serial.print("Distance: ");
  Serial.println(distance); 

  if (distance > 19 && distance < 100) {  )
    digitalWrite(buzzerUltra, HIGH); 
    delay(190); 
    digitalWrite(buzzerUltra, LOW);  

    delay(190);                     
    digitalWrite(buzzerUltra, HIGH); 
    delay(190);                     
    digitalWrite(buzzerUltra, LOW);  
  } else {
    digitalWrite(buzzerUltra, LOW);  
  }

  delay(100);  
}
