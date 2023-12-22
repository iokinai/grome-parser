#include "text.hxx"
#include "../../etc/macros.hxx"

namespace grome {
    text::text(const std::string &&text) : c_text(text) {
    }

    inline const std::string &text::get_text(void) const noexcept {
        return this->c_text;
    }

    void text::set_text(const std::string &&text) {
        this->c_text = text;
    }

    std::string &text::to_html() const {
        NOT_IMPLEMENTED("");
    }
}