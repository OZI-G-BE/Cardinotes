#pragma once
#include <iostream>
#include "raylib.h"
#include "Vars.h"
#include "vector"

void W_note_trigger(){
 (W_note[Current_W_note].W_trigger+=1);
 W_note.push_back(D_W_note);
 Current_W_note+=1;
}

void E_note_trigger(){
 (E_note[Current_E_note].E_trigger+=1);
 E_note.push_back(D_E_note);
 Current_E_note+=1;
}

void N_note_trigger(){ 
N_note[Current_N_note].N_trigger+=1;
N_note.push_back(D_N_note);
Current_N_note+=1;
}

void S_note_trigger(){
 (S_note[Current_S_note].S_trigger+=1);
 S_note.push_back(D_S_note);
 Current_S_note+=1;
}