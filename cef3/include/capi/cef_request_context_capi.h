// Copyright (c) 2013 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef CEF_INCLUDE_CAPI_CEF_REQUEST_CONTEXT_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_REQUEST_CONTEXT_CAPI_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "include/capi/cef_base_capi.h"


///
// A request context provides request handling for a set of related browser
// objects. A request context is specified when creating a new browser object
// via the cef_browser_host_t static factory functions. Browser objects with
// different request contexts will never be hosted in the same render process.
// Browser objects with the same request context may or may not be hosted in the
// same render process depending on the process model. Browser objects created
// indirectly via the JavaScript window.open function or targeted links will
// share the same render process and the same request context as the source
// browser. When running in single-process mode there is only a single render
// process (the main process) and so all browsers created in single-process mode
// will share the same request context. This will be the first request context
// passed into a cef_browser_host_t static factory function and all other
// request context objects will be ignored.
///
typedef struct _cef_request_context_t {
  ///
  // Base structure.
  ///
  cef_base_t base;

  ///
  // Returns true (1) if this object is pointing to the same context as |that|
  // object.
  ///
  int (CEF_CALLBACK *is_same)(struct _cef_request_context_t* self,
      struct _cef_request_context_t* other);

  ///
  // Returns true (1) if this object is the global context.
  ///
  int (CEF_CALLBACK *is_global)(struct _cef_request_context_t* self);

  ///
  // Returns the handler for this context if any.
  ///
  struct _cef_request_context_handler_t* (CEF_CALLBACK *get_handler)(
      struct _cef_request_context_t* self);
} cef_request_context_t;


///
// Returns the global context object.
///
CEF_EXPORT cef_request_context_t* cef_request_context_get_global_context();

///
// Creates a new context object with the specified handler.
///
CEF_EXPORT cef_request_context_t* cef_request_context_create_context(
    struct _cef_request_context_handler_t* handler);


#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_REQUEST_CONTEXT_CAPI_H_
