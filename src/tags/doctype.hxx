#pragma once


#include "tag.hxx"
#include "../etc/macros.hxx"
#include "../etc/document_type.hxx"

namespace grome
{
    class doctype : public tag {
    private:
        document_type type;
    public:
        inline document_type get_doctype() const noexcept;
        void set_doctype(document_type doctype) noexcept;

        std::string& to_html() const override {
            NOT_IMPLEMENTED("");
        }
    };
} // namespace grome
