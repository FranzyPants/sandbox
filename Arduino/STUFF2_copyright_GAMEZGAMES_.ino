const int RED_PIN = 11;
const int GREEN_PIN = 10;
const int BLUE_PIN = 9;

int keep=0;
int keepG=0;
int keepR=0;

void setup()
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}


void loop()
{
  blueFade(keep, keepG, keepR);
}

void blueFade(int& keep, int& keepG, int& keepR)
{
  int blueLevel2 = random(0, 255);
  int greenLevel2 = random(0, 25);
  int redLevel2 = random(0, 25);
  
while (keep!=blueLevel2 && keepG!=greenLevel2 && keepR!=redLevel2)
{
///////////////////////////////////BLUE/////////////////////////////////////  
  if (keep > blueLevel2)
  {
     analogWrite(BLUE_PIN, keep);
     delay(10);
     keep--;    
  }
   
  else if (keep < blueLevel2)
  {
    analogWrite(BLUE_PIN, keep);
    delay(10);
    keep++;  
  }

  else if (keep == blueLevel2)
  {
    analogWrite(BLUE_PIN, keep);
    delay(10);
  } 
  
  ///////////////////////////////////GREEN/////////////////////////////////////
  if (keepG > greenLevel2)
  {
     analogWrite(GREEN_PIN, keepG);
     delay(10);
     keepG--;    
  }
   
  else if (keepG < greenLevel2)
  {
    analogWrite(GREEN_PIN, keepG);
    delay(10);
    keepG++;  
  }

  else if (keepG == greenLevel2)
  {
    analogWrite(GREEN_PIN, keepG);
    delay(10);
  }
  
  ///////////////////////////////////RED/////////////////////////////////////
  
  if (keepR > redLevel2)
  {
     analogWrite(RED_PIN, keepR);
     delay(10);
     keepR--;    
  }
   
  else if (keepR < redLevel2)
  {
    analogWrite(RED_PIN, keepR);
    delay(10);
    keepR++;  
  }

  else if (keepR == redLevel2)
  {
    analogWrite(RED_PIN, keepR);
    delay(10);
  }
  
  
 delay(75);
}
}
