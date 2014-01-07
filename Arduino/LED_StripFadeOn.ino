/*
Original code from SparkFun Electronics. Modified by Matt Stanwick.

INFO:

This Arduino Sketch will fade an RGB LED (or LED Strip) on and off.
It is currently configured to fade the RED portion of the LED on and
then stay on until the Arduino is powered off. This program can also
be configured to make the LEDs fade on and off in a breathing pattern.
I have noticed that my method for achieving this effect makes the LED
go off for a split second while the Arduino transitions from fading on
to fading off.
*/

const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;

void setup()
{
 pinMode(RED_PIN, OUTPUT);
 pinMode(GREEN_PIN, OUTPUT);
 pinMode(BLUE_PIN, OUTPUT);
 showSpectrum(); //comment this line out to make the LED strip fade on/off like a breathing effect
}

void loop()
{
// showSpectrum(); //uncomment this line to fade the LED on/off
 analogWrite(RED_PIN, 255); //comment out this line to fade the LED on/off
// delay(10000);
}

void showSpectrum()
{
 int x;

 for (x = 0; x < 255; x++)

 {
   showRGB(x);
   delay(10);
 }
}

void showRGB(int color)
{
 int redIntensity;
 int greenIntensity;
 int blueIntensity;

 if (color <= 255)
 {
   redIntensity = color - 255;    // to fade in AND out, change 255 to 512 and uncomment the else statement
   greenIntensity = 0;
   blueIntensity = 0;
 }

/*  else //uncomment this statement by deleting "/*" and "*/"
 {
   redIntensity = 255 - color;
   greenIntensity = 0;
   blueIntensity = 0;
 }*/

 analogWrite(RED_PIN, redIntensity);
 analogWrite(BLUE_PIN, blueIntensity);
 analogWrite(GREEN_PIN, greenIntensity);
}
