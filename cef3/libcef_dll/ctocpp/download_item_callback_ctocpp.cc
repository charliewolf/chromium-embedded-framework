// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/ctocpp/download_item_callback_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefDownloadItemCallbackCToCpp::Cancel() {
  if (CEF_MEMBER_MISSING(struct_, cancel))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->cancel(struct_);
}

void CefDownloadItemCallbackCToCpp::Pause() {
  if (CEF_MEMBER_MISSING(struct_, pause))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->pause(struct_);
}

void CefDownloadItemCallbackCToCpp::Resume() {
  if (CEF_MEMBER_MISSING(struct_, resume))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->resume(struct_);
}


#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefDownloadItemCallbackCToCpp,
    CefDownloadItemCallback, cef_download_item_callback_t>::DebugObjCt = 0;
#endif

