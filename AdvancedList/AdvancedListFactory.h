#pragma once
#include "AdvancedList.h"
#include "AdvancedTestList.h"
namespace AdvancedListSpace {
    struct AdvancedListFactory {
        template <typename... Args>
        static AdvancedList* generateListLoop(Args... args) {
            AdvancedList myList{ generateList(args...) };
            myList = AdvancedListFactory::SetLoop(myList);
        }
        static AdvancedList* SetLoop(AdvancedList* list);
        template< typename... Args>
        static constexpr  AdvancedList* generateList(Args... args) {
            static_assert(((sizeof...(args)) % 2 == 0), "n/a");
            return helperListGenerator(args...);
        }
    private:
        template<typename... Args>
        static constexpr  AdvancedList* helperListGenerator(std::string name, Mark mark, Args... args) {
            AdvancedList* myList = new AdvancedList{ Record{name, mark}, helperListGenerator(args...) };
            return myList;
        }
        static constexpr  AdvancedList* helperListGeneration() {
            return nullptr;
        }
    };
}