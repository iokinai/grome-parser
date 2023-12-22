#include "global_attributes.hxx"

namespace grome {
    inline const std::string &global_attributes::get_accesskey(void) const noexcept {
        return this->accesskey;
    }

    void global_attributes::set_accesskey(const std::string &accesskey) {
        this->accesskey = accesskey;
    }

    inline const std::string &global_attributes::get_class_name(void) const noexcept {
        return this->class_name;
    }

    void global_attributes::set_class_name(const std::string &class_name) {
        this->class_name = class_name;
    }

    inline const std::string &global_attributes::get_contenteditable(void) const noexcept {
        return this->contenteditable;
    }

    void global_attributes::set_contenteditable(const std::string &contenteditable) {
        this->contenteditable = contenteditable;
    }

    inline dir global_attributes::get_direction(void) const noexcept {
        return this->direction;
    }

    void global_attributes::set_direction(dir direction) {
        this-> direction = direction;
    }

    inline bool global_attributes::get_draggable(void) const noexcept {
        return this->draggable;
    }

    void global_attributes::set_draggable(bool draggable) {
        this->draggable = draggable;
    }

    inline const std::string& global_attributes::get_enterkeyhint(void) const noexcept {
        return this->enterkeyhint;
    }

    void global_attributes::set_enterkeyhint(const std::string &enterkeyhint) {
        this->enterkeyhint = enterkeyhint;
    }

    inline bool global_attributes::get_hidden(void) const noexcept {
        return this->hidden;
    }

    void global_attributes::set_hidden(bool hidden) {
        this->hidden = hidden;
    }

    inline const std::string &global_attributes::get_id(void) const noexcept {
        return this->id;
    }

    void global_attributes::set_id(const std::string &id) {
        this->id = id;
    }

    inline bool global_attributes::get_inert(void) const noexcept {
        return this->inert;
    }

    void global_attributes::set_inert(bool inert) {
        this->inert = inert;
    }

    inline inputmode global_attributes::get_imode(void) const noexcept {
        return this->imode;
    }

    void global_attributes::set_imode(inputmode imode) {
        this->imode = imode;
    }

    inline const std::string &global_attributes::get_lang(void) const noexcept {
        return this->lang;
    }

    void global_attributes::set_lang(const std::string &lang) {
        this->lang = lang;
    }

    inline bool global_attributes::get_popover(void) const noexcept {
        return this->popover;
    }

    void global_attributes::set_popover(bool popover) {
        this->popover = popover;
    }

    inline bool global_attributes::get_spellcheck(void) const noexcept {
        return this->spellcheck;
    }

    void global_attributes::set_spellcheck(bool spellcheck) {
        this->spellcheck = spellcheck;
    }

    inline const std::string &global_attributes::get_style(void) const noexcept {
        return this->style;
    }

    void global_attributes::set_style(const std::string &style) {
        this->style = style;
    }

    inline int32_t global_attributes::get_tabindex(void) const noexcept {
        return this->tabindex;
    }

    void global_attributes::set_tabindex(int32_t tabindex) {
        this->tabindex = tabindex;
    }

    inline const std::string &global_attributes::get_title(void) const noexcept {
        return this->title;
    }

    void global_attributes::set_title(const std::string &title) {
        this->title = title;
    }

    inline bool global_attributes::get_translate(void) const noexcept {
        return this->translate;
    }

    void global_attributes::set_translate(bool translate) {
        this->translate = translate;
    }

} // grome
