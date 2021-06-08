//This works
const int trigPin = 11; 
const int echoPin = 12;
float duration, distance; 

int redPin = 7;
int greenPin = 6;
int bluePin = 5;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
int red = 0; int green = 0; int blue = 0;
int n;
int count;

void loop() {
   digitalWrite(trigPin, LOW); 
   delayMicroseconds(2); 
   digitalWrite(trigPin, HIGH); 
   delayMicroseconds(10); 
   digitalWrite(trigPin, LOW); 
   duration = pulseIn(echoPin, HIGH);
   distance = (duration*.0343)/2;
  
   setColor(n, 0, 0); 
   //n++;
   //if(n > 255) n = 0;
   if(distance < 255)
   {
    n = 255;
   }
   else
   {
    n = 0;
   }
   delay(100);
   Serial.print("Distance: "); 
   Serial.println(distance); 
   delay(100); 
   //Serial.print(n);
   //Serial.print(" ");
   count++;
  if (count % 10 == 0)Serial.println();
  
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
