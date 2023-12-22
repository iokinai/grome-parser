#include <string>
#include <cstdint>
#include "../etc/dir.hxx"
#include "../etc/inputmode.hxx"

namespace grome {
    class global_attributes {
    protected:
        std::string accesskey;
        std::string class_name;
        std::string contenteditable;
        dir direction;
        bool draggable;
        std::string enterkeyhint;
        bool hidden;
        std::string id;
        bool inert;
        inputmode imode;
        std::string lang;
        bool popover;
        bool spellcheck;
        std::string style;
        int32_t tabindex;
        std::string title;
        bool translate;

    public:
        inline virtual const std::string& get_accesskey(void) const noexcept;
        virtual void set_accesskey(const std::string& accesskey);
        inline virtual const std::string& get_class_name(void) const noexcept;
        virtual void set_class_name(const std::string& class_name);
        inline virtual const std::string& get_contenteditable(void) const noexcept;
        virtual void set_contenteditable(const std::string& contenteditable);
        inline virtual dir get_direction(void) const noexcept;
        virtual void set_direction(dir direction);
        inline virtual bool get_draggable(void) const noexcept;
        virtual void set_draggable(bool draggable);
        inline virtual const std::string& get_enterkeyhint(void) const noexcept;
        virtual void set_enterkeyhint(const std::string& enterkeyhint);
        inline virtual bool get_hidden(void) const noexcept;
        virtual void set_hidden(bool hidden);
        inline virtual const std::string& get_id(void) const noexcept;
        virtual void set_id(const std::string& id);
        inline virtual bool get_inert(void) const noexcept;
        virtual void set_inert(bool inert);
        inline virtual inputmode get_imode(void) const noexcept;
        virtual void set_imode(inputmode imode);
        inline virtual const std::string& get_lang(void) const noexcept;
        virtual void set_lang(const std::string& lang);
        inline virtual bool get_popover(void) const noexcept;
        virtual void set_popover(bool popover);
        inline virtual bool get_spellcheck(void) const noexcept;
        virtual void set_spellcheck(bool spellcheck);
        inline virtual const std::string& get_style(void) const noexcept;
        virtual void set_style(const std::string& style);
        inline virtual int32_t get_tabindex(void) const noexcept;
        virtual void set_tabindex(int32_t tabindex);
        inline virtual const std::string& get_title(void) const noexcept;
        virtual void set_title(const std::string& title);
        inline virtual bool get_translate(void) const noexcept;
        virtual void set_translate(bool translate);
    };
}