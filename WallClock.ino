#include <FastLED.h>
#include <MicroWidgets.h>
#include <Painter_FastLED.hpp>

constexpr auto DATA_PIN = 19;

void setup()
{
	FastLedDisplayPainter<8*4, 8, DATA_PIN, true> painter;
	painter.setTextColor(Color{3, 1, 1});
	painter.print("6");
	//for (uint16_t x = )
	painter.setPixel(2, 9, Color{0, 2, 0});
}

void loop()
{
}
