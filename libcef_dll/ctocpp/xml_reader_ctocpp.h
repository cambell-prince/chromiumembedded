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

#ifndef _XMLREADER_CTOCPP_H
#define _XMLREADER_CTOCPP_H

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else // USING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefXmlReaderCToCpp
    : public CefCToCpp<CefXmlReaderCToCpp, CefXmlReader, cef_xml_reader_t>
{
public:
  CefXmlReaderCToCpp(cef_xml_reader_t* str)
      : CefCToCpp<CefXmlReaderCToCpp, CefXmlReader, cef_xml_reader_t>(str) {}
  virtual ~CefXmlReaderCToCpp() {}

  // CefXmlReader methods
  virtual bool MoveToNextNode();
  virtual bool Close();
  virtual bool HasError();
  virtual std::wstring GetError();
  virtual NodeType GetType();
  virtual int GetDepth();
  virtual std::wstring GetLocalName();
  virtual std::wstring GetPrefix();
  virtual std::wstring GetQualifiedName();
  virtual std::wstring GetNamespaceURI();
  virtual std::wstring GetBaseURI();
  virtual std::wstring GetXmlLang();
  virtual bool IsEmptyElement();
  virtual bool HasValue();
  virtual std::wstring GetValue();
  virtual bool HasAttributes();
  virtual size_t GetAttributeCount();
  virtual std::wstring GetAttribute(int index);
  virtual std::wstring GetAttribute(const std::wstring& qualifiedName);
  virtual std::wstring GetAttribute(const std::wstring& localName,
      const std::wstring& namespaceURI);
  virtual std::wstring GetInnerXml();
  virtual std::wstring GetOuterXml();
  virtual int GetLineNumber();
  virtual bool MoveToAttribute(int index);
  virtual bool MoveToAttribute(const std::wstring& qualifiedName);
  virtual bool MoveToAttribute(const std::wstring& localName,
      const std::wstring& namespaceURI);
  virtual bool MoveToFirstAttribute();
  virtual bool MoveToNextAttribute();
  virtual bool MoveToCarryingElement();
};

#endif // USING_CEF_SHARED
#endif // _XMLREADER_CTOCPP_H

