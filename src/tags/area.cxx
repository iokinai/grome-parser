#include "area.hxx"

namespace grome {
    inline const std::string &area::get_alt(void) const noexcept {
        return this->alt;
    }

    void area::set_alt(const std::string &alt) {
        this->alt = alt;
    }

    inline const std::vector<double> &area::get_coords(void) const noexcept {
        return this->coords;
    }

    void area::set_coords(const std::vector<double> &coords) {
        this->coords = coords;
    }

    inline const std::string &area::get_download(void) const noexcept {
        return this->download;
    }

    void area::set_download(const std::string &download) {
        this->download = download;
    }

    inline const std::string &area::get_href(void) const noexcept {
        return this->href;
    }

    void area::set_href(const std::string &href) {
        this->href = href;
    }

    inline const std::string &area::get_hreflang(void) const noexcept {
        return this->hreflang;
    }

    void area::set_hreflang(const std::string &hreflang) {
        this->hreflang = hreflang;
    }

    inline const std::string &area::get_media(void) const noexcept {
        return this->media;
    }

    void area::set_media(const std::string &media) {
        this->media = media;
    }

    inline referer_policy area::get_rp(void) const noexcept {
        return this->rp;
    }

    void area::set_rp(referer_policy rp) {
        this->rp = rp;
    }

    inline rel area::get_rl(void) const noexcept {
        return this->rl;
    }

    void area::set_rl(rel rl) {
        this->rl = rl;
    }

    inline shape area::get_shp(void) const noexcept {
        return this->shp;
    }

    void area::set_shp(shape shp) {
        this->shp = shp;
    }

    inline target area::get_trgt(void) const noexcept {
        return this->trgt;
    }

    void area::set_trgt(target trgt) {
        this->trgt = trgt;
    }

    inline const std::string &area::get_media_type(void) const noexcept {
        return this->media_type;
    }

    void area::set_media_type(const std::string &media_type) {
        this->media_type = media_type;
    }

    std::string &area::to_html() const {
        NOT_IMPLEMENTED("");
    }
}