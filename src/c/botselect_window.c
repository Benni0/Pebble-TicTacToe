#include <pebble.h>
#include "botselect_window.h"
#include "tictactoe_bots.h"
#include "tictactoe_window.h"

#define NUM_MENU_ITEMS 3
#define NUM_MENU_SECTIONS 1

Window *botselect_window;
static SimpleMenuLayer *s_simple_menu_layer;

static SimpleMenuItem menu_items[NUM_MENU_ITEMS];
static SimpleMenuSection menu_sections[NUM_MENU_SECTIONS];


void botselect_window_destroy();
  /*
  menu_select_callback is called when user push the SELECT button.
  This Methon sets the Bot, opens the game window and close this window.
  */
static void menu_select_callback(int index, void *ctx) {
    /*s_first_menu_items[index].subtitle = "You've hit select here!";*/
    switch (index) {
        case 0: 
            setbot(DRUNKEN_BOT);
            break;
        case 1:
            setbot(DEFENSE_BOT);
            break;
        case 2:
            setbot(INTELLIGENT_BOT);
            break;
    }
    game_window_create();
    botselect_window_destroy();    
}

  /*
  botselect_window_load loads and display the window content.
  This Window use the "simple menu layer"
  */
static void botselect_window_load(Window *window) {

    int num_a_items = 0;

    menu_items[num_a_items++] = (SimpleMenuItem) {
        .title = "DRUNKEN BOT",
        .subtitle = "all fortune",
        .callback = menu_select_callback,
    };
    menu_items[num_a_items++] = (SimpleMenuItem) {
        .title = "DEFENCE BOT",
        .subtitle = "adamantly defend",
        .callback = menu_select_callback,
    };
    menu_items[num_a_items++] = (SimpleMenuItem) {
        .title = "INTELLIGENT BOT",
        .subtitle = "still not invincible",
        .callback = menu_select_callback,
    };

    menu_sections[0] = (SimpleMenuSection) {
        .title = PBL_IF_RECT_ELSE("Coose a opponent", NULL),
        .num_items = NUM_MENU_ITEMS,
        .items = menu_items,
    };
    
    Layer *window_layer = window_get_root_layer(window);
    GRect bounds = layer_get_frame(window_layer);

    s_simple_menu_layer = simple_menu_layer_create(bounds, window, menu_sections, NUM_MENU_SECTIONS, NULL);

    layer_add_child(window_layer, simple_menu_layer_get_layer(s_simple_menu_layer));
}


  /*
  botselect_window_unload destroys the window content on unload
  */
void botselect_window_unload(Window *window) {
    simple_menu_layer_destroy(s_simple_menu_layer);
}

  /*
  botselect_window_create creates and displays the window itself
  */
void botselect_window_create() {
    botselect_window = window_create();
    window_set_window_handlers(botselect_window, (WindowHandlers) {
        .load = botselect_window_load,
        .unload = botselect_window_unload,
    });
    window_stack_push(botselect_window, true);
}

  /*
  botselect_window_destroy destroies the window itself.
  */
void botselect_window_destroy() {
    window_destroy(botselect_window);
}