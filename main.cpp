#include "raylib.h"
#include "raymath.h"

#define fps 60
#define Deltatime 1/fps
#define screenWidth  800
#define screenHeight  800




void spawnWnote(Vector2 pos, float radius, bool trigger)
{
    
    
  
  if(trigger==true)
  {
      DrawCircleV(pos,radius,RED);
      DrawText("trigger is true", 10, 10, 20, DARKGRAY);
      }
}
int main(void)
{
//------------variables------------------
float speed=100.0f;
Vector2 X_velocity={speed*Deltatime,0.0f};
Vector2 Y_velocity={0.0f,speed*Deltatime};
Vector2 midscreen = {screenWidth/2,screenHeight/2};

struct W_Note{
Vector2 pos ={50.0f,screenHeight/2};
float radius =50.0f;
bool W_trigger=false;

};
        struct W_Note Wnote;
        struct W_Note W_note[5];
bool W_collision =false;


//------------------------------

    // Initialization
    //--------------------------------------------------------------------------------------


    InitWindow(screenWidth, screenHeight, "raylib [core] example - keyboard input");

    SetTargetFPS(fps);   

    //--------------------------------------------------------------------------------------

    // Main game loop


    while (!WindowShouldClose())   
    {   
    Wnote.pos = Vector2Add(Wnote.pos,X_velocity);


    //West collision
if(CheckCollisionCircles(Wnote.pos,Wnote.radius,midscreen,60.0f)){W_collision=true;}
else{W_collision=false;}
    if(W_collision==true){Wnote.radius*=0;}
    //West collision


        //----------------------------------------------------------------------------------
        // Draw
        //----------------------------------------------------------------------------------



           if(IsKeyPressed(KEY_SPACE)|| Wnote.W_trigger==true)
    {
        Wnote.W_trigger=true;
          spawnWnote(Wnote.pos, Wnote.radius,Wnote.W_trigger);
  
   }
        BeginDrawing();

            ClearBackground(BLACK);

            
            DrawCircleV(midscreen,60.0f,BLUE);
         
        EndDrawing();
    }


    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();       
    //--------------------------------------------------------------------------------------


    return 0;
}