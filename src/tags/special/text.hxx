#include "../tag.hxx"

namespace grome {
    class text : public tag {
    private:
        std::string c_text;

    public:
        text(const std::string&& text);

        inline const std::string& get_text(void) const noexcept;
        void set_text(const std::string&& text);

        std::string& to_html() const override;
    };
}