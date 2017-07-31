const int a = 4;
const int b = 5;
const int c = 16;
const int d = 17;
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
Serial.begin(9600);
}

void loop() {
if (Serial.available() > 0) {
    int inByte = Serial.read();
    Serial.println(inByte);
    // do something different depending on the character received.
    // The switch statement expects single number values for each case;
    // in this exmaple, though, you're using single quotes to tell
    // the controllr to get the ASCII value for the character.  For
    // example 'a' = 97, 'b' = 98, and so forth:

  switch (inByte) {
      case 0:
        {digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);}
        break;
      case 1:
       { digitalWrite(a,1);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);}
        break;
      case 2:
        {digitalWrite(a,1);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);}
        break;
      case 3:
       { digitalWrite(a,1);digitalWrite(b,1);digitalWrite(c,0);digitalWrite(d,0);}
        break;
      case 4:
        {digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,1);digitalWrite(d,0);}
        break;
       case 5:
        {digitalWrite(a,1);digitalWrite(b,0);digitalWrite(c,1);digitalWrite(d,0);}
        break;
       case 6:
        {digitalWrite(a,0);digitalWrite(b,1);digitalWrite(c,1);digitalWrite(d,0);}
        break;
       case 7:
        {digitalWrite(a,1);digitalWrite(b,1);digitalWrite(c,1);digitalWrite(d,0);}
        break;
       case 8:
        {digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,1);}
        break;
        case 9:
        {digitalWrite(a,1);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,1);}
        break;
      default:
        {// turn all the LEDs off:
        digitalWrite(a,1);digitalWrite(b,1);digitalWrite(c,1);digitalWrite(d,1);
        }
    }
  }
}
