//
// SPDX-License-Identifier: LGPL-2.1-or-later
//
// Copyright © 2020 ANSSI. All Rights Reserved.
//
// Author(s): fabienfl (ANSSI)
//

#pragma once

#include <fmt/format.h>

namespace Orc {

template <typename T>
struct Limit;

}  // namespace Orc

template <typename T>
struct fmt::formatter<Orc::Limit<T>> : public fmt::formatter<std::string_view>
{
    template <typename FormatContext>
    auto format(const Orc::Limit<T>& quantity, FormatContext& ctx) -> decltype(ctx.out());
};

template <typename T>
struct fmt::formatter<Orc::Limit<T>, wchar_t> : public fmt::formatter<std::wstring_view, wchar_t>
{
    template <typename FormatContext>
    auto format(const Orc::Limit<T>& quantity, FormatContext& ctx) -> decltype(ctx.out());
};
