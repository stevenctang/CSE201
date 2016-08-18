#include  "EggCarton.h"

EggCarton::EggCarton(int brownEggs, int whiteEggs)
   {
	this-> brownEggs = brownEggs;
	this-> whiteEggs = whiteEggs;
   }

   bool EggCarton::addBrownEggs(int n)
   {
	if(this->brownEggs + this-> whiteEggs + n>12)
	{
		return false;
	}
	else
	{
		this->brownEggs +=n;
		return true;
	}
   }
   bool EggCarton::addWhiteEggs (int n)
   {
	if (this->brownEggs + this->whiteEggs + n> 12)
	{
		return false;
	}
	else
	{
		this->whiteEggs+=n;
		return true;
	}
   }
   int EggCarton::getTotalEggs()
   {
	return this->whiteEggs + this->brownEggs;
   }
