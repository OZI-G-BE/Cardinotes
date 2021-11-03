#include "raylib.h"
#include "raymath.h"
#include "Vars.h"
#include "collisions.h"
#include "conditions.h"
#include "events.h"

int main(void)
{
// Initialization--------------------------
InitWindow(screenWidth, screenHeight, "raylib [core] example - keyboard input");

SetTargetFPS(fps);   
// Main game loop--------------------------
    while (!WindowShouldClose())   
    {   framecounter++;

//condition checks start-------------------------------
ConditionCheck();
//condition checks end-----------------------------------------------------------------------


//////////////INPUTS END////////////////////
if(IsKeyPressed(KEY_W)){  
      N_note_trigger(); 
}

if(IsKeyPressed(KEY_S)){  
       S_note_trigger();
}

if(IsKeyPressed(KEY_A)){  
       W_note_trigger();
}

if(IsKeyPressed(KEY_D)){  
      E_note_trigger(); 
}

//////////////INPUTS END////////////////////


//collision check start-----------------------------------------------------------------------------------
 CheckCollisions();
//collision check end-------------------------------------------------------------------------------------

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