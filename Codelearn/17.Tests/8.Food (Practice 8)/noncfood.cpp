#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Food (Practice 8)\noncfood.h"

// Class: NonCFood | Getters & Setters Definitions
void NonCFood::setWeight(double weight)
{
	this->weight = weight;
}

double NonCFood::getWeight() const
{
	return this->weight;
}

// Class: CannedFood | Class Function Definitions
void NonCFood::DisplayInfo()
{
	Food::DisplayInfo();
	std::cout << "Weight: " << this->weight << " lbs\n";
	std::cout << std::endl;
}

void NonCFood::SortByWeight(std::vector<NonCFood>& ncf)
{
	for (int i = 0; i < ncf.size() - 1; i++)
	{
		for (int j = i + 1; j < ncf.size(); j++)
		{
			if (ncf[i].weight > ncf[j].weight) std::swap(ncf[i], ncf[j]);
		}
	}
}

void NonCFood::SortByWeight(std::vector<Food*>& ncf)
{
	for (int i = 0; i < ncf.size() - 1; i++)
	{
		for (int j = i + 1; j < ncf.size(); j++)
		{
			/*
			* static_cast<>() is involved, otherwise the pointer wouldn't be able to access the derived class properties
			* i.e:
			* 'ncf[0]' is a 'Food' pointer
			* 'static_cast<NonCFood*>(ncf[0])' access 'ncf[0] as 'NonCFood' pointer
			*/
			if (static_cast<NonCFood*>(ncf[i])->weight > static_cast<NonCFood*>(ncf[j])->weight) std::swap(ncf[i], ncf[j]);
		}
	}
}