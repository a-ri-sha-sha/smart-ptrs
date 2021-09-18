#pragma once

#include <utility>

template <class F, class... Args>
constexpr auto BindFront(F&& f, Args&&... args) {
    return f;  ///
}
