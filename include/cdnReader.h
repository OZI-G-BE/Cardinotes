#pragma once
#include <iostream>
#include "raylib.h"
#include "Vars.h"
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

void StartSong(float N_final)
{
   ifstream fin("../Songs/song.cdn");

    string line;
        float N_checker=0.0f;
   while(N_checker!=N_final){
        if(N_checker)
        {
            //spwan a note at west cardinal point
        }
        // reapeat for remaining 3 points   
        N_checker+=0.01f;
        }
   
}