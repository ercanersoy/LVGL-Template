// main.c - Main dource file of LVGL template
// Written by Ercan Ersoy.
// Used ChatGPT for writting some parts.

#include <SDL2/SDL.h>
#include <unistd.h>

#include "lvgl/lvgl.h"

#define HORIZONTAL_RESOLUTION 480
#define VERTICAL_RESOLUTION 320
#define BUFFER_SIZE HORIZONTAL_RESOLUTION * VERTICAL_RESOLUTION * 100

int main(void)
{
    static lv_display_t *display = NULL;
    static uint32_t buffer[BUFFER_SIZE];
    static lv_fs_drv_t display_driver;
    static lv_style_t style_default;

    extern lv_font_t robotomono_16_latin_extended;

    SDL_Event event;

    lv_init();

    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);

    display = lv_sdl_window_create(HORIZONTAL_RESOLUTION, VERTICAL_RESOLUTION);

    lv_display_set_buffers(display, buffer, NULL, BUFFER_SIZE, LV_DISPLAY_RENDER_MODE_FULL);

    lv_style_init(&style_default);
    lv_style_set_text_font(&style_default, &robotomono_16_latin_extended);

    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "Hello, World!");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_style(label, &style_default, LV_PART_MAIN);

    while(1)
    {
        lv_timer_handler();
        usleep(5000);

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
