#include <string>

namespace grome {
    class tag {
    public:
        virtual std::string& to_html() const = 0;
        virtual ~tag() {
        }
    };
};