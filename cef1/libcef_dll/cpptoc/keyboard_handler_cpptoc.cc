// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/keyboard_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK keyboard_handler_on_key_event(
    struct _cef_keyboard_handler_t* self, cef_browser_t* browser,
    enum cef_handler_keyevent_type_t type, int code, int modifiers,
    int isSystemKey, int isAfterJavaScript) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;

  // Execute
  bool _retval = CefKeyboardHandlerCppToC::Get(self)->OnKeyEvent(
      CefBrowserCToCpp::Wrap(browser),
      type,
      code,
      modifiers,
      isSystemKey?true:false,
      isAfterJavaScript?true:false);

  // Return type: bool
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefKeyboardHandlerCppToC::CefKeyboardHandlerCppToC(CefKeyboardHandler* cls)
    : CefCppToC<CefKeyboardHandlerCppToC, CefKeyboardHandler,
        cef_keyboard_handler_t>(cls) {
  struct_.struct_.on_key_event = keyboard_handler_on_key_event;
}

#ifndef NDEBUG
template<> long CefCppToC<CefKeyboardHandlerCppToC, CefKeyboardHandler,
    cef_keyboard_handler_t>::DebugObjCt = 0;
#endif

