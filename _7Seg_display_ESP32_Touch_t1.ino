//Simple 7segment counter with ESP32 touch pin
int threshold = 30;
bool touch1detected = false;
bool touch2detected = false;

void gotTouch1(){
 touch1detected = true;
}

void gotTouch2(){
 touch2detected = true;
}

const int a = 4;
const int b = 5;
const int c = 16;
const int d = 17;
int count=0;

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
Serial.begin(115200);
delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Interrupt Test");
  touchAttachInterrupt(T2, gotTouch1, threshold);
  touchAttachInterrupt(T3, gotTouch2, threshold);
}


void loop()
{
    if(touch1detected){
    touch1detected = false;
    Serial.println("Touch 1 detected");
   }
    if(touch2detected){
    touch2detected = false;
    Serial.println("Touch 2 detected");
    if(count<10)
   {count++;
   delay(1000);
   switch (count) {
      case 0:
        {digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);}
        break;
      case 1:
       { digitalWrite(a,1);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);}
        break;
      case 2:
        {digitalWrite(a,0);digitalWrite(b,1);digitalWrite(c,0);digitalWrite(d,0);}
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
        digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);}
    }
   }
   else {count = 0;
   digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);
    }
  }
}

