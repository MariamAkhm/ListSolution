#include <iostream>
#include "AdvancedListFactory.h"
#include "AdvancedList.h"
#include "AdvancedTestList.h"

namespace AdvancedListSpace {
    template <typename... Args>
    AdvancedList* SetLoop(AdvancedList* list) {
        AdvancedList* head = list;
        while (head != nullptr) {
            head = head->next;
        }
        head->next = list;
        return list;
    }
    template< typename... Args>
    constexpr AdvancedList* generateList(Args... args) {
        static_assert(((sizeof...(args)) % 2 == 0), "n/a");
        return helperListGenerator(args...);
    }
    constexpr AdvancedList* helperListGeneration() {
        return nullptr;
    }
}
