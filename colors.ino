int redPin = 7;
int greenPin =6;
int bluePin = 5;

void setup() {
  // put your setup code here, to run once:

}
int red = 0; int green = 0; int blue = 0;
void loop() {
  // put your main code here, to run repeatedly:
  setColor(red,green, blue);
  if (red != 255 && green == 0 && blue == 0)
  {
    red = red += 1;
    delay(5);
  }
  else if (red == 255 && green != 255)
  {
    green = green += 1;
    delay(5);
  }
  else if (red != 0 && green == 255)
  {
    red = red -= 1;
    delay(5);
  }
  else if (red != 255 && green == 255 && blue != 255)
  {
    blue = blue += 1;
    delay(5);
  }
  else if (red == 0 && green != 0 && blue == 255)
  {
    green = green -= 1;
    delay(5);
  }
  else if (red != 255 && green == 0 && blue == 255)
  {
    red = red += 1;
    delay(5);
  }
  else if (red == 255 && green == 0 && blue != 0)
  {
    blue = blue -= 1;
    delay(5);
  }
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
