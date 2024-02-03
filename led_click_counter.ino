int red=5;
int yellow=6;
int green=7;
int button=9;

int count=0;

void setup()
{
  pinMode(red,1);
  pinMode(yellow,1);
  pinMode(green,1);
  pinMode(button,0);
}

void loop()
{
  int reading=digitalRead(button);
  if(reading==1){
    count++;
    if(count==1){
      digitalWrite(red,1);
    }
    else if(count==2){
      digitalWrite(yellow,1);
    }
    else if(count==3){
      digitalWrite(green,1);
    }
    else if(count==4){
      digitalWrite(red,0);
      digitalWrite(yellow,0);
      digitalWrite(green,0);
      count=0;
    }
  }
  delay(250);
}