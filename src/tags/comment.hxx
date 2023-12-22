#pragma once

#include <string>

#include "tag.hxx"
#include "special/text.hxx"

namespace grome {

    class comment : public tag {
    private:
        std::string txt;

    public:
        comment(text* txt);

        inline const std::string& get_text() const noexcept;
    
        std::string& to_html() const override;
    };

}