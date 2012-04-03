// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_ZIP_READER_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_ZIP_READER_CPPTOC_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_zip_reader.h"
#include "include/capi/cef_zip_reader_capi.h"
#include "libcef_dll/cpptoc/cpptoc.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefZipReaderCppToC
    : public CefCppToC<CefZipReaderCppToC, CefZipReader, cef_zip_reader_t> {
 public:
  explicit CefZipReaderCppToC(CefZipReader* cls);
  virtual ~CefZipReaderCppToC() {}
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CPPTOC_ZIP_READER_CPPTOC_H_

