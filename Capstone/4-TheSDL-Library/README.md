# The SDL Library
![video](https://youtu.be/OPw05yeS66Q)

The SDL library is widely used for Game development as a tool to abstract the hardware so you don't need to worry about working with the hardware directly. SDL manages video, audio, input devices, and other components, and provides you with a simple library interface.

SDL is not a game engine, so doesn't have the full development environment that you might find in Unity or Unreal, but SDL can be used to develop fully-featured games for Android, iOS, Linux, macOS, and Windows. It been used to build thousands of games, including the popular Angry Birds and games from Valve and HumbleBundle.

If you are choosing to build the game for your Capstone project, then you can install and use the latest SDL v2.0, also referred to as SDL2.

## Installation
To install SDL 2.0 on your own machine, you can find instructions for each operating system here. Additionally, there are detailed instructions in the LazyFoo SDL tutorial page here.

Note that for Debian-based Linux users, we recommend using apt or apt-get to install:
```
sudo apt-get install libsdl2-dev
```

## Workspace
If you prefer not to install SDL on you own machine, we have provided a workspace at the end of this lesson with SDL installed. Additionally, The Snake game repository provides an example of how how to set up a CMakeLists.txt file to build an SDL project using CMake.

## Resources
* The SDL Library webpage can be found here.
* The LazyFoo SDL2 tutorial is an in-depth game programming tutorial using SDL2. There's a lot of content here, but the tutorial will walk you * through everything from creating a simple window with SDL2 to using particle engines and tiling the screen with textures.
https://lazyfoo.net/tutorials/SDL/

* The Parallel Realities tutorials are a collection of tutorials for creating 2D shooter games (like Asteroids) and 2D platformers (like the * original Super Mario Brothers) using SDL2. These are much shorter tutorials that are useful for getting your game up and running.
* The TwinklebearDev SDL2 tutorials include a few simple tutorials for getting SDL2 running and displaying images to the screen.