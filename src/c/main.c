#include <pebble.h>
#include "botselect_window.h"
#include "tictactoe_splash_window.h"
#include "tictactoe_instruction_window.h"

void moveOn() {
    tictactoe_instruction_window_create();
}

  /*
  Loads the splash screen. After 1,5 Seconds loads the instruction window.
  Eventloop will loop till the application is closed.
  */
int main(){
    tictactoe_splash_window_create();
    app_timer_register(1500, moveOn, NULL);
    app_event_loop();
    tictactoe_splash_window_destroy();
}