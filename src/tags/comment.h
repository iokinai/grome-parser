#pragma once

#include <string>
#include "../etc/macros.hxx"

namespace grome {

    class comment {
    private:
        std::string text;

    public:
        std::string get_text() const noexcept;
    };

}