#include <stdio.h>
#include "ColorCodingVariableDefinitions.h"
#include "ColorCodingUtility.h"

void printColorCodingPair(void)
{
    int majorColorVar = 0;
    int minorColorVar = 0;
    int colourCode = 1;
  
    for(majorColorVar = 0; majorColorVar < MAJOR_AND_MINOR_COLORS ; majorColorVar++)
    {
        for(minorColorVar = 0; minorColorVar < MAJOR_AND_MINOR_COLORS ; minorColorVar++)
        {
             printf("\n Major Colour Name : %s  ", MajorColourNames[majorColorVar]);
             printf("\n Minor Colour Name : %s  ", MinorColourNames[minorColorVar]);
             printf("\n Colour Code : %d  \n", colourCode);
             colourCode++;
        }
    }
}
