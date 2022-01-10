#include <stdio.h>
#include <assert.h>
extern "C" {
#include "TestColorCoding.h"
}
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    testPrintColorCode();
    
    return 0;
}
