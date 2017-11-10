#include <SDL2/SDL.h>
#include <sys/time.h>

struct buttons {
    
    int start;
    int select;

    int a;
    int b;
    
    int up;
    int down;
    int left;
    int right;

} buttons;

struct display {
    SDL_Window *screen;
    SDL_Renderer *renderer;
    unsigned int frames;
} display;

void sdlInit(void);
void sdlSetFrame(void);
int sdlUpdate(void);