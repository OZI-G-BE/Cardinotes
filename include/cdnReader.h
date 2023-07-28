#pragma once
#include "events.h"
#include "fileHandler.h"
#include <iostream>
#include "raylib.h"
#include "Vars.h"
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <chrono>
#include <thread>
#include <future>

using namespace std;
vector<float> itv;
  vector<string> card;
string Tcard;
float Titv;
 Music  music;
  ifstream Song;
  ofstream SongE;
 

void startSong(float Timeplayed){

  
int j=0;


  Song.open(dirsSF[songSelected+1], ios::app);
  while(Song >> Titv >> Tcard)
{
itv.push_back(Titv);
card.push_back(Tcard);
if(itv[j]==Timeplayed)
   {
  if(card[j]=="N"){
 N_note_trigger(); 
 cout<<itv[j]<<endl;
  DrawText(std::to_string(itv[j]).c_str(), 50, 90, 50, DARKGRAY);
 j++;
 }

else if(card[j]=="S")
{S_note_trigger();
cout<<itv[j]<<endl;
 DrawText(std::to_string(itv[j]).c_str(), 50, 90, 50, DARKGRAY);
j++;
}

else if(card[j]=="E")
{ E_note_trigger();
cout<<itv[j]<<endl;
 DrawText(std::to_string(itv[j]).c_str(), 50, 90, 50, DARKGRAY);
j++;
}
else if(card[j]=="W")
{ W_note_trigger();
cout<<itv[j]<<endl;
 DrawText(std::to_string(itv[j]).c_str(), 50, 90, 50, DARKGRAY);
j++;
} 
   }
   else{
      
      j++;
   }
}
Song.close();

if(!Song.is_open())
{
itv.clear();
card.clear();
Song.close();
}

}

void loadSong()
{
  music = LoadMusicStream(dirsSF[songSelected].c_str());

PlayMusicStream(music);
}