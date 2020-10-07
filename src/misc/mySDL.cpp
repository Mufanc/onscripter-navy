#ifdef __NAVY__

#include <mySDL.h>

char *SDL_GetError(void) {
  return "(SDL_GetError is not implemented)";
}

int SDL_Init(uint32_t flags) {
  return 0;
}

int SDL_SetAlpha(SDL_Surface *surface, uint32_t flag, uint8_t alpha) {
  return 0;
}

SDL_RWops *SDL_RWFromFile(const char *file, const char *mode) {
  assert(0);
  return NULL;
}

SDL_RWops *SDL_RWFromConstMem(void *buf, int len) {
  assert(0);
  return NULL;
}

int TTF_Init() {
  return 0;
}

TTF_Font* TTF_OpenFont(const char *file, int size) {
  assert(0);
  return NULL;
}

TTF_Font *TTF_OpenFontRW(SDL_RWops *src, int freesrc, int ptsize) {
  assert(0);
  return NULL;
}

#endif
