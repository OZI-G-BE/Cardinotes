#pragma once
#include <iostream>
#include "raylib.h"
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <filesystem>

using namespace std; 
 vector<string> dirsSF;
 vector<string> dirs;
 string pathSF ="../Songs";
void getdirSF(){

    for(auto& p: std::filesystem::recursive_directory_iterator(pathSF))
      dirsSF.push_back(p.path().u8string());
}


void getdir(){for(auto& p: std::filesystem::recursive_directory_iterator(dirsSF[0]))
      dirs.push_back(p.path().u8string());}