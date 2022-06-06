#include "cannedfood.h"

// Class: CannedFood | Getters & Setters Definitions
void CannedFood::setNumberBox(int numberBox)
{
	this->numberBox = numberBox;
}

int CannedFood::getNumberBox() const
{
	return this->numberBox;
}

// Class: CannedFood | Class Function Definitions
void CannedFood::DisplayInfo()
{
	Food::DisplayInfo();
	std::cout << "Number box(s): " << this->numberBox << "\n";
	std::cout << std::endl;
}

void CannedFood::SortByNumberBox(std::vector<CannedFood>& cf)
{
	for (int i = 0; i < cf.size() - 1; i++)
	{
		for (int j = i + 1; j < cf.size(); j++)
		{
			if (cf[i].numberBox > cf[j].numberBox) std::swap(cf[i], cf[j]);
		}
	}
}

void CannedFood::SortByNumberBox(std::vector<Food*>& cf)
{
	for (int i = 0; i < cf.size() - 1; i++)
	{
		for (int j = i + 1; j < cf.size(); j++)
		{
			/*
			* static_cast<>() is involved, otherwise the pointer wouldn't be able to access the derived class properties
			* i.e: 
			* 'cf[0]' is a 'Food' pointer
			* 'static_cast<CannedFood*>(cf[0])' access 'cf[0] as 'CannedFood' pointer
			*/ 
			if (static_cast<CannedFood*>(cf[i])->numberBox > static_cast<CannedFood*>(cf[j])->numberBox) std::swap(cf[i], cf[j]);
		}
	}
}