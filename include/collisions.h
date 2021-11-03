#pragma once
#include <iostream>
#include "raylib.h"
#include "Vars.h"

void CheckCollisions(){
for(int i=0;i<sizeof(W_note);i++)  
{
    //previous W_notes start---
      if(Current_W_note>i)
      {Previous_W_note=Current_W_note-1;
          if(CheckCollisionCircles(W_note[Previous_W_note-i].pos,W_note[Previous_W_note-i].radius,midscreen,60.0f)){W_collision=true;}
else{W_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);
}

    if(W_collision==true){       
         W_note[Previous_W_note-i].border=0;
        W_note[Previous_W_note-i].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
      }
}
//previous W_notes end---

//current W_notes start---
if(CheckCollisionCircles(W_note[Current_W_note].pos,W_note[Current_W_note].radius,midscreen,60.0f)){W_collision=true;}
else{W_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);
}

    if(W_collision==true){       
         W_note[Current_W_note].border=0;
        W_note[Current_W_note].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
//current W_notes end---



///////////////////EAST////////////////////////
for(int i=0;i<sizeof(E_note);i++)  
{
    //previous E_notes start---
      if(Current_E_note>i)
      {Previous_E_note=Current_E_note-1;
          if(CheckCollisionCircles(E_note[Previous_E_note-i].pos,E_note[Previous_E_note-i].radius,midscreen,60.0f)){E_collision=true;}
else{E_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);
}

    if(E_collision==true){       
         E_note[Previous_E_note-i].border=0;
        E_note[Previous_E_note-i].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
      }
}
//previous E_notes end---

//current E_notes start---
if(CheckCollisionCircles(E_note[Current_E_note].pos,E_note[Current_E_note].radius,midscreen,60.0f)){E_collision=true;}
else{E_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);
}

    if(E_collision==true){       
         E_note[Current_E_note].border=0;
        E_note[Current_E_note].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
//current E_notes end---


///////////////////NORTH////////////////////////
for(int i=0;i<sizeof(N_note);i++)  
{
    //previous N_notes start---
      if(Current_N_note>i)
      {Previous_N_note=Current_N_note-1;
          if(CheckCollisionCircles(N_note[Previous_N_note-i].pos,N_note[Previous_N_note-i].radius,midscreen,60.0f)){N_collision=true;}
else{N_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);
}

    if(N_collision==true){       
         N_note[Previous_N_note-i].border=0;
        N_note[Previous_N_note-i].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
      }
}
//previous N_notes end---

//current N_notes start---
if(CheckCollisionCircles(N_note[Current_N_note].pos,N_note[Current_N_note].radius,midscreen,60.0f)){N_collision=true;}
else{N_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);
}

    if(N_collision==true){       
         N_note[Current_N_note].border=0;
        N_note[Current_N_note].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
//current N_notes end---


///////////////////SOUTH////////////////////////
for(int i=0;i<sizeof(S_note);i++)  
{
    //previous S_notes start---
      if(Current_S_note>i)
      {Previous_S_note=Current_S_note-1;
          if(CheckCollisionCircles(S_note[Previous_S_note-i].pos,S_note[Previous_S_note-i].radius,midscreen,60.0f)){S_collision=true;}
else{S_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);
}

    if(S_collision==true){       
         S_note[Previous_S_note-i].border=0;
        S_note[Previous_S_note-i].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
      }
}
//previous S_notes end---

//current S_notes start---
if(CheckCollisionCircles(S_note[Current_S_note].pos,S_note[Current_S_note].radius,midscreen,60.0f)){S_collision=true;}
else{S_collision=false;
DrawText("collision is false", 10, 10, 20, DARKGRAY);
}

    if(S_collision==true){       
         S_note[Current_S_note].border=0;
        S_note[Current_S_note].radius=0;
DrawText("collision is true", 10, 10, 20, DARKGRAY);
          }
//current S_notes end---
}