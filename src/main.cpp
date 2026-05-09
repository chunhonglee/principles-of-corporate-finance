#include <iostream>
#include "module/example.h"
#include <boost/version.hpp>
// #include "raylib.h"

int main(int argc, char** argv) {
    std::cout << "Hello, from main!\n";
    Example::printExample();

    std::cout << "Boost version: "
              << BOOST_VERSION / 100000 << "."
              << BOOST_VERSION / 100 % 1000 << "."
              << BOOST_VERSION % 100
              << std::endl;

    // InitWindow(800, 450, "raylib [core] example - basic window");

    // while (!WindowShouldClose())
    // {
    //     BeginDrawing();
    //         ClearBackground(RAYWHITE);
    //         DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
    //     EndDrawing();
    // }

    // CloseWindow();

    return 0;
}
