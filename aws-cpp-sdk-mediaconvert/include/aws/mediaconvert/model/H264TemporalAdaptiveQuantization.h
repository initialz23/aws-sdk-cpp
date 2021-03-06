/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class H264TemporalAdaptiveQuantization
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264TemporalAdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API H264TemporalAdaptiveQuantization GetH264TemporalAdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264TemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization value);
} // namespace H264TemporalAdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
