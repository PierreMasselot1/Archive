#pragma once

#include "../../inc/MarlinConfig.h"

class MPMMU{
public:
    MPMMU();
    //add init later
    //add reset later
    //add loop for error manadgment later

    static void tool_change(uint8_t index);



};
extern MPMMU mpmmu;
