const int a = 4;
const int b = 5;
const int c = 16;
const int d = 17;
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);

}

void loop() {

  for ( int i = 0; i < 2; i++ )
  {
    for ( int j = 0; j < 2; j++ )
    {
      for ( int k = 0; k < 2; k++ )
      {
        for ( int m = 0; m < 2; m++ )
        {
          digitalWrite(a, m);
          digitalWrite(b, k);
          digitalWrite(c, j);
          digitalWrite(d, i);
          delay(1000);
          if (i == 1 && m == 1) {
            return; // return after 9
          }
        }
      }
    }
  }
}
