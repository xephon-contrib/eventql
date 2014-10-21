/**
 * This file is part of the "FnordMetric" project
 *   Copyright (c) 2014 Paul Asmuth, Google Inc.
 *
 * FnordMetric is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#include <fnordmetric/metricdb/samplefieldindex.h>
#include <fnordmetric/metricdb/samplereader.h>

namespace fnordmetric {
namespace metricdb {

SampleReader::SampleReader(
    void* data,
    size_t size,
    SampleFieldIndex* label_index) :
    fnord::util::BinaryMessageReader(data, size),
    label_index_(label_index) {}

template <> double SampleReader::value<double>() {
  return 23.5f;
}

}
}

