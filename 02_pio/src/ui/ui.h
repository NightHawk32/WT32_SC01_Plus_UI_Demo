// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: Demo_Project

#ifndef _DEMO_PROJECT_UI_H
#define _DEMO_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_panelBrightness;
void ui_event_arcBrightness(lv_event_t * e);
extern lv_obj_t * ui_arcBrightness;
extern lv_obj_t * ui_lblArc;
extern lv_obj_t * ui_lblArcValue;
extern lv_obj_t * ui_topBar;
extern lv_obj_t * ui_lblClock;
extern lv_obj_t * ui_Label1;






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
