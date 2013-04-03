# Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
# reserved. Use of this source code is governed by a BSD-style license that
# can be found in the LICENSE file.

{
  'includes': [
    # Bring in the autogenerated source file lists.
    'cef_paths.gypi',
   ],
  'variables': {
    'includes_common': [
      'include/cef_base.h',
      'include/cef_nplugin.h',
      'include/cef_runnable.h',
      'include/cef_version.h',
      'include/internal/cef_build.h',
      'include/internal/cef_export.h',
      'include/internal/cef_nplugin_types.h',
      'include/internal/cef_ptr.h',
      'include/internal/cef_string.h',
      'include/internal/cef_string_list.h',
      'include/internal/cef_string_map.h',
      'include/internal/cef_string_multimap.h',
      'include/internal/cef_string_types.h',
      'include/internal/cef_string_wrappers.h',
      'include/internal/cef_time.h',
      'include/internal/cef_tuple.h',
      'include/internal/cef_types.h',
      'include/internal/cef_types_wrappers.h',
      '<@(autogen_cpp_includes)',
    ],
    'includes_capi': [
      'include/capi/cef_base_capi.h',
      'include/capi/cef_nplugin_capi.h',
      '<@(autogen_capi_includes)',
    ],
    'includes_wrapper': [
      'include/wrapper/cef_byte_read_handler.h',
      'include/wrapper/cef_xml_object.h',
      'include/wrapper/cef_zip_archive.h',
    ],
    'includes_win': [
      'include/internal/cef_types_win.h',
      'include/internal/cef_win.h',
    ],
    'includes_mac': [
      'include/cef_application_mac.h',
      'include/internal/cef_mac.h',
      'include/internal/cef_types_mac.h',
    ],
    'includes_linux': [
      'include/internal/cef_linux.h',
      'include/internal/cef_types_linux.h',
    ],
    'libcef_sources_common': [
      'libcef_dll/cef_logging.h',
      'libcef_dll/cpptoc/cpptoc.h',
      'libcef_dll/ctocpp/ctocpp.h',
      'libcef_dll/libcef_dll.cc',
      'libcef_dll/libcef_dll2.cc',
      'libcef_dll/resource.h',
      'libcef_dll/transfer_util.cpp',
      'libcef_dll/transfer_util.h',
      '<@(autogen_library_side)',
    ],
    'libcef_dll_wrapper_sources_common': [
      'libcef_dll/cef_logging.h',
      'libcef_dll/cpptoc/base_cpptoc.h',
      'libcef_dll/cpptoc/cpptoc.h',
      'libcef_dll/ctocpp/base_ctocpp.h',
      'libcef_dll/ctocpp/ctocpp.h',
      'libcef_dll/transfer_util.cpp',
      'libcef_dll/transfer_util.h',
      'libcef_dll/wrapper/cef_byte_read_handler.cc',
      'libcef_dll/wrapper/cef_xml_object.cc',
      'libcef_dll/wrapper/cef_zip_archive.cc',
      'libcef_dll/wrapper/libcef_dll_wrapper.cc',
      'libcef_dll/wrapper/libcef_dll_wrapper2.cc',
      '<@(autogen_client_side)',
    ],
    'cefclient_bundle_resources_common': [
      'tests/cefclient/res/dialogs.html',
      'tests/cefclient/res/domaccess.html',
      'tests/cefclient/res/localstorage.html',
      'tests/cefclient/res/logo.png',
      'tests/cefclient/res/other_tests.html',
      'tests/cefclient/res/performance.html',
      'tests/cefclient/res/transparency.html',
      'tests/cefclient/res/xmlhttprequest.html',
    ],
    'cefclient_sources_common': [
      'tests/cefclient/binding_test.cpp',
      'tests/cefclient/binding_test.h',
      'tests/cefclient/cefclient.cpp',
      'tests/cefclient/cefclient.h',
      'tests/cefclient/cefclient_switches.cpp',
      'tests/cefclient/cefclient_switches.h',
      'tests/cefclient/client_handler.cpp',
      'tests/cefclient/client_handler.h',
      'tests/cefclient/client_popup_handler.cpp',
      'tests/cefclient/client_popup_handler.h',
      'tests/cefclient/download_handler.cpp',
      'tests/cefclient/download_handler.h',
      'tests/cefclient/extension_test.cpp',
      'tests/cefclient/extension_test.h',
      'tests/cefclient/performance_test.cpp',
      'tests/cefclient/performance_test.h',
      'tests/cefclient/performance_test_setup.h',
      'tests/cefclient/performance_test_tests.cpp',
      'tests/cefclient/resource_util.h',
      'tests/cefclient/scheme_test.cpp',
      'tests/cefclient/scheme_test.h',
      'tests/cefclient/string_util.cpp',
      'tests/cefclient/string_util.h',
      'tests/cefclient/util.h',
      '<@(cefclient_bundle_resources_common)',
    ],
    'cefclient_sources_win': [
      'tests/cefclient/cefclient.rc',
      'tests/cefclient/cefclient_win.cpp',
      'tests/cefclient/client_handler_win.cpp',
      'tests/cefclient/clientplugin.cpp',
      'tests/cefclient/clientplugin.h',
      'tests/cefclient/osrenderer.cpp',
      'tests/cefclient/osrenderer.h',
      'tests/cefclient/osrplugin.cpp',
      'tests/cefclient/osrplugin.h',
      'tests/cefclient/osrplugin_test.cpp',
      'tests/cefclient/osrplugin_test.h',
      'tests/cefclient/plugin_test.cpp',
      'tests/cefclient/plugin_test.h',
      'tests/cefclient/Resource.h',
      'tests/cefclient/res/cefclient.ico',
      'tests/cefclient/res/logoball.png',
      'tests/cefclient/res/modaldialog.html',
      'tests/cefclient/res/modalmain.html',
      'tests/cefclient/res/osrplugin.html',
      'tests/cefclient/res/small.ico',
      'tests/cefclient/res/uiplugin.html',
      'tests/cefclient/resource_util_win.cpp',
      'tests/cefclient/uiplugin.cpp',
      'tests/cefclient/uiplugin.h',
      'tests/cefclient/uiplugin_test.cpp',
      'tests/cefclient/uiplugin_test.h',
    ],
    'cefclient_sources_mac': [
      'tests/cefclient/cefclient_mac.mm',
      'tests/cefclient/client_handler_mac.mm',
      'tests/cefclient/osrenderer.cpp',
      'tests/cefclient/osrenderer.h',
      'tests/cefclient/osrtest_mac.h',
      'tests/cefclient/osrtest_mac.mm',
      'tests/cefclient/resource_util_mac.mm',
      'tests/cefclient/resource_util_posix.cpp',
    ],
    'cefclient_bundle_resources_mac': [
      'tests/cefclient/mac/cefclient.icns',
      'tests/cefclient/mac/English.lproj/InfoPlist.strings',
      'tests/cefclient/mac/English.lproj/MainMenu.xib',
      'tests/cefclient/mac/Info.plist',
      'tests/cefclient/res/osrtest.html',
      '<@(cefclient_bundle_resources_common)',
    ],
    'cefclient_sources_linux': [
      'tests/cefclient/cefclient_gtk.cpp',
      'tests/cefclient/client_handler_gtk.cpp',
      'tests/cefclient/resource_util_linux.cpp',
      'tests/cefclient/resource_util_posix.cpp',
    ],
    'cefclient_bundle_resources_linux': [
      '<@(cefclient_bundle_resources_common)',
    ],
  },
}
