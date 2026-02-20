#include "entrypoint.h"
#include "raylib.h"

const int screenWidth = 500;
const int screenHeight = 500;

const float speed = 100.0f;

struct customRect
{
    float x = 0.0f;
    float y = 0.0f;
};


void raylib_start(void){
    InitWindow(screenHeight,screenWidth,"Lab2");

    SetTargetFPS(60); 
    customRect rect;
    while(!WindowShouldClose())
    {
        float dt = GetFrameTime();
        //Start Drawing
        BeginDrawing();

        //Clear background at each start.
        ClearBackground(RAYWHITE);
        
        //Close window
        if(IsKeyDown(KEY_ESCAPE))
        {
            break;
        }

        //Move right
        if(IsKeyDown(KEY_D))
        {
            rect.x += speed * dt;
        }
        //Move left
        if(IsKeyDown(KEY_A))
        {
            rect.x -= speed * dt;
        }
        //Move up
        if(IsKeyDown(KEY_W))
        {
            rect.y -= speed * dt;
        }
        //Move down
        if(IsKeyDown(KEY_S))
        {
            rect.y += speed * dt;
        }
        if (rect.x > screenWidth) rect.x = 0;
        if (rect.x < 0) rect.x = screenWidth;

        if (rect.y > screenHeight) rect.y = 0;
        if (rect.y < 0) rect.y = screenHeight;
        DrawRectangle(rect.x,rect.y,50,50,RED);
        EndDrawing();
    }
    
    CloseWindow();

}
