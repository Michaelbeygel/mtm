#ifndef HW1_AsciiArtTool_H
#define HW1_AsciiArtTool_H

#include <stdio.h>
#include "RLEList.h"

RLEList asciiArtRead(FILE* in_stream);

RLEListResult asciiArtPrint(RLEList list, FILE* out_stream);

RLEListResult asciiArtPrintEncoded(RLEList list, FILE* out_stream);


#endif // HW1_AsciiArtTool_H