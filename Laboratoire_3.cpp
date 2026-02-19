#include "entrypoint.h"
#include "raylib.h"

const int screenWidth = 500;
const int screenHeight = 500;

int directionX = 1;
int directionY = 1;

const float speed = 100.0f;

struct customRect
{
    float x = 0.0f;
    float y = 0.0f;
};


void raylib_start(void){
    InitWindow(screenHeight,screenWidth,"Lab3");

    SetTargetFPS(60); 
    customRect rect;
    while(!WindowShouldClose())
    {
        float dt = GetFrameTime();
        //Start Drawing
        BeginDrawing();

        if (rect.x == 750)
        {
            directionX -= 1;
        }
        if (rect.y == 450)
        {
            directionY -= 1;
        }

        // if (rect.y += speed * directionY - 1)
        // if (rect.x -= speed * directionX - 1)
        // if (rect.y -= speed * directionY -1)

        //Clear background at each start.
        ClearBackground(RAYWHITE);

        DrawRectangle(rect.x,rect.y,50,50,RED);
        EndDrawing();
    }
    
    CloseWindow();

}