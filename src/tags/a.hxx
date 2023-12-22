#pragma once

#include <string>
#include <vector>
#include <memory>
#include "tag.hxx"
#include "referer_policy.hxx"
#include "../etc/target.hxx"
#include "../etc/rel.hxx"
#include "../global_attributes.hxx"

namespace grome {
    class a : public tag, public global_attributes {
    private:
        std::unique_ptr<tag> innerHTML;
        
        std::string href;
        std::string hreflang;
        std::vector<std::string> ping;
        referer_policy rp;
        std::string type;
        target tg;
        rel rl;
        std::string media_type;


    public:
        a(tag* tag, const std::string&& href = "");

        inline const std::unique_ptr<tag>& get_innerHTML(void) const noexcept;
        void set_innerHTML(tag* innerHTML);
        inline const std::string& get_href(void) const noexcept;
        void set_href(const std::string&& href);
        inline const std::string& get_hreflang(void) const noexcept;
        void set_hreflang(const std::string&& hreflang);
        inline const std::vector<std::string> get_ping(void) const noexcept;
        void set_ping(const std::vector<std::string>&& ping);
        inline referer_policy get_rp(void) const noexcept;
        void set_rp(referer_policy rp);
        inline target get_target(void) const noexcept;
        void set_tg(target tg);
        inline rel get_rl(void) const noexcept;
        void set_rl(rel rl);
        inline const std::string& get_media_type(void) const noexcept;
        void set_media_type(const std::string&& type);


        std::string& a::to_html() const override;

    };
}