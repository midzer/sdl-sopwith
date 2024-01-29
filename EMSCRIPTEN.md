# Emscripten

## Compile

```
./autogen.sh
mv config.h src/
emcc -flto -O3 *.c -c -I ../ -sUSE_SDL=2 # run this in src/sdl/ and src/
```

## Link

```
emcc -flto -O3 *.o sdl/*.o -o index.html -sUSE_SDL=2 -sASYNCIFY -sASYNCIFY_ONLY=["main","swinit","Vid_Update","Vid_Init","Vid_SetMode","runmenu","getevents","SDL_Delay","GLES2_RenderPresent","Emscripten_GLES_SwapWindow","dynCall_v","dynCall_vi","dynCall_vii"] -sASYNCIFY_IMPORTS=["invoke_i","invoke_v","invoke_vi","invoke_vii"] -sASYNCIFY_IGNORE_INDIRECT -sENVIRONMENT=web --closure 1 -Wl,-u,ntohs
```
