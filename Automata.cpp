#include "Automata.h"

Automata::Automata(){}
Automata::~Automata(){}

void Automata::setSigma(std::vector<char>& new_sigma){
	this-> sigma = new_sigma;
}
std::vector<char> Automata::setQ(){
	return this-> Q;
}
void Automata::setQ(std::vector<char>& new_Q){
	this->Q = new_Q
}
std::vector<char> Automata::getD(){
	return this-> D; 
}
void Automata::setI(std::vector<char>& new_I){
	this->I = new_I;
}
std::vector<char> Automata::getI(){
	return this-> I;
}
void Automata::setF(std::vector<char>& new_F){
	this->F = new_F;
}
std::vector<char> Automata::getF(){
	return this-> F;
}
void Automata::setDelta(std::vector<std::vector<std::vector<char>>>& new_delta){
	this-> delta = new_delta;
}
std::vector<std::vector<std::vector<char>>> Automata::getDelta(){
	return this-> delta;
}
