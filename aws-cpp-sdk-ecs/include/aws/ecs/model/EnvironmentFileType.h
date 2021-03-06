/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class EnvironmentFileType
  {
    NOT_SET,
    s3
  };

namespace EnvironmentFileTypeMapper
{
AWS_ECS_API EnvironmentFileType GetEnvironmentFileTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForEnvironmentFileType(EnvironmentFileType value);
} // namespace EnvironmentFileTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
