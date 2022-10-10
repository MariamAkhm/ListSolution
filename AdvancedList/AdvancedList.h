#pragma once
#include <string>
namespace AdvancedListSpace {
	using Mark = unsigned char;
	struct Record {
		std::string name;
		Mark mark;
	};
	template<typename T>
	struct AdvancedList {
		T element;
		AdvancedList<T>* next;
		AdvancedList<T>(const T& element, AdvancedList<T>* next = nullptr) : element{ element } {}, next{ next } {};
	};
	using MyList = AdvancedList<Record>;
}

