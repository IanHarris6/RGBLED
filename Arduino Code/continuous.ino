#define BLUE 3  // make sure whatever pins you use have pulse width modulation (PWM)
#define RED 6

void setup() {
  // put your setup code here, to run once:

  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);

}

// define variables
int redValue;
int greenValue;
int blueValue;


void loop() {
  // put your main code here, to run repeatedly:
  redValue = 0;
  blueValue = 255;
  for(int i = 0; i < 255; i += 1) // fades out blue bring red full when i=255
  {
    blueValue -= 1;
    redValue += 1;

    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(10);
  }

  redValue = 255;
  blueValue = 0;

  for(int i = 0; i < 255; i += 1) // fades out blue bring red full when i=255
  {
    blueValue += 1;
    redValue -= 1;

    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(10);
  }

}
