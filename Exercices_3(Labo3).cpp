#include "entrypoint.h"
#include "raylib.h"

const int screenWidth = 500;
const int screenHeight = 500;

const float speed = 100.0f;

int directionX = 1;
int directionY = 1;

struct customRect
{
    float x = 10.0f;
    float y = 45.0f;
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

        rect.x += directionX * speed * dt;
        rect.y += directionY * speed * dt;
        if (rect.x + 50 >= screenWidth || rect.x <= 0)
        {
            directionX *= -1; 
        }
        if (rect.y + 50 > screenHeight || rect.y <= 0) 
        {
            directionY *= -1; 
        }
        //Clear background at each start.
        ClearBackground(RAYWHITE);
        
        //Close window
        if(IsKeyDown(KEY_ESCAPE))
        {
            break;
        }

        DrawRectangle(rect.x,rect.y,50,50,RED);
        EndDrawing();
    }
    
    CloseWindow();

}
