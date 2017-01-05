#ifndef ITEMS_H
#define ITEMS_H

#include <Arduino.h>
#include "globals.h"
#include "text.h"

void selectItemsEquipment()
{
  switch (gameState)
  {
    case STATE_GAME_ITEMS:
      break;
    default:
      player.hasStuff[(2*(gameState -12)) + 1] = 0;
      bitSet(player.hasStuff[(2*(gameState -12)) + 1], cursorY);
      break;
  }
}


void getItems()
{
  /*
  byte dynamicTextBoxSize = 0;
  switch (cursorY)
  {
    case 0:
      dynamicTextBoxSize++;
      dynamicTextbox[dynamicTextBoxSize] = 96;
      dynamicTextBoxSize++;
      dynamicTextbox[dynamicTextBoxSize] = NEWLINE;
    case 1:
      dynamicTextBoxSize++;
      dynamicTextbox[dynamicTextBoxSize] = 97;
      dynamicTextBoxSize++;
      dynamicTextbox[dynamicTextBoxSize] = NEWLINE;
    case 2:
      dynamicTextBoxSize++;
      dynamicTextbox[dynamicTextBoxSize] = 98;
      dynamicTextBoxSize++;
      dynamicTextbox[dynamicTextBoxSize] = SPACE;
      dynamicTextBoxSize++;
      dynamicTextbox[dynamicTextBoxSize] = 99;
      dynamicTextBoxSize++;
      dynamicTextbox[dynamicTextBoxSize] = NEWLINE;
  }
  dynamicTextbox[0] = dynamicTextBoxSize;
  */
}



#endif
