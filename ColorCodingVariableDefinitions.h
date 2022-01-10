#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[5];
const char* MinorColorNames[5];

int numberOfMajorColors;
int numberOfMinorColors;

const int MAX_COLORPAIR_NAME_CHARS;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

//Method definitions

ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
int GetPairNumberFromColor(const ColorPair* colorPair);
