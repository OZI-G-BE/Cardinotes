#include "raylib.h"
#include "raymath.h"
#include "include/Vars.h"
#include "include/collisions.h"
#include "include/conditions.h"
#include "include/events.h"
#include "include/cdnReader.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <future>

using namespace std;

int main(void)
{
// Initialization--------------------------
InitWindow(screenWidth, screenHeight, "raylib [core] example - keyboard input");
InitAudioDevice();
getdirSF();
loadSong();

//std::async(std::launch::async,loadSong);

 //Music music =LoadMusicStream("../Songs/example/sewerperson - heatdeath.mp3");
SetTargetFPS(fps);   
// Main game loop--------------------------

    while (!WindowShouldClose())   
    { 
          UpdateMusicStream(music);


startSong(GetMusicTimePlayed(music));

      DrawText(std::to_string(GetMusicTimePlayed(music)).c_str(), 50, 50, 20, DARKGRAY);
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