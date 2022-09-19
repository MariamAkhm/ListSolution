#pragma once
#include "List.h"
namespace ListSpace {
	class ListFactory
	{
		static List* GenListOfOneElem(const std::string& name, unsigned char mark);
		static List* GenListOfTwoElem(const std::string& name1, unsigned char mark1, const std::string& name2, unsigned char mark2);
		static List* TwoElemLoop(const std::string& name1, unsigned char mark1, const std::string& name2, unsigned char mark2);
	};
}

