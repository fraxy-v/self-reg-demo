#include "factory.h"
#include "type1.h"

bool factory::registerMethod(std::string_view name, FactoryMethod method) {
    container()[name] = std::move(method);
    return true;
}
