#pragma once
#include <string>

void load_sounds();

void play_sound(const std::string& name, float gain=100.f, float pitch=1.f);
