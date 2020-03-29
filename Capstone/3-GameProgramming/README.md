# Game Programming
Game programming is a vast topic, and there are many approaches to writing and organizing game code. Additionally, there an enormous number of libraries, platforms, tools, and languages that you can use to build a professional-quality game. While this might seem overwhelming at first, this should not deter you from getting started with building your own game. The core tenets of game programming are nearly universal, and you will learn about the fundamental structure of game code in this concept. By the time you finish the next few concepts, you will be ready to write basic games in C++.

## The Game Loop: Input, Update, Render
![video](https://youtu.be/q4Y3UMkVImc)

## The Game Loop Overview
The game loop is a while loop that runs continuously in your code and has three steps:

![GameLoop](the-game-loop.jpg)

## The Game Loop: Input, Update, Render

* ***Input***: This step handles user input from a keyboard, * joystick, game controller, or other input device.
* ***Update***: This step uses the input to update the internal state of the game. The game state might include:

- positions of characters in the game world
- the speed, health, or inventory of characters in the game
- how many points have been scored in the game so far
- any other attributes or data in the game

Each part of the game state might be updated independently of the input as well. For example, if a character is moving forward in the game with a given velocity, the update step might change the character's position without any additional input.

* ***Render***: This step takes the game state and renders the state to the screen according to fixed rules. For example, a character might be rendered with a particular image or "sprite", or a texture might be applied to the background of the game window.

One major benefit of using this design pattern in a game is that each part of the game loop can be implemented separately in the code. If you want to change the appearance of your game without making major changes to how the game works, you can just update the Rendering code. Similarly, you are free to modify how the gameplay works without changing the rendering or input portion of the code at all.

## Game Loop Example: Snake Game

<img src="snake_game.gif"/>

The project code that we provide is an implementation of the classic "Snake" game, which is shown above. This implementation was inspired by code found in this StackOverflow post.

In this game, you control a snake using the keyboard, and the snake grows in speed and length each time it eats the food on the screen. Internally, the game state includes:

* the speed of the snake
* the current direction the snake is travelling
* the float position of the snake's head
* a vector of int coordinates representing the snake's body
* the position of the food
* other state data needed to make the game function

At each pass through the game loop, the steps
1. Input: the keyboard input is handled and used to set the future direction of the snake.
1. Update: The snake's position, length, and velocity are updated. If the snake has just eaten the food, a new food item is created.
3. Render: The game state is drawn to the screen. The entire game loop happens approximately 60 times per second, so the rendering and motion look fairly smooth, even though every update is a discrete change to the game state.

Note that the positions of the snake head and snake body are not stored in a 2D array in the current implementation, even though would also be a reasonable way to store some of the game state. However, the game is still rendered according to a 2D grid, and not using continuous coordinates. This happens even though the head coordinates are stored and updated with floats. By storing the head coordinates with floats, we can update the head position according to a fixed velocity. By rendering according to a grid, the vintage, grid-based aesthetic of the game can be maintained.

## Improving the Game Loop: Time Control
Now that you have an idea of the basic structure of the game loop, there's one additional step that you will see in the final project code: time control. If we let the while loop run as fast as the computer processor will allow, the game may be unplayable on a very fast machine, and it will play at different speeds depending on where it is run.

![video](https://youtu.be/nhYzyAdHkCA)

Which of the pseudocode examples down below represents a correctly implemented game loop with time control?
A)
```
Uint32 frame_end;
Uint23 frame_duration = 0;
float target_frame_duration = 1000/60; // milliseconds per frame at 60 frames per second.

while (true) {
    Input();
    Update();
    Render();
    frame_end = get_current_time_in_ms(); // Current time in milliseconds

    frame_duration += frame_end;

    if (frame_duration < target_frame_duration ) {
        Sleep(target_frame_duration - frame_ms);
        frame_ms = 0;
    }
}
```

B)
```
Uint32 frame_start;
Uint32 frame_end;
Uint32 frame_duration;
float target_frame_duration = 1000/60; // milliseconds per frame at 60 frames per second.

while (true) {
    frame_start = GetCurrentTimeMS(); // Current time in milliseconds
    Input();
    Update();
    Render();
    frame_end = get_current_time_in_ms();

    frame_duration = frame_end - frame_start;

    if (frame_duration < target_frame_duration ) {
        Sleep(target_frame_duration - frame_duration);
    }
}
```

C)
```
Uint32 frame_end = GetCurrentTimeMS();
float target_frame_duration = 1000/60; // milliseconds per frame at 60 frames per second.

while (true) {
    Input();
    Update();
    Render();
    after = get_current_time_in_ms() - frame_end;

    if (frame_end < target_frame_duration ) {
        Sleep(target_frame_duration - frame_end);
    }
}
```


sol:
A) For the code in choice A), the frame_duration continues to increase during the duration of the game, and can't be used to check the frame rate for a single iteration of the game loop.
B) Great work! If the time for this frame is too small (i.e. frame_duration is smaller than the target_frame_duration), we want delay the loop to achieve the correct frame rate.
C) For the code in choice C), after records the amount of time that has passed for the entire Input, Update, Render, and Sleep iteration. Because Sleep is included in the time recorded by frame_end, this code doesn't correctly time the game loop.

## Summary
Excellent work on completing this concept! You know have a solid understanding of one of the core concepts of game programming: the game loop. With the addition of a library to handle input and render output from your code, you are now fully prepared to write your own games in C++.

In the next concept, we will introduce the SDL2 library that you can use to handle input and render, so you will be ready to begin your Capstone project.

## Resources
The Game Programming Patterns Book is an excellent resource for understanding how games work. In particular, here is a section of the book which discusses the game loop.
Here is another useful article on the game loop. This one uses the SDL library, which is the same library used in the Snake game repository.
https://www.informit.com/articles/article.aspx?p=2928180&seqNum=4 