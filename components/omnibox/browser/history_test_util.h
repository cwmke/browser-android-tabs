// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_OMNIBOX_BROWSER_HISTORY_TEST_UTIL_H_
#define COMPONENTS_OMNIBOX_BROWSER_HISTORY_TEST_UTIL_H_

namespace sql {
class Connection;
}  // namespace sql

namespace history {

class HistoryDatabase;
class URLRow;

void AddFakeURLToHistoryDB(HistoryDatabase* history_db, const URLRow& url_row);

}  // namespace history

#endif  // COMPONENTS_OMNIBOX_BROWSER_HISTORY_TEST_UTIL_H_
