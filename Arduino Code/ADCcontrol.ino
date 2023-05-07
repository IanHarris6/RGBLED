#define BLUE 3  // make sure whatever pins you use have pulse width modulation (PWM)
#define RED 6

void setup() {
  // put your setup code here, to run once:
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  //read ADC
  int sensorReading = analogRead(A0);
  
  // map the sensor range to a range of four options:  map(input, min, max, minrange, maxrange_
  int range = map(sensorReading, 0, 1023, 0, 8);

  switch(range){
    case 0:
    analogWrite(BLUE, 255);
    analogWrite(RED, 0);
    break;

    case 1:
    analogWrite(BLUE, 204);
    analogWrite(RED, 54);
    break;

    case 3:
    analogWrite(BLUE, 154);
    analogWrite(RED, 104);
    break;

    case 4:
    analogWrite(BLUE, 127);
    analogWrite(RED, 127);
    break;

    case 5:
    analogWrite(BLUE, 104);
    analogWrite(RED, 154);
    break;

    case 6:
    analogWrite(BLUE, 54);
    analogWrite(RED, 204);
    break;

    case 7:
    analogWrite(BLUE, 0);
    analogWrite(RED, 255);
    break;

    case 8:
    analogWrite(BLUE, 0);
    analogWrite(RED, 255);
    break;

    //default:
    //analogWrite(BLUE, 0);
    //analogWrite(RED, 254);
    //break;

    
  }

  //delay(10);
}
