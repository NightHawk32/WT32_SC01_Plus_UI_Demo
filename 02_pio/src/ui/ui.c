// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: Demo_Project

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_panelBrightness;
void ui_event_arcBrightness(lv_event_t * e);
lv_obj_t * ui_arcBrightness;
lv_obj_t * ui_lblArc;
lv_obj_t * ui_lblArcValue;
lv_obj_t * ui_topBar;
lv_obj_t * ui_lblClock;
lv_obj_t * ui_Label1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_arcBrightness(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_lblArcValue, target, "", "");
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_panelBrightness = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_panelBrightness, 232);
    lv_obj_set_height(ui_panelBrightness, 272);
    lv_obj_set_x(ui_panelBrightness, 5);
    lv_obj_set_y(ui_panelBrightness, -5);
    lv_obj_set_align(ui_panelBrightness, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_clear_flag(ui_panelBrightness, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_arcBrightness = lv_arc_create(ui_panelBrightness);
    lv_obj_set_width(ui_arcBrightness, 190);
    lv_obj_set_height(ui_arcBrightness, 190);
    lv_obj_set_align(ui_arcBrightness, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_arcBrightness, 5, 255);
    lv_arc_set_value(ui_arcBrightness, 200);

    ui_lblArc = lv_label_create(ui_panelBrightness);
    lv_obj_set_width(ui_lblArc, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblArc, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblArc, lv_pct(0));
    lv_obj_set_y(ui_lblArc, lv_pct(45));
    lv_obj_set_align(ui_lblArc, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblArc, "Brightness");
    lv_obj_set_style_text_font(ui_lblArc, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblArcValue = lv_label_create(ui_panelBrightness);
    lv_obj_set_width(ui_lblArcValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblArcValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblArcValue, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblArcValue, "100");
    lv_obj_set_style_text_font(ui_lblArcValue, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_topBar = lv_obj_create(ui_Screen1);
    lv_obj_set_height(ui_topBar, 40);
    lv_obj_set_width(ui_topBar, lv_pct(100));
    lv_obj_clear_flag(ui_topBar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_topBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_topBar, lv_color_hex(0x525252), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_topBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblClock = lv_label_create(ui_topBar);
    lv_obj_set_width(ui_lblClock, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblClock, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblClock, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_lblClock, "12:00");
    lv_obj_set_style_text_font(ui_lblClock, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, lv_pct(25));
    lv_obj_set_y(ui_Label1, lv_pct(5));
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "This is just \na small screen\nbrightness demo.");
    lv_obj_set_style_text_align(ui_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_arcBrightness, ui_event_arcBrightness, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
