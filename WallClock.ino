#include <FastLED.h>
#include <MicroWidgets.h>
#include <Painter_FastLED.hpp>

constexpr auto DATA_PIN = 19;

void setup()
{
	FastLedDisplayPainter<8, 8, DATA_PIN> painter;
	painter.print("6");
}

void loop()
{
}
