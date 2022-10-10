#include <iostream>
#include "AdvancedTestList.h"
#include "AdvancedListFactory.h"
#include "AdvancedList.h"

namespace AdvancedListSpace {
    namespace AdvancedTestList {
        namespace AdvancedListFactory {
            void test1() {
                AdvancedListSpace::AdvancedList* l{ AdvancedListFactory::generateList("Almaz", 95) };
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
