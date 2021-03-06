/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class CloseStatus
  {
    NOT_SET,
    COMPLETED,
    FAILED,
    CANCELED,
    TERMINATED,
    CONTINUED_AS_NEW,
    TIMED_OUT
  };

namespace CloseStatusMapper
{
AWS_SWF_API CloseStatus GetCloseStatusForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForCloseStatus(CloseStatus value);
} // namespace CloseStatusMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
