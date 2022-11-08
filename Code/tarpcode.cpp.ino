#include <SD.h>                      // need to include the SD library
#define SD_ChipSelectPin 53  //using digital pin 4 on arduino nano 328
#include <TMRpcm.h>           //  also need to include this library...
#include <SPI.h>

TMRpcm tmrpcm;   // create an object for use in this sketch
 int SW1; 
 int SW2;
 int SW3;
 int SW4;
 int SW5;
 int SW6;
 int SW7;
 int SW8;
 int SW9;
 int SW10;
 int SW11;
 int SW12;
 int SW13;
 int SW14;
 int SW15;
 int SW16;
 int SW17;
 int SW18;
 int SW19;
 int SW20;
 int SW21;
 int SW22;
 int SW23;
 int SW24;
 int SW25;
 int SW26;
 
void setup(){
pinMode(22,INPUT);  //Define A0 as digital input.
pinMode(23,INPUT);
 pinMode(24,INPUT);
 pinMode(25,INPUT);//Define A1 as digital input. 
  pinMode(26,INPUT);
  pinMode(27,INPUT);
  pinMode(28,INPUT);
  pinMode(29,INPUT);
  pinMode(30,INPUT);
  pinMode(31,INPUT);
  pinMode(32,INPUT);
  pinMode(33,INPUT);
  pinMode(34,INPUT);
  pinMode(35,INPUT);
  pinMode(36,INPUT);
  pinMode(37,INPUT);
  pinMode(38,INPUT);
  pinMode(39,INPUT);
  pinMode(40,INPUT);
  pinMode(41,INPUT);
  pinMode(42,INPUT);
  pinMode(43,INPUT);
  pinMode(44,INPUT);
  pinMode(45,INPUT);
  pinMode(46,INPUT);
  pinMode(47,INPUT);
  tmrpcm.speakerPin = 11; //11 on Mega, 9 on Uno, Nano, etc
 
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
  return;   // don't do anything more if not
  }
 tmrpcm.volume(1);
 
}
 
void loop(){


SW1=digitalRead(22);
SW2=digitalRead(23); 
SW3=digitalRead(24);
SW4=digitalRead(25);
SW5=digitalRead(26);
SW6=digitalRead(27);
SW7=digitalRead(28);
SW8=digitalRead(29);
SW9=digitalRead(30);
SW10=digitalRead(31);
SW11=digitalRead(32);
SW12=digitalRead(33);
SW13=digitalRead(34);
SW14=digitalRead(35);
SW15=digitalRead(36);
SW16=digitalRead(37);
SW17=digitalRead(38);
SW18=digitalRead(39);
SW19=digitalRead(40);
SW20=digitalRead(41);
SW21=digitalRead(42);
SW22=digitalRead(43);
SW23=digitalRead(44);
SW24=digitalRead(45);
SW25=digitalRead(46);
SW26=digitalRead(47);
// SW4=digitalRead(17);
//  if (SW1==HIGH or SW2==HIGH or SW3==HIGH){
     if (SW1 == HIGH) { 
      tmrpcm.play("a.wav");
      Serial.print("a");
    } 
else if(SW2 == HIGH){ 
    tmrpcm.play("b.wav");
    Serial.print("b");
   } 
else if(SW3 == HIGH){ 
    tmrpcm.play("c.wav");
    Serial.print("c");
   } 
   else if(SW4 == HIGH){ 
    tmrpcm.play("d.wav");
    Serial.print("d");
   } 
   else if(SW5 == HIGH){ 
    tmrpcm.play("e.wav");
    Serial.print("e");
   } 
   else if(SW6 == HIGH){ 
    tmrpcm.play("f.wav");
    Serial.print("f");
   } 
   else if(SW7 == HIGH){ 
    tmrpcm.play("g.wav");
    Serial.print("g");
   } 
   else if(SW8 == HIGH){ 
    tmrpcm.play("h.wav");
    Serial.print("h");
   } 
   else if(SW9 == HIGH){ 
    tmrpcm.play("i.wav");
    Serial.print("i");
   } 
   else if(SW10 == HIGH){ 
    tmrpcm.play("j.wav");
    Serial.print("j");
   } 
   else if(SW11 == HIGH){ 
    tmrpcm.play("k.wav");
    Serial.print("k");
   } 
   else if(SW12 == HIGH){ 
    tmrpcm.play("l.wav");
    Serial.print("l");
   } 
   else if(SW13 == HIGH){ 
    tmrpcm.play("m.wav");
    Serial.print("m");
   } 
   else if(SW14 == HIGH){ 
    tmrpcm.play("n.wav");
    Serial.print("n");
   } 
   else if(SW15 == HIGH){ 
    tmrpcm.play("o.wav");
    Serial.print("o");
   } 
   else if(SW16 == HIGH){
    tmrpcm.play("p.wav");
    Serial.print("p");
   } 
   else if(SW17 == HIGH){
    tmrpcm.play("q.wav");
    Serial.print("q");
   } 
   else if(SW18 == HIGH){
    tmrpcm.play("r.wav");
    Serial.print("r");
   } 
   else if(SW19 == HIGH){ 
    tmrpcm.play("s.wav");
    Serial.print("s");
   } 
   else if(SW20 == HIGH){ 
    tmrpcm.play("t.wav");
    Serial.print("t");
   } 
   else if(SW21 == HIGH){ 
    tmrpcm.play("u.wav");
    Serial.print("u");
   } 
   else if(SW22 == HIGH){ 
    tmrpcm.play("v.wav");
    Serial.print("v");
   } 
   else if(SW23 == HIGH){ 
    tmrpcm.play("w.wav");
    Serial.print("w");
   } 
   else if(SW24 == HIGH){ 
    tmrpcm.play("x.wav");
    Serial.print("x");
   } 
   else if(SW25 == HIGH){ 
    tmrpcm.play("y.wav");
    Serial.print("y");
   } 
   else if(SW26 == HIGH){ 
    tmrpcm.play("z.wav");
    Serial.print("z");
   } 
//   }


}
