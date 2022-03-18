#include "raylib.h"
#include "raymath.h"
#include "Vars.h"
#include "collisions.h"
#include "conditions.h"
#include "events.h"
#include "cdnReader.h"

int main(void)
{
// Initialization--------------------------
InitWindow(screenWidth, screenHeight, "raylib [core] example - keyboard input");
InitAudioDevice();
getdirSF();
getdir();
Music music =LoadMusicStream(dirs[0].c_str());
 //Music music =LoadMusicStream("../Songs/example/sewerperson - heatdeath.mp3");
PlayMusicStream(music);
SetTargetFPS(fps);   
// Main game loop--------------------------
float TimePlayed;
    while (!WindowShouldClose())   
    {   UpdateMusicStream(music);

StartSong(TimePlayed);
      DrawText(std::to_string(TimePlayed).c_str(), 50, 50, 20, DARKGRAY);

    TimePlayed=GetMusicTimePlayed(music);
framecounter++;


ConditionCheck();
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
 CheckCollisions();
        
BeginDrawing();

ClearBackground(BLACK);

DrawCircleV(midscreen,60.0f,BLUE);
            
         
EndDrawing();
}
UnloadMusicStream(music);
CloseAudioDevice();    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();       
    //--------------------------------------------------------------------------------------


    return 0;}