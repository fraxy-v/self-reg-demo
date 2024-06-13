#pragma once
#include <map>
#include <functional>
#include <memory>
#include <string_view>


struct Base {
    virtual ~Base() = default;
};


struct factory {
    using FactoryMethod = std::function<std::unique_ptr<Base>()>;
    using Container = std::map<std::string_view, FactoryMethod>;
    static Container& container() {
        static Container c;
        return c;
    }

    static bool registerMethod(std::string_view name, FactoryMethod method);
};