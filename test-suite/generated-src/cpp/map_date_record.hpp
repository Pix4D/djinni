// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#pragma once

#include "project_export.hpp"
#include <chrono>
#include <string>
#include <unordered_map>
#include <utility>

namespace testsuite {

struct PROJECT_EXPORT MapDateRecord final {
    std::unordered_map<std::string, std::chrono::system_clock::time_point> dates_by_id;

    MapDateRecord(std::unordered_map<std::string, std::chrono::system_clock::time_point> dates_by_id_)
    : dates_by_id(std::move(dates_by_id_))
    {}
};

}  // namespace testsuite
