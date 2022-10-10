#include <iostream>
#include "AdvancedTestList.h"
#include "AdvancedListFactory.h"
#include "AdvancedList.h"

namespace AdvancedListSpace {
    namespace AdvancedTestList {
        void test1() {
            AdvancedListSpace::AdvancedList<Record>* l{ AdvancedListFactory::generateList("Almaz", 95) };
            std::cout << "My name is: " << l->element.name << "; My mark is: " << static_cast<int>(l->element.mark) << std::endl;
        }
        void test2() {
           /* AdvancedListSpace::AdvancedList<Record>* l2{ AdvancedListFactory::generateList("Mariya", 100, "Adel", 200) };
            MyList* head = l2;
            while (head != nullptr) {
              std::cout << "My name is: " << head->element.name << "; My mark is: " << static_cast<int>(head->element.mark) << std::endl;
              head = head->next;
            }*/
        }
        void test3() {
            /*AdvancedListSpace::AdvancedList<Record>* l{ AdvancedListFactory::generateListLoop("Almaz", 95, "Masha", 100) };*/
        }
    };
}
