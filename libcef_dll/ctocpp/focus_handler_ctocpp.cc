// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/domnode_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/ctocpp/focus_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefFocusHandlerCToCpp::OnTakeFocus(CefRefPtr<CefBrowser> browser,
    bool next)
{
  if (CEF_MEMBER_MISSING(struct_, on_take_focus))
    return;

  struct_->on_take_focus(struct_, CefBrowserCppToC::Wrap(browser), next);
}

bool CefFocusHandlerCToCpp::OnSetFocus(CefRefPtr<CefBrowser> browser,
    FocusSource source)
{
  if (CEF_MEMBER_MISSING(struct_, on_set_focus))
    return false;

  return struct_->on_set_focus(struct_, CefBrowserCppToC::Wrap(browser),
      source) ? true : false;
}

void CefFocusHandlerCToCpp::OnFocusedNodeChanged(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame, CefRefPtr<CefDOMNode> node)
{
  if (CEF_MEMBER_MISSING(struct_, on_focused_node_changed))
    return;

  struct_->on_focused_node_changed(struct_,
      CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefDOMNodeCppToC::Wrap(node));
}


#ifndef NDEBUG
template<> long CefCToCpp<CefFocusHandlerCToCpp, CefFocusHandler,
    cef_focus_handler_t>::DebugObjCt = 0;
#endif

