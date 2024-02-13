int trig = 8 ;
int echo = 9 ;
long t = 0 ;
int d = 0 ;
void setup()
{for (int i=2;i<=5;i++){pinMode(i,OUTPUT);}
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);}
void loop()
{digitalWrite(trig,LOW);
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
 long t = pulseIn(echo,HIGH);
 int d = 0.0343*t/2 ;
 for (int i=2;i<=5;i++){
  if (d>=(i-1)*300/4){digitalWrite(i,HIGH);}
  else {digitalWrite(i,LOW);}}}