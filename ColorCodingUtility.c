#include <stdio.h>
#include "ColorCodingVariableDefinitions.h"
#include "ColorCodingUtility.h"

void printColorCodingPair(void)
{
    int majorColorVar = 0;
    int minorColorVar = 0;
    int colourCode = 1;
  
    for(majorColorVar = 0; majorColorVar < totalColorsInMajorAndMinor; majorColorVar++)
    {
        for(minorColorVar = 0; minorColorVar < totalColorsInMajorAndMinor; minorColorVar++)
        {
             printf("\n Major Colour Name : %s  ", MajorColourNamesString[majorColorVar]);
             printf("\n Minor Colour Name : %s  ", MinorColourNamesString[minorColorVar]);
             printf("\n Colour Code : %d  \n", colourCode);
             colourCode++;
        }
    }
}
