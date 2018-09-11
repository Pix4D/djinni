// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "NativeEmptyRecord.hpp"  // my header

namespace djinni_generated {

NativeEmptyRecord::NativeEmptyRecord() = default;

NativeEmptyRecord::~NativeEmptyRecord() = default;

auto NativeEmptyRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    (void)c; // Suppress warnings in release builds for empty records
    const auto& data = ::djinni::JniClass<NativeEmptyRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor)};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeEmptyRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 1);
    assert(j != nullptr);
    (void)j; // Suppress warnings in release builds for empty records
    return {};
}

}  // namespace djinni_generated
