#pragma once
#include <iostream>
#include "raylib.h"
#include "vector"

#define fps 60
#define Deltatime 1/fps
#define screenWidth  800
#define screenHeight  800

using namespace std;
using std::vector;

float speed=100.0f;
Vector2 X_velocity={speed*Deltatime,0.0f};
Vector2 Y_velocity={0.0f,speed*Deltatime};
Vector2 midscreen = {screenWidth/2,screenHeight/2};
float framecounter;

//////////////WEST START////////////////////
struct W_Note{
Vector2 pos ={-0.5f,screenHeight/2};
float radius =20.0f;
bool W_trigger=0;
float border =5.0f;
};
struct W_Note D_W_note;
vector<W_Note> W_note{D_W_note};

bool W_collision =false;
int Current_W_note=0;
int Previous_W_note=0;
//////////////WEST END///////////////////////

//////////////EAST START////////////////////
struct E_Note{
Vector2 pos ={screenWidth+0.5f,screenHeight/2};
float radius =20.0f;
bool E_trigger=0;
float border =5.0f;
};
struct E_Note D_E_note;
vector<E_Note> E_note{D_E_note};
bool E_collision =false;
int Current_E_note=0;
int Previous_E_note=0;
//////////////EAST END////////////////////

//////////////NORTH START////////////////////
struct N_Note{
Vector2 pos ={screenWidth/2,-0.5f};
float radius =20.0f;
bool N_trigger=0;
float border =5.0f;
};
struct N_Note D_N_note;
vector<N_Note> N_note{D_N_note};
bool N_collision =false;
int Current_N_note=0;
int Previous_N_note=0;
//////////////NORTH END////////////////////

//////////////SOUTH START////////////////////
struct S_Note{
Vector2 pos ={screenWidth/2,screenHeight+0.5f};
float radius =20.0f;
bool S_trigger=0;
float border =5.0f;
};
struct S_Note D_S_note;
vector<S_Note> S_note{D_S_note};
bool S_collision =false;
int Current_S_note=0;
int Previous_S_note=0;
//////////////SOUTH START////////////////////



