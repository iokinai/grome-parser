#include "abbr.hxx"
#include "macros.hxx"

namespace grome {
    abbr::abbr(tag *tag) : innerHTML(tag) {
    }

    inline const std::unique_ptr<tag>& abbr::get_innerHTML() const noexcept {
        return this->innerHTML;
    }

    std::string& abbr::to_html() const {
        NOT_IMPLEMENTED("");
    }
}
