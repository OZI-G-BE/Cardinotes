#pragma once
#include "events.h"
#include <iostream>
#include "raylib.h"
#include "Vars.h"
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

  
  vector<float> itv;
  vector<string> card;


string Tcard;
float Titv;

void StartSong(float framecounter){
int j=0;
  ifstream Song("../Songs/song.cdn");
  while(Song >> Titv >> Tcard)
{

itv.push_back(Titv);
card.push_back(Tcard);
if(itv[j]==framecounter)
   {
  if(card[j]=="N"){
 N_note_trigger();
 j++;
 
 }

else if(card[j]=="S")
{S_note_trigger();
j++;

}

else if(card[j]=="E")
{ E_note_trigger();
j++;

}
else if(card[j]=="W")
{ W_note_trigger();
j++;
} 
   }
   else{j++;}
}
Song.close();


}
