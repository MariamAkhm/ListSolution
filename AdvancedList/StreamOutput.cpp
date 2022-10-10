#include "StreamOutput.h"
#include "AdvancedList.h"
#include "AdvancedTestList.h";
#include "AdvancedListFactory.h"
namespace AdvancedListSpace {
	std::ostream& operator << (std::ostream& o, Record& r) {
		o << r.name << "; " << r.mark << "\n";
	}
}

