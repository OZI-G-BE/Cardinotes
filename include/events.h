#pragma once
#include <iostream>
#include "raylib.h"
#include "Vars.h"

void W_note_trigger(){
 (W_note[Current_W_note].W_trigger++);
 Current_W_note++;
}

void E_note_trigger(){
 (E_note[Current_E_note].E_trigger++);
 Current_E_note++;
}

void N_note_trigger(){ 
N_note[Current_N_note].N_trigger++;
Current_N_note++;
}

void S_note_trigger(){
 (S_note[Current_S_note].S_trigger++);
 Current_S_note++;
}