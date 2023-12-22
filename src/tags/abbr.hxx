#pragma once

#include <memory>
#include "tag.hxx"
#include "../global_attributes.hxx"

namespace grome {
    class abbr : public tag, public global_attributes {
    private:
        std::unique_ptr<tag> innerHTML;
    
    public:
        abbr(tag* tag);

        inline const std::unique_ptr<tag>& get_innerHTML() const noexcept;
        std::string& to_html() const override;
    };
} 
