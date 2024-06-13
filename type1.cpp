#include "type1.h"



const bool Type1::registered = factory::registerMethod("Type1", []() {
    return std::make_unique<Type1>();
});
