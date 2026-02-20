#include "entrypoint.h"
#include "raylib.h"

const int screenWidth = 500;
const int screenHeight = 500;

void raylib_start(void){
    InitWindow(screenHeight,screenWidth,"Lab1");

    SetTargetFPS(60); 
    while(!WindowShouldClose())
    {
        float dt = GetFrameTime();
        //Start Drawing
        BeginDrawing();
        //Clear background at each start.
        ClearBackground(DARKBLUE);

        //HOUSE
        //--------------------------------------------------------------------------------------------------------------
        //House body 
        int houseX = 300;
        int houseY = 100;
        int houseW = 200;
        int houseH = 150;
        DrawRectangle(houseX, houseY, houseW, houseH, LIGHTGRAY);

        //Rooftop
        Vector2 left = {houseX, houseY};
        Vector2 right = {houseX + houseW, houseY};
        Vector2 top = {houseX + houseW / 2, houseY - 100};
        DrawTriangle(left,right,top, BROWN);

        //Door
        int doorX = 300;
        int doorY = 100;
        int doorW = 80;
        int doorH = 150;
        DrawRectangle(doorX + doorW, doorY + doorH - 60, 40, 60, BROWN);

        //--------------------------------------------------------------------------------------------------------------

        //daStreet
        int streeX = 0;
        int streeY = 275;
        int streeW = 500;
        int streeH = 100;
        DrawRectangle(streeX, streeY, streeW, streeH, DARKGRAY);

        //Sun
        int sunX = 0;
        int sunY = 0;
        int sunH = 100;
        DrawCircle(sunX, sunY, sunH, YELLOW);

        
        //Close window
        if(IsKeyDown(KEY_ESCAPE))
        {
            break;
        }
        EndDrawing();
    }
    
    CloseWindow();

}
