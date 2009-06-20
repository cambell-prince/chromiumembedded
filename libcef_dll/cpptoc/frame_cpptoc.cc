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

#include "../precompiled_libcef.h"
#include "cpptoc/frame_cpptoc.h"
#include "cpptoc/request_cpptoc.h"
#include "cpptoc/stream_reader_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK frame_undo(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return;

  CefFrameCppToC::Get(self)->Undo();
}

void CEF_CALLBACK frame_redo(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return;

  CefFrameCppToC::Get(self)->Redo();
}

void CEF_CALLBACK frame_cut(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return;

  CefFrameCppToC::Get(self)->Cut();
}

void CEF_CALLBACK frame_copy(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return;

  CefFrameCppToC::Get(self)->Copy();
}

void CEF_CALLBACK frame_paste(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return;

  CefFrameCppToC::Get(self)->Paste();
}

void CEF_CALLBACK frame_del(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return;

  CefFrameCppToC::Get(self)->Delete();
}

void CEF_CALLBACK frame_select_all(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return;

  CefFrameCppToC::Get(self)->SelectAll();
}

void CEF_CALLBACK frame_print(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return;

  CefFrameCppToC::Get(self)->Print();
}

void CEF_CALLBACK frame_view_source(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return;

  CefFrameCppToC::Get(self)->ViewSource();
}

cef_string_t CEF_CALLBACK frame_get_source(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return NULL;

  std::wstring sourceStr = CefFrameCppToC::Get(self)->GetSource();
  if(!sourceStr.empty())
    return cef_string_alloc(sourceStr.c_str());
  return NULL;
}

cef_string_t CEF_CALLBACK frame_get_text(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return NULL;

  std::wstring textStr = CefFrameCppToC::Get(self)->GetText();
  if(!textStr.empty())
    return cef_string_alloc(textStr.c_str());
  return NULL;
}

void CEF_CALLBACK frame_load_request(struct _cef_frame_t* self,
    struct _cef_request_t* request)
{
  DCHECK(self);
  DCHECK(request);
  if(!self || !request)
    return;

  CefRefPtr<CefRequest> requestPtr = CefRequestCppToC::Unwrap(request);
  CefFrameCppToC::Get(self)->LoadRequest(requestPtr);
}

void CEF_CALLBACK frame_load_url(struct _cef_frame_t* self, const wchar_t* url)
{
  DCHECK(self);
  if(!self)
    return;

  std::wstring urlStr;
  if(url)
    urlStr = url;
  CefFrameCppToC::Get(self)->LoadURL(urlStr);
}

void CEF_CALLBACK frame_load_string(struct _cef_frame_t* self,
    const wchar_t* string, const wchar_t* url)
{
  DCHECK(self);
  if(!self)
    return;

  std::wstring stringStr, urlStr;
  if(string)
    stringStr = string;
  if(url)
    urlStr = url;
  CefFrameCppToC::Get(self)->LoadString(stringStr, urlStr);
}

void CEF_CALLBACK frame_load_stream(struct _cef_frame_t* self,
    struct _cef_stream_reader_t* stream, const wchar_t* url)
{
  DCHECK(self);
  DCHECK(stream);
  if(!self || !stream)
    return;

  CefRefPtr<CefStreamReader> streamPtr = CefStreamReaderCppToC::Unwrap(stream);
  std::wstring urlStr;
  if(url)
    urlStr = url;
  
  CefFrameCppToC::Get(self)->LoadStream(streamPtr, urlStr);
}

void CEF_CALLBACK frame_execute_java_script(struct _cef_frame_t* self,
    const wchar_t* jsCode, const wchar_t* scriptUrl, int startLine)
{
  DCHECK(self);
  if(!self)
    return;

  std::wstring jsCodeStr, scriptUrlStr;
  if(jsCode)
    jsCodeStr = jsCode;
  if(scriptUrl)
    scriptUrlStr = scriptUrl;

  CefFrameCppToC::Get(self)->ExecuteJavaScript(jsCodeStr, scriptUrlStr,
      startLine);
}

int CEF_CALLBACK frame_is_main(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefFrameCppToC::Get(self)->IsMain();
}

int CEF_CALLBACK frame_is_focused(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefFrameCppToC::Get(self)->IsFocused();
}

cef_string_t CEF_CALLBACK frame_get_name(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return 0;

  std::wstring nameStr = CefFrameCppToC::Get(self)->GetName();
  if(!nameStr.empty())
    return cef_string_alloc(nameStr.c_str());
  return NULL;
}

cef_string_t CEF_CALLBACK frame_get_url(struct _cef_frame_t* self)
{
  DCHECK(self);
  if(!self)
    return NULL;

  std::wstring urlStr = CefFrameCppToC::Get(self)->GetURL();
  if(!urlStr.empty())
    return cef_string_alloc(urlStr.c_str());
  return NULL;
}


// CONSTRUCTOR - Do not edit by hand.

CefFrameCppToC::CefFrameCppToC(CefFrame* cls)
    : CefCppToC<CefFrameCppToC, CefFrame, cef_frame_t>(cls)
{
  struct_.struct_.undo = frame_undo;
  struct_.struct_.redo = frame_redo;
  struct_.struct_.cut = frame_cut;
  struct_.struct_.copy = frame_copy;
  struct_.struct_.paste = frame_paste;
  struct_.struct_.del = frame_del;
  struct_.struct_.select_all = frame_select_all;
  struct_.struct_.print = frame_print;
  struct_.struct_.view_source = frame_view_source;
  struct_.struct_.get_source = frame_get_source;
  struct_.struct_.get_text = frame_get_text;
  struct_.struct_.load_request = frame_load_request;
  struct_.struct_.load_url = frame_load_url;
  struct_.struct_.load_string = frame_load_string;
  struct_.struct_.load_stream = frame_load_stream;
  struct_.struct_.execute_java_script = frame_execute_java_script;
  struct_.struct_.is_main = frame_is_main;
  struct_.struct_.is_focused = frame_is_focused;
  struct_.struct_.get_name = frame_get_name;
  struct_.struct_.get_url = frame_get_url;
}

#ifdef _DEBUG
long CefCppToC<CefFrameCppToC, CefFrame, cef_frame_t>::DebugObjCt = 0;
#endif

