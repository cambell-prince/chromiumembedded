// Copyright (c) 2010 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// -------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef _V8VALUE_CTOCPP_H
#define _V8VALUE_CTOCPP_H

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else // USING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefV8ValueCToCpp
    : public CefCToCpp<CefV8ValueCToCpp, CefV8Value, cef_v8value_t>
{
public:
  CefV8ValueCToCpp(cef_v8value_t* str)
      : CefCToCpp<CefV8ValueCToCpp, CefV8Value, cef_v8value_t>(str) {}
  virtual ~CefV8ValueCToCpp() {}

  // CefV8Value methods
  virtual bool IsUndefined();
  virtual bool IsNull();
  virtual bool IsBool();
  virtual bool IsInt();
  virtual bool IsDouble();
  virtual bool IsString();
  virtual bool IsObject();
  virtual bool IsArray();
  virtual bool IsFunction();
  virtual bool GetBoolValue();
  virtual int GetIntValue();
  virtual double GetDoubleValue();
  virtual CefString GetStringValue();
  virtual bool HasValue(const CefString& key);
  virtual bool HasValue(int index);
  virtual bool DeleteValue(const CefString& key);
  virtual bool DeleteValue(int index);
  virtual CefRefPtr<CefV8Value> GetValue(const CefString& key);
  virtual CefRefPtr<CefV8Value> GetValue(int index);
  virtual bool SetValue(const CefString& key, CefRefPtr<CefV8Value> value);
  virtual bool SetValue(int index, CefRefPtr<CefV8Value> value);
  virtual bool GetKeys(std::vector<CefString>& keys);
  virtual CefRefPtr<CefBase> GetUserData();
  virtual int GetArrayLength();
  virtual CefString GetFunctionName();
  virtual CefRefPtr<CefV8Handler> GetFunctionHandler();
  virtual bool ExecuteFunction(CefRefPtr<CefV8Value> object,
      const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
      CefString& exception);
  virtual bool ExecuteFunctionWithContext(CefRefPtr<CefV8Context> context,
      CefRefPtr<CefV8Value> object, const CefV8ValueList& arguments,
      CefRefPtr<CefV8Value>& retval, CefString& exception);
};

#endif // USING_CEF_SHARED
#endif // _V8VALUE_CTOCPP_H

