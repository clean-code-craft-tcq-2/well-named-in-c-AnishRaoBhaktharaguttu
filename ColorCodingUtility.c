#include <stdio.h>
#include "ColorCodingVariableDefinitions.h"
#include "ColorCodingUtility.h"

void printColorCodingPair(void)
{
    unsigned int majorColorVar = 0;
    unsigned int minorColorVar = 0;
    int colourCode = 1;
    printf("------- COLOR CODE REFERENCE MANUAL -------\n\n"); 
    for(majorColorVar = 0; majorColorVar < MAJOR_AND_MINOR_COLORS ; majorColorVar++)
    {
        printf("\n------- ********************************************************* -------");
        for(minorColorVar = 0; minorColorVar < MAJOR_AND_MINOR_COLORS ; minorColorVar++)
        {
             printf("\n Major Colour Name : %s  ", majorColorNames[majorColorVar]);
             printf("\n Minor Colour Name : %s  ", minorColorNames[minorColorVar]);
             printf("\n Colour Code : %d  \n", colourCode);
             colourCode++;
        }
    }
}
