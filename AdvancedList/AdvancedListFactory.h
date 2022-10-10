#pragma once
#include "AdvancedList.h"
#include "AdvancedTestList.h"
namespace AdvancedListSpace {
    struct AdvancedListFactory {
        template <typename... Args>
        static AdvancedList<Record>* generateListLoop(Args... args) {
            AdvancedList myList{ generateList(args...) };
            myList = AdvancedListFactory::SetLoop(myList);
        }

        AdvancedList<Record>* SetLoop(AdvancedList<Record>* list) {
            MyList* head = list;
            while (head != nullptr) {
                head = head->next;
            }
            head->next = list;
            return list;
        }


        template< typename... Args>
        static constexpr  AdvancedList<Record>* generateList(Args... args) {
            //static_assert(((sizeof...(args)) % 2 == 0), "n/a");
            return helperListGenerator(args...);
        }
    private:
        static constexpr  AdvancedList<Record>* helperListGenerator() {
            return nullptr;
        }
        template<typename... Args>
        static constexpr  MyList* helperListGenerator(std::string name, Mark mark, Args... args) {
            MyList* myList = new MyList{ Record{name, mark}, helperListGenerator(args...) };
            return myList;
        }
    };
}