#include "factory.h"


struct Type2 : Base {
    inline static const bool registered = factory::registerMethod("Type2", []() {
        return std::make_unique<Type2>();
    });
};