#ifndef INVENTORY_H
#define INVENTORY_H

#include <Arduino.h>
#include "globals.h"

void showInventory()
{
  drawSentence(4, 100, 2, WHITE, ALIGN_LEFT);
}

#endif
