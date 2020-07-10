int rldr=0;
int lldr=0;
const int lmb=10;
const int lmf=11;
const int rmb=12;
const int rmf=13;

void setup() {
pinMode(A0,INPUT);
pinMode(A2,INPUT);
pinMode(lmf,OUTPUT);
pinMode(lmb,OUTPUT);
pinMode(rmf,OUTPUT);
pinMode(rmb,OUTPUT);
Serial.begin(9600);
}

void loop() {
  rldr=analogRead(A0);
  lldr=analogRead(A2);
  if(((lldr<=1011||rldr<=1011)))
  {light();}
}
void light()
{
  if(lldr<=1011&&rldr<=1011)
  {
      digitalWrite(rmf,HIGH);
      digitalWrite(rmb,LOW);
      digitalWrite(lmf,HIGH);
      digitalWrite(lmb,LOW); 
      delay(10);
  }
  if(lldr<=1011&&rldr>1011)
  {
      digitalWrite(rmf,HIGH);
      digitalWrite(rmb,LOW);
      digitalWrite(lmf,LOW);
      digitalWrite(lmb,LOW); 
      delay(10); 
  }
  if(rldr<=1011&&lldr>1011)
  {
      digitalWrite(rmf,LOW);
      digitalWrite(rmb,LOW);
      digitalWrite(lmf,HIGH);
      digitalWrite(lmb,LOW); 
      delay(10); 
  }
  else
   {
      digitalWrite(rmf,LOW);
      digitalWrite(rmb,LOW);
      digitalWrite(lmf,LOW);
      digitalWrite(lmb,LOW); 
      delay(10);
  }
}
