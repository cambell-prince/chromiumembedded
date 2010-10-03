// Copyright (c) 2009 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/read_handler_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

size_t CEF_CALLBACK read_handler_read(struct _cef_read_handler_t* self,
    void* ptr, size_t size, size_t n)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefReadHandlerCppToC::Get(self)->Read(ptr, size, n);
}

int CEF_CALLBACK read_handler_seek(struct _cef_read_handler_t* self,
    long offset, int whence)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefReadHandlerCppToC::Get(self)->Seek(offset, whence);
}

long CEF_CALLBACK read_handler_tell(struct _cef_read_handler_t* self)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefReadHandlerCppToC::Get(self)->Tell();
}

int CEF_CALLBACK read_handler_eof(struct _cef_read_handler_t* self)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefReadHandlerCppToC::Get(self)->Eof();
}


// CONSTRUCTOR - Do not edit by hand.

CefReadHandlerCppToC::CefReadHandlerCppToC(CefReadHandler* cls)
    : CefCppToC<CefReadHandlerCppToC, CefReadHandler, cef_read_handler_t>(cls)
{
  struct_.struct_.read = read_handler_read;
  struct_.struct_.seek = read_handler_seek;
  struct_.struct_.tell = read_handler_tell;
  struct_.struct_.eof = read_handler_eof;
}

#ifdef _DEBUG
long CefCppToC<CefReadHandlerCppToC, CefReadHandler,
    cef_read_handler_t>::DebugObjCt = 0;
#endif

