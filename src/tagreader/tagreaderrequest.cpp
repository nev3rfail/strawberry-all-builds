/*
 * Strawberry Music Player
 * Copyright 2024-2025, Jonas Kvinge <jonas@jkvinge.net>
 *
 * Strawberry is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Strawberry is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Strawberry.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "core/logging.h"

#include "tagreaderrequest.h"

TagReaderRequest::TagReaderRequest(const QString &_filename) : filename(_filename) {

  qLog(Debug) << "New tagreader request for" << filename;

}

TagReaderRequest::TagReaderRequest(const QUrl &_url, const QString &_filename) : filename(_filename), url(_url) {

  qLog(Debug) << "New tagreader request for" << filename << url;

}

TagReaderRequest::~TagReaderRequest() {

  if (url.isValid()) {
    qLog(Debug) << "Tagreader request for" << filename << url << "deleted";
  }
  else {
    qLog(Debug) << "Tagreader request for" << filename << "deleted";
  }

}
