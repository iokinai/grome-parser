#include "a.hxx"
#include "macros.hxx"

namespace grome {
    
    std::string& a::to_html() const {
        NOT_IMPLEMENTED("");
    }

    a::a(tag *tag, const std::string &&href) : innerHTML(tag), href(href) {
    }

    inline const std::unique_ptr<tag> &a::get_innerHTML(void) const noexcept {
        return this->innerHTML;
    }

    void a::set_innerHTML(tag *innerHTML) {
        this->innerHTML.reset(innerHTML);
    }
    
    inline const std::string &a::get_href(void) const noexcept {
        return this->href;
    }
    
    void a::set_href(const std::string &&href) {
        this->href = href;
    }
    
    inline const std::string &a::get_hreflang(void) const noexcept {
        return this->hreflang;
    }
    
    void a::set_hreflang(const std::string &&hreflang) {
        this->hreflang = hreflang;
    }
    
    inline const std::vector<std::string> a::get_ping(void) const noexcept {
        return this->ping;
    }
    
    void a::set_ping(const std::vector<std::string> &&ping) {
        this->ping = ping;
    }
    
    inline referer_policy a::get_rp(void) const noexcept {
        return this->rp;
    }
    
    void a::set_rp(referer_policy rp) {
        this->rp = rp;
    }
    
    inline target a::get_target(void) const noexcept {
        return this->tg;
    }
    
    void a::set_tg(target tg) {
        this->tg = tg;
    }
    
    inline rel a::get_rl(void) const noexcept {
        return this->rl;
    }
    
    void a::set_rl(rel rl) {
        this->rl = rl;
    }

    inline const std::string& a::get_media_type(void) const noexcept {
        return this->media_type;
    }

    void a::set_media_type(const std::string &&type) {
        this->media_type = type;
    }
}