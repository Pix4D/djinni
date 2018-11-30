// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#include "project_export.hpp"
#include "record_with_duration_and_derivings.hpp"  // my header

namespace testsuite {


bool operator==(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs) {
    return lhs.dt == rhs.dt;
}

bool operator!=(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs) {
    return !(lhs == rhs);
}

bool operator<(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs) {
    if (lhs.dt < rhs.dt) {
        return true;
    }
    if (rhs.dt < lhs.dt) {
        return false;
    }
    return false;
}

bool operator>(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs) {
    return rhs < lhs;
}

bool operator<=(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs) {
    return !(rhs < lhs);
}

bool operator>=(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs) {
    return !(lhs < rhs);
}

}  // namespace testsuite
