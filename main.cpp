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
int Current_note=0;
int previouse_note=0;
int framecounter;
struct W_Note{
Vector2 pos ={50.0f,screenHeight/2};
float radius =50.0f;
bool W_trigger=0;

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
    {   framecounter++;
    if(W_note[Current_note].W_trigger==1)
    W_note[Current_note].pos = Vector2Add(W_note[Current_note].pos,X_velocity);


if(IsKeyPressed(KEY_SPACE)){(W_note[Current_note].W_trigger++);}


//West collision-----------------------------------------------------------------------------------
if(CheckCollisionCircles(W_note[Current_note].pos,W_note[Current_note].radius,midscreen,60.0f)){W_collision=true;}
else{W_collision=false;
DrawText("trigger is false", 10, 10, 20, DARKGRAY);}
    if(W_collision==true){       

  
        W_note[Current_note].radius=0;}
//West collision end-------------------------------------------------------------------------------------


//condition checks-------------------------------------------------------------------------
           if(W_note[Current_note].W_trigger==1)
    {
          spawnWnote(W_note[Current_note].pos, W_note[Current_note].radius,W_note[Current_note].W_trigger);
          
          }
   
      if(Current_note>previouse_note)
    {
        W_note[previouse_note].W_trigger=true;
          spawnWnote(W_note[previouse_note].pos, W_note[previouse_note].radius,W_note[previouse_note].W_trigger);
   }
//condition checks end-----------------------------------------------------------------------


        //----------------------------------------------------------------------------------
        // Draw
        //----------------------------------------------------------------------------------


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