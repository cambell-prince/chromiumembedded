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

#include "libcef_dll/cpptoc/allow_certificate_error_callback_cpptoc.h"
#include "libcef_dll/cpptoc/auth_callback_cpptoc.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/quota_callback_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/web_plugin_info_cpptoc.h"
#include "libcef_dll/ctocpp/request_handler_ctocpp.h"
#include "libcef_dll/ctocpp/resource_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefRequestHandlerCToCpp::OnBeforeResourceLoad(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request) {
  if (CEF_MEMBER_MISSING(struct_, on_before_resource_load))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return false;
  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return false;

  // Execute
  int _retval = struct_->on_before_resource_load(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request));

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefResourceHandler> CefRequestHandlerCToCpp::GetResourceHandler(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request) {
  if (CEF_MEMBER_MISSING(struct_, get_resource_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return NULL;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return NULL;
  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return NULL;

  // Execute
  cef_resource_handler_t* _retval = struct_->get_resource_handler(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request));

  // Return type: refptr_same
  return CefResourceHandlerCToCpp::Wrap(_retval);
}

void CefRequestHandlerCToCpp::OnResourceRedirect(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame, const CefString& old_url, CefString& new_url) {
  if (CEF_MEMBER_MISSING(struct_, on_resource_redirect))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;
  // Verify param: old_url; type: string_byref_const
  DCHECK(!old_url.empty());
  if (old_url.empty())
    return;

  // Execute
  struct_->on_resource_redirect(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      old_url.GetStruct(),
      new_url.GetWritableStruct());
}

bool CefRequestHandlerCToCpp::GetAuthCredentials(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame, bool isProxy, const CefString& host, int port,
    const CefString& realm, const CefString& scheme,
    CefRefPtr<CefAuthCallback> callback) {
  if (CEF_MEMBER_MISSING(struct_, get_auth_credentials))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return false;
  // Verify param: host; type: string_byref_const
  DCHECK(!host.empty());
  if (host.empty())
    return false;
  // Verify param: scheme; type: string_byref_const
  DCHECK(!scheme.empty());
  if (scheme.empty())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;
  // Unverified params: realm

  // Execute
  int _retval = struct_->get_auth_credentials(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      isProxy,
      host.GetStruct(),
      port,
      realm.GetStruct(),
      scheme.GetStruct(),
      CefAuthCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval?true:false;
}

bool CefRequestHandlerCToCpp::OnQuotaRequest(CefRefPtr<CefBrowser> browser,
    const CefString& origin_url, int64 new_size,
    CefRefPtr<CefQuotaCallback> callback) {
  if (CEF_MEMBER_MISSING(struct_, on_quota_request))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: origin_url; type: string_byref_const
  DCHECK(!origin_url.empty());
  if (origin_url.empty())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;

  // Execute
  int _retval = struct_->on_quota_request(struct_,
      CefBrowserCppToC::Wrap(browser),
      origin_url.GetStruct(),
      new_size,
      CefQuotaCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval?true:false;
}

void CefRequestHandlerCToCpp::OnProtocolExecution(CefRefPtr<CefBrowser> browser,
    const CefString& url, bool& allow_os_execution) {
  if (CEF_MEMBER_MISSING(struct_, on_protocol_execution))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return;

  // Translate param: allow_os_execution; type: bool_byref
  int allow_os_executionInt = allow_os_execution;

  // Execute
  struct_->on_protocol_execution(struct_,
      CefBrowserCppToC::Wrap(browser),
      url.GetStruct(),
      &allow_os_executionInt);

  // Restore param:allow_os_execution; type: bool_byref
  allow_os_execution = allow_os_executionInt?true:false;
}

bool CefRequestHandlerCToCpp::OnBeforePluginLoad(CefRefPtr<CefBrowser> browser,
    const CefString& url, const CefString& policy_url,
    CefRefPtr<CefWebPluginInfo> info) {
  if (CEF_MEMBER_MISSING(struct_, on_before_plugin_load))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: info; type: refptr_diff
  DCHECK(info.get());
  if (!info.get())
    return false;
  // Unverified params: url, policy_url

  // Execute
  int _retval = struct_->on_before_plugin_load(struct_,
      CefBrowserCppToC::Wrap(browser),
      url.GetStruct(),
      policy_url.GetStruct(),
      CefWebPluginInfoCppToC::Wrap(info));

  // Return type: bool
  return _retval?true:false;
}

bool CefRequestHandlerCToCpp::OnCertificateError(cef_errorcode_t cert_error,
    const CefString& request_url,
    CefRefPtr<CefAllowCertificateErrorCallback> callback) {
  if (CEF_MEMBER_MISSING(struct_, on_certificate_error))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request_url; type: string_byref_const
  DCHECK(!request_url.empty());
  if (request_url.empty())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;

  // Execute
  int _retval = struct_->on_certificate_error(struct_,
      cert_error,
      request_url.GetStruct(),
      CefAllowCertificateErrorCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefRequestHandlerCToCpp, CefRequestHandler,
    cef_request_handler_t>::DebugObjCt = 0;
#endif

