// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      60

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second
int d = 3;

void setPixel_custom(int int1, int int2,int R,int G, int B, int delayT){
  for(int i=int1;i<int2;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(R,G,B)); // Moderately bright green color.
  }
  pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds).
}


void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pixels.begin(); // This initializes the NeoPixel library.
  
}

void loop() {

  
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.

  //T
  while(d > 0)
  {
  setPixel_custom(0,8,255,0,0,60);
  d=d-1;
  }

  d = 2;
  while(d >0)
  {
  setPixel_custom(0,60,255,0,0,60);
  d=d-1;
  }
  d=3;
  
  setPixel_custom(9,60,0,0,0,60);

  while(d > 0)
  {
    setPixel_custom(0,8,255,0,0,60);
  
    d = d-1;
  }

setPixel_custom(0,60,0,0,0,60);
  //E
  d =2;
  while(d>0)
  {
    setPixel_custom(0,60,0,255,0,60);
    d=d-1;
  }
  d=3;
  while(d>0)
  {
    for(int i=0;i<8;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,255,0)); // Moderately bright green color.
  }
      for(int i=9;i<25;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.
  }
      for(int i=26;i<34;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,255,0)); // Moderately bright green color.
  }
      for(int i=35;i<52;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.
  }
      for(int i=53;i<60;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,255,0)); // Moderately bright green color.
  }
    pixels.show();
    delay(delayval); // Delay for a period of time (in milliseconds).


    
    d=d-1;
}

setPixel_custom(0,60,0,0,0,60);
 //C
  d =2;
  while(d>0)
  {
    setPixel_custom(0,60,0,0,255,60);
    d=d-1;
  }
  d=3;
  while(d>0)
  {
    for(int i=0;i<8;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,255)); // Moderately bright green color.
  }
      for(int i=9;i<52;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.
  }
      for(int i=53;i<60;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,255)); // Moderately bright green color.
  }
    pixels.show();
    delay(delayval); // Delay for a period of time (in milliseconds).


    
    d=d-1;
}


setPixel_custom(0,60,0,0,0,60);
  //H
  d =2;
  while(d>0)
  {
    setPixel_custom(0,60,255,0,0,60);
    d=d-1;
  }
  d=3;
  while(d>0)
  {
    for(int i=0;i<25;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.
  }
   for(int i=26;i<34;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,0,0)); // Moderately bright green color.
  }
      for(int i=35;i<60;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.
  }
     
    pixels.show();
    delay(delayval); // Delay for a period of time (in milliseconds).


    
    d=d-1;
}
d =2;
  while(d>0)
  {
    setPixel_custom(0,60,255,0,0,60);
    d=d-1;
  }

setPixel_custom(0,60,0,0,0,60);


//T
d=3;
  while(d > 0)
  {
  setPixel_custom(0,8,0,255,0,60);
  d=d-1;
  }

  d = 2;
  while(d >0)
  {
  setPixel_custom(0,60,0,255,0,60);
  d=d-1;
  }
  
  d=3;
  
  setPixel_custom(8,60,0,0,0,60);

  while(d > 0)
  {
    setPixel_custom(0,8,0,255,0,60);
  
    d = d-1;
  }

setPixel_custom(0,60,0,0,0,60);

 //O
  d =2;
  while(d>0)
  {
    setPixel_custom(0,60,0,0,255,60);
    d=d-1;
  }
  d=3;
  while(d>0)
  {
    for(int i=0;i<8;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,255)); // Moderately bright green color.
  }
      for(int i=9;i<52;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.
  }
      for(int i=53;i<60;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,255)); // Moderately bright green color.
  }
    pixels.show();
    delay(delayval); // Delay for a period of time (in milliseconds).


    
    d=d-1;
}
d =2;
  while(d>0)
  {
    setPixel_custom(0,60,0,0,255,60);
    d=d-1;
  }
  
setPixel_custom(0,60,0,0,0,60);
  //P
  d =2;
  while(d>0)
  {
    setPixel_custom(0,60,255,0,0,60);
    d=d-1;
  }
  d=3;
  while(d>0)
  {
    for(int i=0;i<8;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,0,0)); // Moderately bright green color.
  }
      for(int i=9;i<25;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.
  }
      for(int i=26;i<34;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,0,0)); // Moderately bright green color.
  }
      for(int i=35;i<60;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.
  }  
    pixels.show();
    delay(delayval); // Delay for a period of time (in milliseconds).


    
    d=d-1;
   

}

   d =2;
  while(d>0)
  {
    setPixel_custom(0,34,255,0,0,60);
    d=d-1;
  }
setPixel_custom(0,60,0,0,0,5000);
}
