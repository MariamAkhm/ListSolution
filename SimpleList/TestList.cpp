#include <iostream>
#include "TestList.h"
#include "ListFactory.h"
#include "List.h"

namespace ListSpace {
	namespace TestList {
		namespace ListFactory {
			void test1() {
				ListSpace::List* l{ ListFactory::generateList("Almaz", 95) };
				std::cout << "My name is: " << l->name << "; My mark is: " << static_cast<int>(l->mark) << std::endl;
			}
			void test2() {
				/*ListSpace::List* l2{ ListFactory::generateList("Mariya", 100, "Adel", 200) };
				List* head = l2;
				while (head != nullptr) {
					std::cout << "My name is: " << head->name << "; My mark is: " << static_cast<int>(head->mark) << std::endl;
					head = head->next;
				}*/
			}
			void test3() {
				/*ListSpace::List* l{ ListFactory::generateListLoop("Almaz", 95, "Masha", 100) };*/
			}
		};
	};
}	


