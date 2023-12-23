#pragma once

#include <vector>

#include "../etc/macros.hxx"
#include "../etc/referer_policy.hxx"
#include "../etc/rel.hxx"
#include "../etc/shape.hxx"
#include "../etc/target.hxx"
#include "../global_attributes.hxx"
#include "tag.hxx"

namespace grome {
    class area : public tag, public global_attributes {
    private:
        std::string alt;
        std::vector<double> coords;
        std::string download;
        std::string href;
        std::string hreflang;
        std::string media;
        referer_policy rp;
        rel rl;
        shape shp;
        target trgt;
        std::string media_type;

    public:
        inline const std::string& get_alt(void) const noexcept;
        void set_alt(const std::string& alt);
        inline const std::vector<double>& get_coords(void) const noexcept;
        void set_coords(const std::vector<double>& coords);
        inline const std::string& get_download(void) const noexcept;
        void set_download(const std::string& download);
        inline const std::string& get_href(void) const noexcept;
        void set_href(const std::string& href);
        inline const std::string& get_hreflang(void) const noexcept;
        void set_hreflang(const std::string& hreflang);
        inline const std::string& get_media(void) const noexcept;
        void set_media(const std::string& media);
        inline referer_policy get_rp(void) const noexcept;
        void set_rp(referer_policy rp);
        inline rel get_rl(void) const noexcept;
        void set_rl(rel rl);
        inline shape get_shp(void) const noexcept;
        void set_shp(shape shp);
        inline target get_trgt(void) const noexcept;
        void set_trgt(target trgt);
        inline const std::string& get_media_type(void) const noexcept;
        void set_media_type(const std::string& media_type);

        std::string& to_html() const override;
    };
}