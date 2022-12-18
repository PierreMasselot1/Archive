#include "../../inc/MarlinConfig.h"
#if ENABLED(MMU_CLONE)
#include"mpmmu.h"
#include "../../MarlinCore.h"
#include "..\..\gcode\gcode.h"
#include "../../module/planner.h"
#include "../../module/motion.h"
#include "../../module/stepper.h"
#include "../../gcode/parser.h"




void MPMMU::tool_change(uint8_t index){

  switch(index){
    case 0:
       SERIAL_ECHOPGM("change to filament #1" );
       planner.buffer_line(0,0,0,current_position.e+100,10,0);
       current_position.e=current_position.e+100;
       planner.buffer_line(0,0,0,current_position.e+10,10,1);
       current_position.e=current_position.e+10;
       
       break;
    case 1:
       SERIAL_ECHOPGM("change to filament #2" );
       planner.buffer_line(0,0,0,50,25,1);
       break;
    case 2:
      SERIAL_ECHOPGM("change to filament #3" );
      planner.buffer_segment(0,0,0,50,25,1);
      break;
    case 3:
      SERIAL_ECHOPGM("change to filament #4" );
      planner.buffer_segment(0,0,0,50,25,1);
      break;
    case 4:
       SERIAL_ECHOPGM("change to filament #5" );
       planner.buffer_segment(0,0,0,50,25,1);
       break;

  }
  
 
}

#endif
