#include "horse.h"
#include <iostream>
#include <cstdlib>

Horse::Horse(){
	Horse::position = 0;
	Horse::trackLength = 15;
	Horse::id = 0;
} // End constructor

void Horse::init(int id, int trackLength){
	Horse::trackLength = trackLength;
	Horse::id = id;
} // End init

void Horse::advance(){
	//I was getting all the same random numbers, so I added id to make them different.
	srand(time(NULL) + Horse::id);
	int random = rand();
	int movement = random % 2;
	Horse::position = Horse::position + movement;
} // End advance

void Horse::printLane(){
	for(int i = 0; i < Horse::trackLength; i++){
		if(i != Horse::position){
			std::cout << ".";
		} else {
			std::cout << Horse::id;
		} // End if/else
	} // End for
	// Breaks the lines up.
	std::cout << std::endl;
} // End printLane

bool Horse::isWinner(){
	if(Horse::position >= Horse::trackLength){
		return false;
	} else {
		return true;
	} // End if/else
} // End isWinner
