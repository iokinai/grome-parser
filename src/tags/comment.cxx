#include "comment.hxx"
#include "../etc/macros.hxx"

namespace grome {

    const inline std::string& comment::get_text() const noexcept {
        return this->txt;
    }

    std::string &comment::to_html() const {
        NOT_IMPLEMENTED("");
    }
}