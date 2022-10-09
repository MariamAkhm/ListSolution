#pragma once
#include <string>
namespace ListSpace {
	using Mark = unsigned char;
	struct Record {
		std::string name;
		Mark mark;
	};
	template<typename T>
	struct List {
		T element;
		List<T>* next;
		List<T>(const T& element, List<T>* next = nullptr) : element{ element } {}, next{ next } {};
	};
	using MyList = List<Record>;
}

