// Copyright (c) 2008-2009 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#if defined(OS_WIN)
#include <windows.h>
#endif
#include <string>

#include "base/string_piece.h"
#include "v8/include/v8.h"

namespace WebKit {
class WebFrame;
class WebView;
}

namespace webkit_glue {

#if defined(OS_WIN)
// Capture a bitmap of the web view.
void CaptureWebViewBitmap(HWND mainWnd, WebKit::WebView* webview,
                          HBITMAP& bitmap, SIZE& size);

// Save a bitmap image to file, providing optional alternative data in |lpBits|
BOOL SaveBitmapToFile(HBITMAP hBmp, HDC hDC, LPCTSTR file, LPBYTE lpBits);
#endif
  
#if defined(OS_MACOSX)
void InitializeDataPak();
#endif

// Text encoding objects must be initialized on the main thread.
void InitializeTextEncoding();

// This is called indirectly by the network layer to access resources.
base::StringPiece NetResourceProvider(int key);

// Retrieve the V8 context associated with the frame.
v8::Handle<v8::Context> GetV8Context(WebKit::WebFrame* frame);

// Clear all cached data.
void ClearCache();

// Returns true if the request represents a download based on
// the supplied Content-Type and Content-Disposition headers.
bool ShouldDownload(const std::string& content_disposition,
                    const std::string& mime_type);

}  // namespace webkit_glue
