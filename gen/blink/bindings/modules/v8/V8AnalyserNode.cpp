// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#if ENABLE(WEB_AUDIO)
#include "V8AnalyserNode.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Float32Array.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8Uint8Array.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8AnalyserNode::wrapperTypeInfo = { gin::kEmbedderBlink, V8AnalyserNode::domTemplate, V8AnalyserNode::refObject, V8AnalyserNode::derefObject, V8AnalyserNode::trace, 0, 0, V8AnalyserNode::preparePrototypeObject, V8AnalyserNode::installConditionallyEnabledProperties, "AnalyserNode", &V8AudioNode::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AnalyserNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& AnalyserNode::s_wrapperTypeInfo = V8AnalyserNode::wrapperTypeInfo;

namespace AnalyserNodeV8Internal {

static void fftSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->fftSize());
}

static void fftSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AnalyserNodeV8Internal::fftSizeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void fftSizeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "fftSize", "AnalyserNode", holder, info.GetIsolate());
    AnalyserNode* impl = V8AnalyserNode::toImpl(holder);
    unsigned cppValue = toUInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setFftSize(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void fftSizeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    AnalyserNodeV8Internal::fftSizeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void frequencyBinCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->frequencyBinCount());
}

static void frequencyBinCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AnalyserNodeV8Internal::frequencyBinCountAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void minDecibelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toImpl(holder);
    v8SetReturnValue(info, impl->minDecibels());
}

static void minDecibelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AnalyserNodeV8Internal::minDecibelsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void minDecibelsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "minDecibels", "AnalyserNode", holder, info.GetIsolate());
    AnalyserNode* impl = V8AnalyserNode::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setMinDecibels(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void minDecibelsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    AnalyserNodeV8Internal::minDecibelsAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void maxDecibelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toImpl(holder);
    v8SetReturnValue(info, impl->maxDecibels());
}

static void maxDecibelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AnalyserNodeV8Internal::maxDecibelsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void maxDecibelsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "maxDecibels", "AnalyserNode", holder, info.GetIsolate());
    AnalyserNode* impl = V8AnalyserNode::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setMaxDecibels(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void maxDecibelsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    AnalyserNodeV8Internal::maxDecibelsAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void smoothingTimeConstantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toImpl(holder);
    v8SetReturnValue(info, impl->smoothingTimeConstant());
}

static void smoothingTimeConstantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AnalyserNodeV8Internal::smoothingTimeConstantAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void smoothingTimeConstantAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "smoothingTimeConstant", "AnalyserNode", holder, info.GetIsolate());
    AnalyserNode* impl = V8AnalyserNode::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setSmoothingTimeConstant(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void smoothingTimeConstantAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    AnalyserNodeV8Internal::smoothingTimeConstantAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getFloatFrequencyDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getFloatFrequencyData", "AnalyserNode", 1, info.Length()), info.GetIsolate());
        return;
    }
    AnalyserNode* impl = V8AnalyserNode::toImpl(info.Holder());
    DOMFloat32Array* array;
    {
        array = info[0]->IsFloat32Array() ? V8Float32Array::toImpl(v8::Local<v8::Float32Array>::Cast(info[0])) : 0;
    }
    impl->getFloatFrequencyData(array);
}

static void getFloatFrequencyDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    AnalyserNodeV8Internal::getFloatFrequencyDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getByteFrequencyDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getByteFrequencyData", "AnalyserNode", 1, info.Length()), info.GetIsolate());
        return;
    }
    AnalyserNode* impl = V8AnalyserNode::toImpl(info.Holder());
    DOMUint8Array* array;
    {
        array = info[0]->IsUint8Array() ? V8Uint8Array::toImpl(v8::Local<v8::Uint8Array>::Cast(info[0])) : 0;
    }
    impl->getByteFrequencyData(array);
}

static void getByteFrequencyDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    AnalyserNodeV8Internal::getByteFrequencyDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getFloatTimeDomainDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getFloatTimeDomainData", "AnalyserNode", 1, info.Length()), info.GetIsolate());
        return;
    }
    AnalyserNode* impl = V8AnalyserNode::toImpl(info.Holder());
    DOMFloat32Array* array;
    {
        array = info[0]->IsFloat32Array() ? V8Float32Array::toImpl(v8::Local<v8::Float32Array>::Cast(info[0])) : 0;
    }
    impl->getFloatTimeDomainData(array);
}

static void getFloatTimeDomainDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    AnalyserNodeV8Internal::getFloatTimeDomainDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getByteTimeDomainDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getByteTimeDomainData", "AnalyserNode", 1, info.Length()), info.GetIsolate());
        return;
    }
    AnalyserNode* impl = V8AnalyserNode::toImpl(info.Holder());
    DOMUint8Array* array;
    {
        array = info[0]->IsUint8Array() ? V8Uint8Array::toImpl(v8::Local<v8::Uint8Array>::Cast(info[0])) : 0;
    }
    impl->getByteTimeDomainData(array);
}

static void getByteTimeDomainDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    AnalyserNodeV8Internal::getByteTimeDomainDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace AnalyserNodeV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8AnalyserNodeAccessors[] = {
    {"fftSize", AnalyserNodeV8Internal::fftSizeAttributeGetterCallback, AnalyserNodeV8Internal::fftSizeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"frequencyBinCount", AnalyserNodeV8Internal::frequencyBinCountAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"minDecibels", AnalyserNodeV8Internal::minDecibelsAttributeGetterCallback, AnalyserNodeV8Internal::minDecibelsAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"maxDecibels", AnalyserNodeV8Internal::maxDecibelsAttributeGetterCallback, AnalyserNodeV8Internal::maxDecibelsAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"smoothingTimeConstant", AnalyserNodeV8Internal::smoothingTimeConstantAttributeGetterCallback, AnalyserNodeV8Internal::smoothingTimeConstantAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8AnalyserNodeMethods[] = {
    {"getFloatFrequencyData", AnalyserNodeV8Internal::getFloatFrequencyDataMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getByteFrequencyData", AnalyserNodeV8Internal::getByteFrequencyDataMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getFloatTimeDomainData", AnalyserNodeV8Internal::getFloatTimeDomainDataMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getByteTimeDomainData", AnalyserNodeV8Internal::getByteTimeDomainDataMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8AnalyserNodeTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "AnalyserNode", V8AudioNode::domTemplate(isolate), V8AnalyserNode::internalFieldCount,
        0, 0,
        V8AnalyserNodeAccessors, WTF_ARRAY_LENGTH(V8AnalyserNodeAccessors),
        V8AnalyserNodeMethods, WTF_ARRAY_LENGTH(V8AnalyserNodeMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8AnalyserNode::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AnalyserNodeTemplate);
}

bool V8AnalyserNode::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AnalyserNode::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AnalyserNode* V8AnalyserNode::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8AnalyserNode::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8AnalyserNode::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
#endif // ENABLE(WEB_AUDIO)