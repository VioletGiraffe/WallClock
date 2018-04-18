#include <FastLED.h>
#define DATA_PIN 19

constexpr auto NUM_LEDS = 64;
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

  for (auto i = 0; i < NUM_LEDS; ++i)
     leds[i] = CRGB::Black;
}

void loop() {
  for (int dot = 0; dot < NUM_LEDS; ++dot) { 
      leds[dot].setRGB(255, 200, 0);
      FastLED.show();
      // clear this led for the next time around the loop
      leds[dot] = CRGB::Black;
      delay(30);
  }
}
