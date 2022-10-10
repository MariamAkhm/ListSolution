#include <iostream>
#include "ListFactory.h"
#include "List.h"
#include "TestList.h"

namespace ListSpace {
	template <typename... Args>
	List* SetLoop(List* list) {
		List* head = list;
		while (head != nullptr) {
			head = head->next;			
		}
		head->next = list;
		return list;
	}
	template< typename... Args>
	constexpr List* generateList(Args... args) {
		static_assert(((sizeof...(args)) % 2 == 0), "n/a");
			return helperListGenerator(args...);
	}
	constexpr List* helperListGeneration() {
		return nullptr;
	}
}
