long Time =0;
int  dist =0;
void setup() {
pinMode(7,1);//for Buzzer.
pinMode(8,1);//for trgg.
pinMode(9,0);//for echo.
pinMode(10,OUTPUT);//for LED
Serial.begin(9600);

}

void loop() {
 digitalWrite(8,LOW) ;
delayMicroseconds(2);

 digitalWrite(8,1); 
delayMicroseconds(10);

 digitalWrite(8,LOW) ;
Time = pulseIn(9,1);
dist = Time/59;
Serial.print(dist);
Serial.println("   cm");




if(dist>15)

{

digitalWrite(7,1);  
digitalWrite(10,1);
digitalWrite(12,LOW);


}
if(dist<15)

{

digitalWrite(7,1);  
digitalWrite(10,1);
digitalWrite(12,HIGH);


}
}
