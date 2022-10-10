#pragma once
#include "List.h"
#include "TestList.h"
namespace ListSpace {
	struct ListFactory {
		template <typename... Args>
		static List* generateListLoop(Args... args) {
			List myList{ generateList(args...) };
			myList = ListFactory::SetLoop(myList);
		}
		static List* SetLoop(List* list);
		template< typename... Args>
		static constexpr  List* generateList(Args... args) {
			static_assert(((sizeof...(args)) % 2 == 0), "n/a");
			return helperListGenerator(args...);
		}
	private:
		template<typename... Args>
		static constexpr  List* helperListGenerator(std::string name, Mark mark, Args... args) {
			List* myList = new List{ Record{name, mark}, helperListGenerator(args...) };
			return myList;
		}
		static constexpr  List* helperListGeneration() {
			return nullptr;
		}
	};
}
