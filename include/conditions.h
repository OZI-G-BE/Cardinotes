#pragma once
#include <iostream>
#include "raylib.h"
#include "Vars.h"
#include "raymath.h"

void spawnWnote(Vector2 pos, float radius, bool trigger, float border)
{
     
     if(trigger==1)
  {
     DrawCircleV(pos,radius+border,WHITE);
    DrawCircleV(pos,radius,RED);
    DrawText("trigger is true", 10, 35, 20, DARKGRAY);
  }
}

void ConditionCheck(){
 //WEST---
 if(W_note[Current_W_note].W_trigger==1)
   { W_note[Current_W_note].pos = Vector2Add(W_note[Current_W_note].pos,X_velocity);

          spawnWnote(W_note[Current_W_note].pos, W_note[Current_W_note].radius,W_note[Current_W_note].W_trigger,W_note[Current_W_note].border);      
   }
 for(int i=0;i<sizeof(W_note);i++)  
{
      if(Current_W_note>i)
    {   Previous_W_note=Current_W_note-1;
     W_note[Previous_W_note-i].pos = Vector2Add(W_note[Previous_W_note-i].pos,X_velocity);
        W_note[Previous_W_note-i].W_trigger=true;
          spawnWnote(W_note[Previous_W_note-i].pos, W_note[Previous_W_note-i].radius,W_note[Previous_W_note-i].W_trigger,W_note[Previous_W_note-i].border);
    }
}  
//WEST END---
/////////////////////////////////
//EAST START---
if(E_note[Current_E_note].E_trigger==1)
   { E_note[Current_E_note].pos = Vector2Subtract(E_note[Current_E_note].pos,X_velocity);

          spawnWnote(E_note[Current_E_note].pos, E_note[Current_E_note].radius,E_note[Current_E_note].E_trigger,E_note[Current_E_note].border);      
   }
 for(int i=0;i<sizeof(E_note);i++)  
{
      if(Current_E_note>i)
    {   Previous_E_note=Current_E_note-1;
     E_note[Previous_E_note-i].pos = Vector2Subtract(E_note[Previous_E_note-i].pos,X_velocity);
        E_note[Previous_E_note-i].E_trigger=true;
          spawnWnote(E_note[Previous_E_note-i].pos, E_note[Previous_E_note-i].radius,E_note[Previous_E_note-i].E_trigger,E_note[Previous_E_note-i].border);
    }
}
//EAST END---
/////////////////////////////
//NORTH START---
if(N_note[Current_N_note].N_trigger==1)
   { N_note[Current_N_note].pos = Vector2Add(N_note[Current_N_note].pos,Y_velocity);

          spawnWnote(N_note[Current_N_note].pos, N_note[Current_N_note].radius,N_note[Current_N_note].N_trigger,N_note[Current_N_note].border);      
   }
 for(int i=0;i<sizeof(N_note);i++)  
{
      if(Current_N_note>i)
    {   Previous_N_note=Current_N_note-1;
     N_note[Previous_N_note-i].pos = Vector2Add(N_note[Previous_N_note-i].pos,Y_velocity);
        N_note[Previous_N_note-i].N_trigger=true;
          spawnWnote(N_note[Previous_N_note-i].pos, N_note[Previous_N_note-i].radius,N_note[Previous_N_note-i].N_trigger,N_note[Previous_N_note-i].border);
    }
}
//NORTH END---

/////////////////////////////
//SOUTH START---
if(S_note[Current_S_note].S_trigger==1)
   { S_note[Current_S_note].pos = Vector2Subtract(S_note[Current_S_note].pos,Y_velocity);

          spawnWnote(S_note[Current_S_note].pos, S_note[Current_S_note].radius,S_note[Current_S_note].S_trigger,S_note[Current_S_note].border);      
   }
 for(int i=0;i<sizeof(S_note);i++)  
{
      if(Current_S_note>i)
    {   Previous_S_note=Current_S_note-1;
     S_note[Previous_S_note-i].pos = Vector2Subtract(S_note[Previous_S_note-i].pos,Y_velocity);
        S_note[Previous_S_note-i].S_trigger=true;
          spawnWnote(S_note[Previous_S_note-i].pos, S_note[Previous_S_note-i].radius,S_note[Previous_S_note-i].S_trigger,S_note[Previous_S_note-i].border);
    }
}
//SOUTH END---
}
