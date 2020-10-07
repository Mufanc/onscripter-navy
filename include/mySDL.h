#ifndef _MYSDL_H
#define _MYSDL_H

#ifdef __NAVY__
#include "sdl.h"  // actually provided by NDL
#include <stdio.h>
#include <assert.h>

#define SDL_INITFLAGS (0)
#define SDL_FULLSCREEN 0
#define SDL_VERSION_ATLEAST(a, b, c) (0)

char *SDL_GetError(void);
int SDL_Init(uint32_t flags);
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

typedef struct SDL_RWops{
  int (*seek)(struct SDL_RWops *, int, int);
  int (*read)(struct SDL_RWops *, void *, int, int);
  int (*close)(struct SDL_RWops *);
} SDL_RWops;

#define RW_SEEK_SET SEEK_SET
#define RW_SEEK_END SEEK_END

SDL_RWops *SDL_RWFromFile(const char *file, const char *mode);
SDL_RWops *SDL_RWFromConstMem(void *buf, int len);


int TTF_Init();

typedef int Mix_Music;
typedef int Mix_Chunk;

struct TTF_Font {};
TTF_Font* TTF_OpenFont(const char *file, int size);
TTF_Font *TTF_OpenFontRW(SDL_RWops *src, int freesrc, int ptsize);

#if 0
#define SDL_SwapLE32(x) (x)
#define SDL_SwapLE16(x) (x)
#define SDL_strncasecmp strncasecmp

typedef int SDL_AudioFormat;
typedef int SDL_AudioDeviceID;

#define SDL_MUSTLOCK(screen) 0

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors);
void SDL_Quit(void);
void SDL_PauseAudio(int pause_on);
void SDL_LockAudio(void);
void SDL_UnlockAudio(void);
int SDL_ShowCursor(int toggle);
void SDL_CloseAudio(void);
#endif

#else
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

#define SDL_INITFLAGS (SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO)

#endif

#endif
