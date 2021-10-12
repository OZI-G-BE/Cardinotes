#include "raylib.h"
#include "raymath.h"

#define fps 60
#define Deltatime 1/fps
#define screenWidth  800
#define screenHeight  800




void spawnWnote(Vector2 pos, float radius, bool trigger)
{
     if(trigger==1)
  {
    DrawCircleV(pos,radius,RED);
    DrawText("trigger is true", 10, 35, 20, DARKGRAY);
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
int Previous_note=0;
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
   //condition checks-------------------------------------------------------------------------
    if(W_note[Current_note].W_trigger==1)
   { W_note[Current_note].pos = Vector2Add(W_note[Current_note].pos,X_velocity);

          spawnWnote(W_note[Current_note].pos, W_note[Current_note].radius,W_note[Current_note].W_trigger);      
   }
 for(int i=0;i<6;i++)  
{
      if(Current_note>i)
    {   Previous_note=Current_note-1;
     W_note[Previous_note-i].pos = Vector2Add(W_note[Previous_note-i].pos,X_velocity);
        W_note[Previous_note-i].W_trigger=true;
          spawnWnote(W_note[Previous_note-i].pos, W_note[Previous_note-i].radius,W_note[Previous_note-i].W_trigger);
    }
}  
//condition checks end-----------------------------------------------------------------------


if(IsKeyPressed(KEY_SPACE)){
    
    (W_note[Current_note].W_trigger++);
 Current_note++;
    }
//West collision-----------------------------------------------------------------------------------
 for(int i=0;i<6;i++)  
{
      if(Current_note>i)
      {Previous_note=Current_note-1;
          if(CheckCollisionCircles(W_note[Previous_note-i].pos,W_note[Previous_note-i].radius,midscreen,60.0f)){W_collision=true;}
else{W_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);}

    if(W_collision==true){       
        W_note[Previous_note-i].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
      }
}
if(CheckCollisionCircles(W_note[Current_note].pos,W_note[Current_note].radius,midscreen,60.0f)){W_collision=true;}
else{W_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);}

    if(W_collision==true){       
        W_note[Current_note].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
//West collision end-------------------------------------------------------------------------------------


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