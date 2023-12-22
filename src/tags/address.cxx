#include "address.hxx"
#include "macros.hxx"

namespace grome {
    address::address(tag *tag) : innerHTML(tag) {
    }

    inline const std::unique_ptr<tag>& address::get_innerHTML() const noexcept {
        return this->innerHTML;
    }

    std::string &address::to_html() const {
        NOT_IMPLEMENTED("");
    }
}