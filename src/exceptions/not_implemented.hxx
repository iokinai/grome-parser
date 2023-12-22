#include <exception>
#include <string>

namespace grome::exceptions {
    class not_implemented : std::exception {
    private: 
        std::string&& reason;

    public:
        not_implemented(const std::string&& reason);
        const char* what() const override;
    };
}