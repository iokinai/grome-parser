#include "not_implemented.h"

namespace grome::exceptions {

    not_implemented::not_implemented(const std::string &&reason) {
        this->reason = reason
    }

    const char *not_implemented::what() const {
        return this->reason.c_str();
    }
}
