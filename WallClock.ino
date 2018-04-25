#include <FastLED.h>
#include <MicroWidgets.h>
#include <Painter_FastLED.hpp>

constexpr auto DATA_PIN = 19;
FastLedDisplayPainter<8, 8, DATA_PIN> painter;

void setup()
{
	
	// for (int dot = 0; dot < NUM_LEDS; ++dot)
	// {
	// 	hue[dot] = 240 * dot / NUM_LEDS;
	// 	//leds[dot].setHSV(hue[dot], 255, 10);
	// 	hue[dot] = CRGB::Black;
	// 	FastLED.show();
	// 	delay(20);
	// }
}

void loop()
{
	// hue[0] += 1;
	// leds[0].setHSV(hue[0], 255, 255);
	// FastLED.show();
	// delay(20);
}
