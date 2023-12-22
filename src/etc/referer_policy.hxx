namespace grome {

    enum class referer_policy {
        no_referer,
        no_referer_when_downgrade,
        origin,
        origin_when_cross_origin,
        same_origin,
        strict_origin,
        strict_origin_when_cross_origin,
        unsafe_url,
    };

}