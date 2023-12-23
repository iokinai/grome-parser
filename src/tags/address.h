#pragma once

#include <memory>

#include "tag.hxx"
#include "global_attributes.hxx"

namespace grome {
    class address : public tag {
    private: 
        std::unique_ptr<tag> innerHTML;

    public:
        address(tag* tag);

        inline const std::unique_ptr<tag>& get_innerHTML() const noexcept;
        std::string& to_html() const override;

        void set_innerHTML(tag* innerHTML) {
            this->innerHTML.reset(innerHTML);
        }
    };
}