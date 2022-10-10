#include <iostream>
#include "AdvancedListFactory.h"
#include "AdvancedList.h"
#include "AdvancedTestList.h"

namespace AdvancedListSpace {
    
    /*template< typename... Args>
    constexpr AdvancedList<Record>* generateList(Args... args) {
        static_assert(((sizeof...(args)) % 2 == 0), "n/a");
        return helperListGenerator(args...);
    }
    constexpr AdvancedList<Record>* helperListGeneration() {
        return nullptr;
    }*/
}
