# Snake Game Code Walkthrough

The Snake game code consists of four main classes: Game, Snake, Controller, and Renderer. The image above shows how the code functions:
![Snake-game-diagram](snake_diagram.png)

1. To begin, main creates a Controller, a Game, and a Renderer object. Game stores a Snake object as part of the state.
2. main calls Game::Run to start the game loop.

The next videos walk through each of the files in the Snake game repository in more detail.

## main.cpp
This is the entrypoint for the program. The main function in this file sets variables such as the window height and width and the number of frames per second at which the game will be played. The main also creates Renderer, Controller, and Game objects, and calls the Game::Run method to start the game loop.

## snake.h and snake.cpp
These files define the Snake class which contains attributes to keep track of the Snake speed, size, and location. Additionally, there are methods to update the snake state, which are called from the Game::Update method. The Snake head and body are treated separately; the head is stored using float coordinates, and the body is stored using a vector of int cell coordinates. The Snake::UpdateHead method updates the head location using the snake's speed. If the head has passed into a new cell, then the body is updated with the Snake::UpdateBody.

## game.h and game.cpp
These files define the Game class and the game loop: Game::Run. The Game class stores the state of the game, including an instance of a Snake object, the game score, and the location of "food" in the game. Aside from the game loop, the Game class also contains methods to update the state of the game (Game::Update), get the size of the snake, get the total score in the game, and place new food in the game if the food has been eaten by the snake.

## render.h and render.cpp
These files define the Renderer class which uses the SDL library to render the game to the screen. The Renderer class constructor creates the SDL window and an SDL renderer object that can draw in the window. The Renderer::Render method draws the food and the snake in the window using the SDL renderer.

## controller.h and controller.cpp
These files define the Controller class. This class handles keyboard input using the SDL libary, and it sets the snake's direction based on the input.

## Resources
The SDL API, organized by category.