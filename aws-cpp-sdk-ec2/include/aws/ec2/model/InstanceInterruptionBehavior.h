/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class InstanceInterruptionBehavior
  {
    NOT_SET,
    hibernate,
    stop,
    terminate
  };

namespace InstanceInterruptionBehaviorMapper
{
AWS_EC2_API InstanceInterruptionBehavior GetInstanceInterruptionBehaviorForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceInterruptionBehavior(InstanceInterruptionBehavior value);
} // namespace InstanceInterruptionBehaviorMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
