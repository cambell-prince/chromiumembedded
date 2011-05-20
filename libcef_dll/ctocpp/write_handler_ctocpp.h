// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// -------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef _WRITEHANDLER_CTOCPP_H
#define _WRITEHANDLER_CTOCPP_H

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else // BUILDING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefWriteHandlerCToCpp
    : public CefCToCpp<CefWriteHandlerCToCpp, CefWriteHandler,
        cef_write_handler_t>
{
public:
  CefWriteHandlerCToCpp(cef_write_handler_t* str)
      : CefCToCpp<CefWriteHandlerCToCpp, CefWriteHandler, cef_write_handler_t>(
          str) {}
  virtual ~CefWriteHandlerCToCpp() {}

  // CefWriteHandler methods
  virtual size_t Write(const void* ptr, size_t size, size_t n) OVERRIDE;
  virtual int Seek(long offset, int whence) OVERRIDE;
  virtual long Tell() OVERRIDE;
  virtual int Flush() OVERRIDE;
};

#endif // BUILDING_CEF_SHARED
#endif // _WRITEHANDLER_CTOCPP_H

