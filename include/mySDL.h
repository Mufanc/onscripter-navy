#ifndef _MYSDL_H
#define _MYSDL_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

#ifdef __NAVY__
#include <stdio.h>
#include <assert.h>

#define SDL_INITFLAGS (0)
#define DEFAULT_VIDEO_SURFACE_FLAG (SDL_HWSURFACE)

#define SDL_FULLSCREEN 0
#define SDL_VERSION_ATLEAST(a, b, c) (0)

static inline void SDL_WM_SetCaption(const char *title, const char *icon) {}
//uint8_t SDL_GetMouseState(int *x, int *y);
//void SDL_WarpMouse(uint16_t x, uint16_t y);
int SDL_SetAlpha(SDL_Surface *surface, uint32_t flag, uint8_t alpha);

struct SDL_mutex {};
static inline SDL_mutex* SDL_CreateMutex() { return NULL; }
static inline void SDL_DestroyMutex(SDL_mutex* mutex) { }
static inline int SDL_mutexP(SDL_mutex* mutex) { return 0; }
static inline int SDL_mutexV(SDL_mutex* mutex) { return 0; }

typedef uint32_t SDLKey;

#define SDL_ALPHA_OPAQUE 0

SDL_RWops *SDL_RWFromConstMem(void *buf, int len);


typedef int Mix_Music;
typedef int Mix_Chunk;

#else
#include <SDL_mixer.h>

#define SDL_INITFLAGS (SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO)
#define DEFAULT_VIDEO_SURFACE_FLAG (SDL_SWSURFACE)

#endif

#endif
