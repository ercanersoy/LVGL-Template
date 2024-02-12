// main.c - Main dource file of LVGL template
// Written by Ercan Ersoy.
// Used ChatGPT for writting some parts.

#include <SDL2/SDL.h>

#include "lvgl/lvgl.h"
#include "lvgl/demos/lv_demos.h"

#include "lv_drivers/sdl/sdl.h"

#define LV_CONF_INCLUDE_SIMPLE 1

int main(void)
{
    static lv_disp_draw_buf_t display_buffer;
    static lv_color_t buffer[SDL_HOR_RES * 100];
    static lv_disp_drv_t display_driver;
    static lv_style_t style_default;

    extern lv_font_t robotomono_16_latin_extended;

    SDL_Event event;

    lv_init();

    sdl_init();

    lv_disp_draw_buf_init(&display_buffer, buffer, NULL, SDL_HOR_RES * 100);
    lv_disp_drv_init(&display_driver);
    display_driver.draw_buf = &display_buffer;
    display_driver.flush_cb = sdl_display_flush;
    display_driver.hor_res = SDL_HOR_RES;
    display_driver.ver_res = SDL_VER_RES;
    lv_disp_drv_register(&display_driver);

    lv_style_init(&style_default);
    lv_style_set_text_font(&style_default, &robotomono_16_latin_extended);

    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "Hello, World!");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_style(label, &style_default, LV_PART_MAIN);

    while(1)
    {
        lv_timer_handler();
        SDL_Delay(5);

        if(SDL_PollEvent(&event))
        {
            if(event.type == SDL_WINDOWEVENT)
            {
                if(event.window.event == SDL_WINDOWEVENT_CLOSE)
                {
                    break;
                }
            }
        }
    }

    return 0;
}
