#include "doctype.hxx"

namespace grome {
    inline document_type doctype::get_doctype() const noexcept {
        return this->type;
    } 
    
    void doctype::set_doctype(document_type doctype) noexcept {
        this->type = doctype;
    }
}