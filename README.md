# gl4es4vita-sdl2-gear

gl4es4vita + SDL2 + Gear demo for PS Vita

## Features

- Full OpenGL 2.1 support for Vita

## Requirements

Install following packages to your vitasdk:

- [gl4es4vita](https://github.com/kaaass/gl4es4vita)
- [PVR_PSP2](https://github.com/GrapheneCt/PVR_PSP2)
- [SDL2](https://www.libsdl.org/download-2.0.php): Compile with `-DVIDEO_VITA_PVR=On`

## Build

```shell
mkdir build && cd build
cmake -DPLATFORM=vita ..
make
```

## Credits

- SonicMastr for porting gl4es
- GrapheneCt, Bythos, and Jaylon Gowie for developing PVR_PSP2
- Brian Paul for gear example
- [nxengine-evo](https://github.com/nxengine/nxengine-evo) for CMakeList example
