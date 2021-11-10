#pragma once
#include <iostream>
#include "raylib.h"
#include "Vars.h"

void StartSong(float cdnSong[]/*cdnsong arrays for remaining 3 points*/, float N_final)
{
        float N_checker=0.0f;
   while(N_checker!=N_final){
        if(N_checker/*belongs to cdnSong_W array*/)
        {
            //spwan a note at west cardinal point
        }
        // reapeat for remaining 3 points
        N_checker+=0.01f;
        }
   
}